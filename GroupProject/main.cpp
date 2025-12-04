#include <iostream>
#include <string>
#include <vector>
#include "TelemetryRecord.h"
#include "Input.h"
using namespace std;

int main()
{
    TelemetryRecord T1 = TelemetryRecord();
    loadDataFromFile("iot_telemetry_data.csv", T1);

    for(int i = 0; i < T1.get_size(); i++){
        cout << i + 1 << " " << T1.get_ts(i) << "  " << T1.get_device(i) << "  " << T1.get_co(i) << "  " << T1.get_humidity(i) << "  " << (T1.get_light(i) ? "TRUE" : "FALSE") << "  " << T1.get_lpg(i) << "   " << (T1.get_motion(i) ? "TRUE" : "FALSE") << "  " << T1.get_smoke(i) << "  " << T1.get_temp(i) << endl;
        if(T1.get_motion(i) == 1){
            break;
        }
    }
    cout << endl << T1.get_size();
}