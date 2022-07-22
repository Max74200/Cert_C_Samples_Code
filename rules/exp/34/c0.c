// EXP34-C: Compliant Solution
#include <png.h> /* From libpng 
#include <string.h>
 
 void func(png_structp png_ptr, size_t length, const void *user_data) {
  png_charp chunkdata;
  if (length == SIZE_MAX) {
    // Handle error 
  }
  chunkdata = (png_charp)png_malloc(png_ptr, length + 1);
  if (NULL == chunkdata) {
    //Handle error 
  }
  if (NULL == user_data) {
    // Handle error 
  }

  memcpy(chunkdata, user_data, length);

 
 }
*/