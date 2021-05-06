#include <iostream>
#include <string>
#include <cassert>

int main ()
{
  bool a = true;
  bool b = false;
  assert (0 == (a and b));  // "0" == "false"
  assert (1 == (a or b));   // "1" == "true"
  assert (1 == not b);      // "1" == "true"

  char c = 'f';
  assert (103 == c+1);      // "103" es la letra "g" en código ASCII
  assert (97 == c-5);       // "97" es la letra "a" en código ASCII

  unsigned d = 25;
  assert (4 == d%7);        // "4" es el resto de la division 25/7

  int e = -26;
  assert (-52 == e*2);      // "-52" es el resultado de -26*2

  double f = 12.33;
  assert (6.165 == f/2);    // "6.165" es el resultado de 12.33/2

  std::string g = "Buenos ";
  assert ("Buenos días" == g + "días"); // "Buenos días" se da por la concatenación de "Buenos " y "días"
  assert (7 == g.length()); // "7" es el largo de la cadena "Buenos "
  
  // assert (DC > Marvel);