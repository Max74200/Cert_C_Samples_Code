// FIO42-C: Noncompliant Code Example (exit())
#include <stdio.h>
#include <stdlib.h>
   
int main(void) {
  FILE *f = fopen("toto.txt", "w");
  if (NULL == f) {
    exit(EXIT_FAILURE);
  }
  /* ... */
  exit(EXIT_SUCCESS);
}
