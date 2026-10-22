#ifndef VOLTAGE_MONITOR_H
#define VOLTAGE_MONITOR_H

typedef enum
{
    VOLTAGE_OK,
    UNDERVOLTAGE,
    OVERVOLTAGE
} VoltageStatus_t;

VoltageStatus_t CheckVoltage(float voltage);

#endif
