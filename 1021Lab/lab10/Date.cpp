/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 10
*jbarto3
**************************/

#include <iostream>
#include "Date.h"
#include <string>
using namespace std;
    //Default contructor
        Date::Date()
        {
          month = day = year = 0;
        }
    //Regular contructor
        Date::Date(string m,int d,int y)
      {
        month = m;
        day = d;
        year = y;
      }
      //Getters
        int Date::getDay()
        {
          return day;
        }

        string Date::getMonth()
        {
          return month;
        }

        int Date::getYear()
        {
          return year;
        }
        //Setters
        void Date::setDay(int d)
        {
          day = d;
        }

        void Date::setMonth(string m)
        {
          month = m;
        }

        void Date::setYear(int y)
        {
          year = y;
        }
        //Prints out date in standard format
        void Date::printDate()
        {
          cout << getMonth()<<" " << getDay() << ","
                                << getYear() << endl;
        }
