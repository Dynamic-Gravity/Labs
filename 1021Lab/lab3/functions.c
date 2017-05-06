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

int checkRow (char board[ROW][COL])
{
  for (int i = 0; i < 3; i++)
   {
    if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
    {
      printf("We have a winner!\n");
      return 0;
    }
   }
    return 1;
}
int checkCol (char board[ROW][COL])
  {
  for (int i = 0; i < 3; i++)
    {
    if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
      {
        printf("We have a winner!\n");
        return 0;
      }
    }
    return 1;
  }
int checkDia (char board[ROW][COL])
  {
  if(board[0][0] == board[1][1] && board [1][1] == board[2][2])
  {
    printf("We have a winner!\n");
    return 0;
  }
  else if ( board[0][2]== board[1][1]&& board[1][1] == board[2][0])
  {
    printf("We have a winner!\n");
    return 0;
  }
  else
    return 1;
  }
