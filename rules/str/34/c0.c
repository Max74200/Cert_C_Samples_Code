// STR34-C: Compliant Solution
/*
static int yy_string_get(void) {
  register char *c_str;
  register int c;
 
  c_str = bash_input.location.string;
  c = EOF;
 
  // If the string doesn't exist or is empty, EOF found
  if (c_str && *c_str) {
    // Cast to unsigned type 
    c = (unsigned char)*c_str++;
 
    bash_input.location.string = c_str;
  }
  return (c);
}
*/