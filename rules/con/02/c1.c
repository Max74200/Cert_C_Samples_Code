/*
#include <Windows.h>
 
static volatile LONG account_balance;
CRITICAL_SECTION flag;
 
// Initialize flag 
InitializeCriticalSection(&flag);
  
int debit(unsigned int amount) {
  EnterCriticalSection(&flag);
  account_balance -= amount; // Inside critical section
  LeaveCriticalSection(&flag);
  
  return 0;
}
*/