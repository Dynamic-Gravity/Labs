/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 8
*jbarto3
**************************/
#include <iostream>
#include <vector>
#include <fstream>
#include "Date.h"

using namespace std;
int main(int argc, char *argv[])
{
  int vectorSize, i;
  vector <Date> First(vectorSize);
  ifstream in (argv[1]);
  //ifstream temp (argv[2]);

  in >> vectorSize;
  for(i = 0; i < 2; i++)
  {
    string name = " ";
    int dtemp = 0;
    int ytemp = 0;
    char com = ' ';

    in >> name;
    in >> dtemp;
    in >> com;
    in >> ytemp;
    First.push_back(Date[i].setMonth(name));
    First.Date[i].setDay(dtemp);
    First.Date[i].setYear(ytemp);
  }

  First[0].printDate();
in.close();

return 0;
}
