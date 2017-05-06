/*************************
*Joseph Barton           *
*CPSC 1021-004, F16      *
*Lab 12                  *
*jbarto3                 *
**************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "functions.h"

using namespace std;

int main( int argc, char* argv[] )
{
    int total;
    int found, search;
    ifstream in (argv[1]);

    if(in.fail())
    {
      cout << "Failed to open file!" << endl;
      exit(0);
    }
    // Using the command line arguments check for a valid input file
    // If there is not one, give the user a message and exit the program

      in >> total;
      int array[total];
    // Assuming there is a valid input file, read the first item
    // The first item represents the number of items in the file

    // Read the other items from the file and store them
   for(int i = 0; i < total; i++)
    {
      in >> array[i];
    }

    in.close();
    cout << "*--- ORIGINAL ARRAY ---*" << endl;
    print_array(array, total);

    cout << endl << "*--- SORTED ARRAY ---*" << endl;

    // Close the file you are reading
    // Then print the array
    selection_sort(array,total);
    print_array(array, total);
    cout<< endl;

    for(int i = 0; i < total; i++)
    {
      int temp;
      temp = factorial(array[i]);
      array[i] = temp;
      temp = 0;

    }

    print_array(array, total);
    cout << endl;
    // Using selection sort, sort the array
    // Then print the array
    cout << "Enter search item: ";
    cin >> search;
    int first = 0;
    int mlast = total - 1;
    found = binarySearch(array, search,first, mlast);

    if(found < 0)
      cout << search << " not found in array" << endl;
    else
      cout << search << " found in array at index " << found << endl;
    // Ask the user for a number


    // Using linear search, search the array for the user's number


    // Print if the number was or was not found in the array


    return 0;
}
