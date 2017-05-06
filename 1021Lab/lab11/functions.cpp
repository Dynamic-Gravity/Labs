/*************************
*Joseph Barton           *
*CPSC 1021-004, F16      *
*Lab 11                  *
*jbarto3                 *
**************************/

#include "functions.h"
#include <iostream>
using namespace std;
void print_array( int array[], int array_size )
{
  for(int i = 0; i < array_size; i++)
  {
    cout << array[i] << " ";
  }
}
void selection_sort( int array[], int array_size )
{
  int i, j, first, temp;

  for(i=array_size -1; i > 0; i--)
  {
    first = 0;
    for(j = 1; j<=i ; j++)
    {
      if(array[j]>array[first])
        first = j;
    }
    temp = array[first];
    array[first] = array[i];
    array[i] = temp;
  }
  return;
}
int  linear_search( int array[], int array_size, int search_item )
{
  for(int i = 0; i<=array_size; i++)
  {
    if(search_item == array[i])
      return i;
  }
  return -1;
}
