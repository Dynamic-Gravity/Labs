/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 9
*jbarto3
**************************/

#include <iostream>
#include "money.h"
using namespace std;

// default constructor
money_t::money_t()
{
  dollars = cents = 0;
}
// Regular constructor
money_t::money_t(double amt)
{

  if (amt < 0)
    dollars = cents = 0;
  else
  {
    set_dollars(static_cast<int>(amt));
    set_cents(static_cast<int>(amt*100) % 100);
  }
}
money_t::money_t(int d, int c)
{
  if (dollars < 0)
    set_dollars(0);
  else
    set_dollars(d);

  if(cents < 0)
    set_cents(0);
  else
    set_cents(c);
}
//Destructor
money_t::~money_t()
{

  cout << "Destructor invoked" << endl;
}

int money_t::get_dollars()
{
  return dollars;
}

int money_t::get_cents()
{
  return cents;
}

void money_t::set_dollars(int amount)
{
  dollars = amount;
}

void money_t::set_cents(int amount)
{
  cents = amount;
}
//set both values dollars and cents
void money_t::set(int d, int c)
{
  money_t::set_dollars(d);
  money_t::set_cents(c);
}
//fine total value in cents
int money_t::value_in_cents()
{
  int total;
  total = get_dollars() * 100;
  total += get_cents();
  return total;
}
//convert from int to double and find total value
double money_t::compute_value()
{
  double value;
  value = static_cast<double>(dollars)*100+cents;
  value = value / 100;
  return value;
}
