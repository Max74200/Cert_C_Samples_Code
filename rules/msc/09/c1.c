#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char myFilename[1000];
const char elimNewln[] = "\n";
const char badChars[] = "-\n\r ,;'\\<\"";
do {
  fgets(myFilename, sizeof(myFilename)-1, stdin);
  myFilename[sizeof(myFilename)-1] ='\0';
  myFilename[strcspn(myFilename, elimNewln)]='\0';
} while ( (strcspn(myFilename, badChars))
           < (strlen(myFilename)));
}