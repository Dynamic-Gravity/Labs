/*************************
*Joseph Barton           *
*CPSC 1021-004, F16      *
*Lab 12                  *
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

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int binarySearch(int L[],int x, int first, int last)
{
  //int middle = (first + last) / 2;

  if (last >= first)  //first > last)
    {
      //return -1;
      int middle = (first + last) / 2;

      if (x == L[middle])
        return middle;
      else if (x < L[middle])
        return binarySearch(L, x, first, middle - 1);
      else //(x > L[middle])
        return binarySearch(L, x, middle + 1, last);
    }
  return -(first + 1);    // failed to find key
}
