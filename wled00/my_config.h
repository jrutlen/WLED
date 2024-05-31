#pragma once
// uncomment to force the compiler to show a warning to confirm that this file is included
//#warning **** my_config.h: Settings from this file are honored ****

/* Uncomment to use your WIFI settings as defaults
  //WARNING: this will hardcode these as the default even after a factory reset
#define CLIENT_SSID "Your_SSID"
#define CLIENT_PASS "Your_Password"
*/

//#define MAX_LEDS 1500       // Maximum total LEDs. More than 1500 might create a low memory situation on ESP8266.
//#define MDNS_NAME "wled"    // mDNS hostname, ie: *.local

// #define USERMOD_BATTERY // Enable battery status usermod
// #define USERMOD_BATTERY_MEASUREMENT_PIN 0 // Battery measurement pin, ADC1_CH0
// #define USERMOD_BATTERY_MAX_VOLTAGE 4.2 // Maximum battery voltage
// #define USERMOD_BATTERY_MIN_VOLTAGE 3.1 // Minimum battery voltage
// #define USERMOD_BATTERY_TOTAL_CAPACITY 1100 // Battery capacity in mAh
// #define USERMOD_BATTERY_AUTO_OFF_ENABLED true // Enable auto power off when battery is low
// #define USERMOD_BATTERY_AUTO_OFF_THRESHOLD 3 // Battery percentage threshold for auto power off
// #define USERMOD_BATTERY_LOW_POWER_INDICATOR_ENABLED true // Enable low power indicator
// #define USERMOD_BATTERY_LOW_POWER_INDICATOR_THRESHOLD 5 // Battery percentage threshold for low power indicator
// #define USERMOD_BATTERY_LOW_POWER_INDICATOR_PRESET 1 // Preset to use for low power indicator

#define MDNS_NAME "MagicQR" // mDNS hostname, ie: *.local

#define WLED_MAX_BUTTONS 2 // Maximum number of buttons
#define LEDPIN 1
#define DEFAULT_LED_COUNT 75 //Standard Magic QR has 75 LEDs
#define WLED_AP_SSID "Magic QR" // Name of default WLED access point
#define WLED_AP_PASS "itmightbemagic" // Password for default WLED access point

#define WLED_VERSION "QR"
#define BTNPIN 9 

#define SERVERNAME "MagicQR" // Name of WLED server for API calls

#define USERMOD_SN_PHOTORESISTOR
#define USERMOD_SN_PHOTORESISTOR_REFERENCE_VOLTAGE 3.3
#define PHOTORESISTOR_PIN 3