#ifdef USE_FLASH
#define FLASHMEM PROGMEM
#define FLASHSTR(x) (const __FlashStringHelper*)(x)
#define FLASHPTR(x) (const __FlashStringHelper*)pgm_read_word(&x)
#else
// If not using FLASH, no special casting or keywords.
#define FLASHMEM
#define FLASHSTR(x) (x) //(const char *)(x)
#define FLASHPTR(x) (x) //(const char *)(x)
#endif
//#define PGMT(pgm_ptr) (reinterpret_cast<const __FlashStringHelper *>(pgm_ptr))

