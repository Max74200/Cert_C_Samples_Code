
int main(){
enum WidgetEnum { WE_W, WE_X, WE_Y, WE_Z } widget_type;
widget_type = WE_X;
 
switch (widget_type) {
  case WE_W:
    /* ... */
    break;
  case WE_X:
    /* ... */
    break;
  case WE_Y:
  case WE_Z:
    /* ... */
    break;
  default: /* Can't happen */
     /* Handle error condition */
     break;
}
}