/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 8
*jbarto3
**************************/
#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
  //Declare objects, one using regular constructor
  Date mydate(1,12,1991);
  Date second;
  cout<< "My name is Joseph Barton and my birthday is: ";
          mydate.printDate();

//Set values for other object
  second.setMonth(12);
  second.setDay(25);
  second.setYear(2000);
  cout << "The second date is: ";
            second.printDate();
return 0;
}
