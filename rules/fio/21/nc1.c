#include <stdio.h>
  
void func(void) {
  char file_name[L_tmpnam];
  FILE *fp;
 
  if (!tmpnam(file_name)) {
    /* Handle error */
  }
 
  /* A TOCTOU race condition exists here */
 
  fp = fopen(file_name, "wb+");
  if (fp == NULL) {
     /* Handle error */
  }
}