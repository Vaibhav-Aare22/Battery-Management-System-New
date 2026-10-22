#include <assert.h>
#include "voltage_monitor.h"

int main(void)
{
    assert(CheckVoltage(15.0f) == UNDERVOLTAGE);
    assert(CheckVoltage(24.0f) == VOLTAGE_OK);
    assert(CheckVoltage(32.0f) == OVERVOLTAGE);

    return 0;
}
