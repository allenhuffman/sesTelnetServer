
// Define this to make all the strings live in Flash instead of RAM.
#define USE_FLASH

// Then include this to get the FLASHMEM, FLASTSTR, and FLASHPTR defines.
#include "FlashMem.h"

// Define this to include printing basic Telnet protocol information. This
// will include a bunch of Flash strings.
#define TELNET_DEBUG // takes about 1176 bytes of Flash + 14 bytes of RAM.

// Define this to use multiserver support,but only if you have fixed your
// Ethernet library to allow it. See:
// http://subethasoftware.com/2013/04/09/arduino-ethernet-and-multiple-socket-server-connections/
//#define TELNET_MULTISERVER

// Configure telnet server MAC address and IP address.
byte mac[] FLASHMEM = { 0x2A, 0xA0, 0xD8, 0xFC, 0x8B, 0xEF };
byte ip[] FLASHMEM  = { 192, 168, 0, 200};

#define TELNETID  "Sub-Etha Software's Arduino Telnet server."
#define TELNETAYT "Yes. Why do you ask?"

