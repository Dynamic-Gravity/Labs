/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 4
*jbarto3
**************************/

#include <stdio.h>

void convertInches(int measure, int *yards, int *feet, int *inch);

int main()
{
   int yards;
   int feet;
   int inches;
   int measure;

   printf("Enter measurement in inches: ");
   scanf("%d", &measure);

   /***********  INVOKE THE convertInches() function ***********/

   convertInches(measure,&yards,&feet,&inches);

   printf("\n%d inches = %d yards, %d feet, %d inches\n\n",
              measure, yards, feet, inches);
   return 0;
}
