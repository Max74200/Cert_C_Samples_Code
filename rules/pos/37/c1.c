// POS37-C: Compliant Solution
#include <sys/types.h>
int main (){
/* Store the privileged ID for later verification */
uid_t privid = geteuid();
 
/* Code intended to run with elevated privileges   */
 
/* Temporarily drop privileges */
if (seteuid(getuid()) != 0) {
  /* Handle error */
}
 
/* Code intended to run with lower privileges  */
int need_more_privileges;
if (need_more_privileges) {
  /* Restore Privileges */
  if (seteuid(privid) != 0) {
    /* Handle error */
  }
 
  /* Code intended to run with elevated privileges   */
}
 
/* ... */
 
/* Restore privileges if needed */
if (geteuid() != privid) {
  if (seteuid(privid) != 0) {
    /* Handle error */
  }
}
 
/* Permanently drop privileges */
if (setuid(getuid()) != 0) {
  /* Handle error */
}
 
if (setuid(0) != -1) {
  /* Privileges can be restored, handle error */
}
 
/*
 * Code intended to run with lower privileges;
 * attacker cannot regain elevated privileges
 */
}
