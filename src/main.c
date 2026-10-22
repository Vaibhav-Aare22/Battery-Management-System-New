#include <stdio.h>

#include "voltage_monitor.h"
#include "diagnostics.h"

#define DTC_UNDERVOLTAGE 1001
#define DTC_OVERVOLTAGE 1002

int main(void)
{
    float voltage;

    printf("Enter Measured Voltage : ");
    scanf("%f", &voltage);

    VoltageStatus_t status;

    status = CheckVoltage(voltage);

    switch(status)
    {
        case UNDERVOLTAGE:
            printf("Undervoltage Detected\n");
            ReportDiagnostic(DTC_UNDERVOLTAGE);
            break;

        case OVERVOLTAGE:
            printf("Overvoltage Detected\n");
            ReportDiagnostic(DTC_OVERVOLTAGE);
            break;

        default:
            printf("Voltage OK\n");
            break;
    }

    return 0;
}
