/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 2
*jbarto3
**************************/

#include <stdio.h>
#include "lab2functions.h"

void fill_to_sentinel(int dbl_max,double sentinel,double dbl_arr[],int *dbl_sizep)

{
    double data=0; //Hold the data read
    int data_count=0; // Nuumber of data items read
    int success=1; // For checking scanf


while(1)
{
  success=scanf("%lf",&data); //checking that scanf was successful
  if(data == sentinel)
  {
    break;
  }
  else
    {
      if(success<1) // Less than 20 VALUES
    {
      printf("***ERROR IN DATA FORMATTING***\n");
      printf("***USING FIRST %d DATA VALUES***\n", data_count);
      break;
    }
      else if (data_count < dbl_max) //continues loop storing value and indexing to the next value
      {
        dbl_arr[data_count] = data;
        data_count++;
      }
        else // More than 20 values
        {
          printf("*** EXCESS DATA***\n");
          printf("*** USING FIRST %d DATA VALUES***\n", data_count);
          break;
        }
      }
    *dbl_sizep=data_count;
    }
}
