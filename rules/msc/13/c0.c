
int main(){
int *p1 = foo();
 
/* Removable if bar() does not produce any side effects */
(void)bar();
 
/* Removable if baz() does not produce any side effects */
(void)baz();
return p1;
}