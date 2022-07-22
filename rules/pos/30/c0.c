// POS30-C: Compliant Solution
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
enum { BUFFERSIZE = 1024 };
char buf[BUFFERSIZE];
ssize_t len = readlink("/usr/bin/perl", buf, sizeof(buf)-1);
 
if (len != -1) {
  buf[len] = '\0';
}
else {
  /* handle error condition */
}
}