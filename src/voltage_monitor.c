#include "voltage_monitor.h"

#define UV_THRESHOLD 18.0f
#define OV_THRESHOLD 30.0f

VoltageStatus_t CheckVoltage(float voltage)
{
    if(voltage < UV_THRESHOLD)
    {
        return UNDERVOLTAGE;
    }
    else if(voltage > OV_THRESHOLD)
    {
        return OVERVOLTAGE;
    }
    else
    {
        return VOLTAGE_OK;
    }
}
