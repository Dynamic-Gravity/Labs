/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 6
*jbarto3
**************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void swapCase(istream& in, ostream& out);

int main(int argc, char *argv[])
{
  ifstream in (argv[1]);
  ofstream out (argv[2]);
  swapCase(in,out);
  in.close();
  out.close();

  return 0;
}



void swapCase(istream& in, ostream& out)
{
  char a;
  a=in.get();
  while(a!=EOF)
  {
    if(isupper(a))
      a = tolower(a);
    else if(islower(a))
      a = toupper(a);
    out << a;
    a=in.get();
  }

}
