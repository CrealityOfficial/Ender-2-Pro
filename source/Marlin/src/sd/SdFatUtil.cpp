

#include "../inc/MarlinConfig.h"

#if ENABLED(SDSUPPORT)

#include "SdFatUtil.h"
#include <string.h>

/**
 * Amount of free RAM
 * \return The number of free bytes.
 */
#ifdef __arm__

  //extern "C" char* sbrk(int incr);
  int SdFatUtil::FreeRam() {
    char top=0;
    //return &top - reinterpret_cast<char*>(sbrk(0));
    return top;
  }

#else

  extern char* __brkval;
  extern char __bss_end;
  int SdFatUtil::FreeRam() {
    char top;
    return __brkval ? &top - __brkval : &top - &__bss_end;
  }

#endif

#endif // SDSUPPORT
