/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 4
*jbarto3
**************************/

#include <stdio.h>

void convertInches(int total, int *yard, int *feet, int *inch)
{
  int remain;
  *yard = total / 36;
  remain = total % 36;
  *feet = remain / 12;
  *inch = remain % 12;
}
