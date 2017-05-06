/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 8
*jbarto3
**************************/
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
//Variables
  private:
          int day;
          int month;
          int year;
//Method prototypes
  public:
        Date();
        Date(int,int,int);

        int getDay();
        int getMonth();
        int getYear();

        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void printDate();
};
#endif
