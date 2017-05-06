/*************************
*Joseph Barton
*CPSC 1021-004, F16
*Lab 3
*jbarto3
**************************/
#include <stdio.h>
#include "functions.h"

#define ROW 3
#define COL 3

int main()
{
  char board[ROW][COL]; //tic-tac-toe board
  char piece;  // storing each character for filling arrary
  int count = 3; //indexing through the arrary
  int success;  //checking scanf
  int winner, winner1, winner2;

/*
      Loop for storing the game in a 2D array so that we can determine
      whether there is a winner or not
*/

  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < count; j++)
     {
       success = scanf(" %c", &piece);  // checking scanf was successful
      if (success  == 1)
       {
        board[i][j] = piece;
      }
      else
        break;
    }
  }

  winner = checkRow(board);
  winner1 = checkCol(board);
  winner2 = checkDia(board);

  if(winner == 1 && winner1 == 1 && winner2 == 1)
  {
    printf("There does not seem to be a winnner!\n");
  }
  return 0;
}
