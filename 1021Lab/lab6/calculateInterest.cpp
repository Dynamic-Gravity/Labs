/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 6
*jbarto3
**************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  /*FILL IN THE CODE TO SET THE OUTPUT TO DISPLAY TRAILING ZEROS AND AT 2
   *DECIMAL PRECISION*/




   /*This is the variable for the initial principal and the the rate of
     *interest. */
   double principal = 1000.00;
   double rate = .05;
   double interest = 1 + rate;
   int i;

   cout << "Initial Principal: " << fixed << setprecision(2) << principal << endl;
   cout << "Interest Rate: " << fixed << setprecision(2) << rate << endl;

   cout << endl;
   cout << endl;

   cout << "Year"    "        "   "Amount on deposit" << endl;
   for(i=1;i<11;i++)
   {
     cout << i <<  "               "<< fixed << setprecision(2)
                << principal * pow(interest, i) << endl;


   }


   /*FILL IN THE REMAINDER OF THIS PROGRAM.
    *THIS PROGRAM SHOULD CALCULATE AND PRINT THE AMOUNT OF MONEY IN THE
    *ACCOUNT AT THE END OF EACH YEAR FOR 10 YEARS.  BELOW IS WHAT YOUR OUTPUT
    *SHOULD LOOK LIKE.

    Initial principal: 1000.00
    Interest rate:    0.05

Year   Amount on deposit
   1             1050.00
   2             1102.50
   3             1157.63
   4             1215.51
   5             1276.28
   6             1340.10
   7             1407.10
   8             1477.46
   9             1551.33
  10             1628.89
  */


    return 0;
}
