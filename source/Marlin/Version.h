/**
 * 3D Printer Firmware
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * release version identifier
 */
//#define SHORT_BUILD_VERSION "2.0.8"

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE __DATE__

/**
 * Defines a generic printer name to be output to the LCD after booting.
 */
#define MACHINE_NAME "3D Printer"


/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
