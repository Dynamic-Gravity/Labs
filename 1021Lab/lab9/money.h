/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 9
*jbarto3
**************************/

#include <cstdlib>
#include <iostream>

using namespace std;

class money_t
{

   private:
      int dollars;
      int cents;

   public:
      money_t();

      money_t(double amt);

      money_t(int dollars, int cents);

      ~money_t();

      int get_dollars( );
      int get_cents();
      void set_dollars(int amount);
      void set_cents(int amount);
      void set(int dollar_amt, int cent_amt);
      int value_in_cents();
      double compute_value();
};
