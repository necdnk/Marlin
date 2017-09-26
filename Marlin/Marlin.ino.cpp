# 1 "/tmp/tmpuZig38"
#include <Arduino.h>
# 1 "/home/nec/projects/MyMarlin/Marlin/Marlin/Marlin.ino"
# 33 "/home/nec/projects/MyMarlin/Marlin/Marlin/Marlin.ino"
#include "Configuration.h"
#include "pins.h"

#ifdef ULTRA_LCD
  #if defined(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif defined(LCD_I2C_TYPE_MCP23017) || defined(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif defined(DOGLCD)
    #include <U8glib.h>
  #else
    #include <LiquidCrystal.h>
  #endif
#endif

#if HAS_DIGIPOTSS
  #include <SPI.h>
#endif

#if defined(DIGIPOT_I2C)
  #include <Wire.h>
#endif

#ifdef HAVE_TMCDRIVER
  #include <SPI.h>
  #include <TMC26XStepper.h>
#endif

#ifdef HAVE_L6470DRIVER
  #include <SPI.h>
  #include <L6470.h>
#endif
