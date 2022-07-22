// STR32-C: Compliant Solution (Truncation, strncpy_s())
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <errno.h>
 
enum { STR_SIZE = 32 };
 
size_t func(const char *source) {
  char a[STR_SIZE];
  size_t ret = 0;
 
  if (source) {
    //errno_t err = strncpy_s(
     // a, sizeof(a), source, strlen(source));
     int err;
    if (err != 0) {
      /* Handle error */
    } else {
      ret = strnlen_s(a, sizeof(a));
    }
  } else {
     /* Handle null pointer */
  }
  return ret;
}
