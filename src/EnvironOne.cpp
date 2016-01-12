/*
 * ----------------------------------------------------------------------------
 *            _____ _           _                   _
 *           | ____| | ___  ___| |_ _ __ ___  _ __ (_) ___
 *           |  _| | |/ _ \/ __| __| '__/ _ \| '_ \| |/ __|
 *           | |___| |  __/ (__| |_| | | (_) | | | | | (__
 *           |_____|_|\___|\___|\__|_|  \___/|_| |_|_|\___|
 *            ____                   _   ____
 *           / ___|_      _____  ___| |_|  _ \ ___  __ _ ___
 *           \___ \ \ /\ / / _ \/ _ \ __| |_) / _ \/ _` / __|
 *            ___) \ V  V /  __/  __/ |_|  __/  __/ (_| \__ \
 *           |____/ \_/\_/ \___|\___|\__|_|   \___|\__,_|___/
 *
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <pontus@sweetpeas.se> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return - Pontus Oldberg
 * ----------------------------------------------------------------------------
 */
#include <Arduino.h>
#include "Bme280.h"
#include "Opt3001.h"
#include "EnvironOne.h"

EnvironOneClass::EnvironOneClass(): initialized(false)
{
    BME280Class();
    OPT3001Class();
}

/*
 * This method can be used when the Wire library is already initialized
 * by the caller.
 */
void EnvironOneClass::begin()
{
    OPT3001Class::begin(DEFAULT_CONFIG_800);
    initialized = true;
}

void EnvironOneClass::begin(uint8_t sda, uint8_t scl)
{
//    Wire.begin(sda, scl);
    begin();
}
