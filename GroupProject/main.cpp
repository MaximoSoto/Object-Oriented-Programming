#include <iostream>
#include <string>
#include <vector>
#include "TelemetryRecord.h"
#include "Input.h"
#include "Hub.h"
using namespace std;

int main()
{
    TelemetryRecord T1 = TelemetryRecord();
    Hub H1 = Hub();
    loadDataFromFile("iot_telemetry_data.csv", T1);

    H1.convertTemp(T1);

    H1.writeCoToCsv("Deliverables/output_co.csv", T1);
    H1.writeHumidityToCsv("Deliverables/output_humidity.csv", T1);
    H1.writeLightToCsv("Deliverables/output_light.csv", T1);
    H1.writeLpgToCsv("Deliverables/output_lpg.csv", T1);
    H1.writeMotionToCsv("Deliverables/output_motion.csv", T1);
    H1.writeSmokeToCsv("Deliverables/output_smoke.csv", T1);
    H1.writeTempToCsv("Deliverables/output_temp.csv", T1);
    
}