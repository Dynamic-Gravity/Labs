/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 5
*jbarto3
**************************/

#include <stdio.h>
#include <malloc.h>

/**
 * This function creates and returns the multiplication table for the number
 * of rows and columns passed as paramters to the function
 */
int ** CreateMulTable(int rows,int columns)
{
    int i, j;
    int **A= malloc(rows * sizeof(int*));

    for(i=0; i<rows; i++)
    {
        A[i]=malloc(columns * sizeof(int));
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            // Since we index starting at 0, we need to shift
            // by 1 when creating the table.
            A[i][j]=(i+1)*(j+1);
        }
    }

    return A;
}

/**
 * This function displays the multiplication table
 */
void PrintMulTable(int **A,int rows,int columns)
{
    int i, j;

    printf("The multiplication table is:\n");

    //Print the multiplication table
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
	           printf("%5.0d", A[i][j]);
            // formats the output so each number gets 5 spaces.
        }
        printf("\n");
    }
    printf("\n");
}
/*----------------------------------------------------------------------------*/

int main(int argc, char*argv[])
{
    // initialize variables
    int rows = 0;
    int columns = 0;

    //code for handling input arguments
    if(argc != 3)
    {
	printf("Error!\n");
	printf("USAGE: %s numRows numColumns\n", argv[0]);
	printf("Exiting program now...\n");
	return 0;
    }

    // Assign rows and columns to the command line arguments
    rows=atoi(argv[1]);
    columns=atoi(argv[2]);

    // Create and print the table
    int **A= CreateMulTable(rows, columns);
    PrintMulTable(A,rows,columns);
}
/*----------------------------------------------------------------------------*/
