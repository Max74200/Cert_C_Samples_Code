// DCL30-C: Compliant Solution (Differing Storage Durations)
#include <stddef.h>

const char *p;
void is_this_OK(void) {
  const char c_str[] = "Everything OK?";
  p = c_str;
  /* ... */
  p = NULL;
}
