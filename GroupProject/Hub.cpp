#include "Hub.h"
#include <string>
#include <vector>
#include "TelemetryRecord.h"
#include <fstream>

Hub::Hub()
{
}
// Converts temp from Fahrenheit to Celsius for all entries in TelemetryRecord
void Hub::convertTemp(TelemetryRecord &Record){
    for(int i = 0; i < Record.get_size(); i++){
        double upd_temp = ((Record.get_temp(i)) - 32) / 1.8;
        Record.update_temp(i, upd_temp);
    }
}
//The code for the creation of a .csv output file with the timestamp, device, and desired data type (in this case co).
bool Hub::writeCoToCsv(const string& fileName, const TelemetryRecord &Record){ // fileName is the desired name of the new file, Record refers to an object of type Telemetry Record
    ofstream out(fileName);
    if(!out.is_open()){ // The error check
        return false;
    }

    out << "ts,device,co\n"; //Creates the header line

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_co(i) << '\n'; //adds all the data line by line until there is no more data
    }
    return true;
}

bool Hub::writeHumidityToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,humidity\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_humidity(i) << '\n';
    }
    return true;
}

bool Hub::writeLightToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,light\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << (Record.get_light(i) ? "TRUE" : "FALSE") << '\n';
    }
    return true;
}

bool Hub::writeLpgToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,lpg\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_lpg(i) << '\n';
    }
    return true;
}

bool Hub::writeMotionToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,motion\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << (Record.get_motion(i) ? "TRUE" : "FALSE") << '\n';
    }
    return true;
}

bool Hub::writeSmokeToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,smoke\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_smoke(i) << '\n';
    }
    return true;
}

bool Hub::writeTempToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,temp\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_temp(i) << '\n';
    }
    return true;
}

Hub::~Hub()
{
}