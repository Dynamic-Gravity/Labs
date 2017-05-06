/************************
 * Joseph Barton
 * 	CPSC 2120 Section 4
 * 	Lab 1
 *  1/25/17
 ************************/

#include <iostream>   // std::cout
#include <string>     // std::string, std::stol
#include <math.h>     // sqrt
#include <stdlib.h>   // atol


/*
 * Print the factors of n (followed by a newline)
 * by following the f1 algorithm.
 * Note:  you must use long instead of int
 * for this function to handle large integers
 */
void factor1(long n);

/*
 * Print the factors of n (followed by a newline)
 * by following the f2 algorithm.
 * Note:  you must use long instead of int
 * for this function to handle large integers
 */
void factor2(long n);

/*
 * Implementation provided.
 * No need to modify this main method.
 * This method will work once you've implemented
 * factor1 and factor2 functions below.
 * Look over how the command line arguments are processed
 * based on the examples found in this lab's instructions.
 */
int main(int argc, char * argv[]){
  if(argc != 3) {
    std::cout << "Error, invalid input, see examples below\n";
    std::cout << "./lab01.out -f1 123, will compute the factors of 123 using factor1 function\n";
    std::cout << "./lab01.out -f2 123, will compute the factors of 123 using factor2 function\n";
  }
  else{
    std::string flag = argv[1];
    long n = std::atol(argv[2]);
    if(flag == "-f1"){
      std::cout << "factors of " << n << " using the factor1 function are\n";
      factor1(n);
    }
    else if(flag == "-f2"){
      std::cout << "factors of " <<  n << " using the factor2 function are\n";
      factor2(n);
    }
    else{
      std::cout << "Error, invalid flag\n";
    }
  }
  return 0;
}

//Implement this function
void factor1(long n){
	for(long i = 1; i <= n; i++)
	{
		if(n%i == 0)
		std::cout << i << std::endl;
	}
}

//Implement this function
void factor2(long n){
  long q;
	long k = sqrt(n);

  for(int i = 1; i <= k; i++)
    {
        if(n % i == 0)
          std::cout << i << std::endl;

		q = n / i;

        if(q != i && n % q == 0)
          std::cout << q << std::endl;
    }


}
