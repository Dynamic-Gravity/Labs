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
          string month;
          int year;
//Method prototypes
  public:
        Date();
        Date(string,int,int);

        int getDay();
        string getMonth();
        int getYear();

        void setDay(int);
        void setMonth(string);
        void setYear(int);
        void printDate();
};
#endif
