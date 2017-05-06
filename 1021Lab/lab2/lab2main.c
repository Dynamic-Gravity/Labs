/*************************
*Joseph Barton
*CPSC 1021 004, F16
Lab 2
jbarto3
***************************/


#include <stdio.h>
#include "lab2functions.h"

#define A_SIZE 20
#define SENT -1.0

int main()
{
  double arr[A_SIZE];
  int count=0;
  int *sizep=&count;

  fill_to_sentinel(A_SIZE,SENT,arr,sizep);
  printf("LIST OF DATA VALUES\n");
  for(int i=0;i<count;i++)
  {
    printf("%13.3f\n",arr[i]);
  }
  return 0;
}
