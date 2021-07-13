#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fun.h"


int main()
{
  int i=1;
  printf("----- Welcome to R. P. S Game -----\n");
  
  while(i)
  {
    char winner;
    char s, p;
    
    s = getRandomS();
    
    printf("\nWhat's your choice? \n");
    printf("-> R - Rock\n");
    printf("-> P - Paper\n");
    printf("-> S - Scissors\n\n");
    
    scanf("%c",&p);
    
    if(p != 'R' && p != 'P' && p != 'S')
    {
      printf("\n** Invalid choice **\n\n");
      break;
    }
    
    printf("Code's choice - %c\n\n",s);
    
    if(s == p)
    {
      printf("Hence, Game Draw\n");
    }
    else
    {
      if(s == 'R')
      {
        if(p == 'P')
        {
          winner = p;
        }
        else if(p == 'S')
        {
          winner = s;
        }
      }
      
      else if(s == 'P')
      {
        if(p == 'S')
        {
          winner = p;
        }
        else if(p == 'R')
        {
          winner = s;
        }
      }
      
      else if(s == 'S')
      {
        if(p == 'R')
        {
          winner = p;
        }
        else if(p == 'P')
        {
          winner = s;
        }
      }
      
      
      if(winner == s)
      {
        printf("Hence, Code Won\n");
      }
      else if(winner == p)
      {
         printf("Hence, You Won\n");
      }
      
    }
    
    
    printf("\nDo you want to continue?\n");
    printf("1 - Play again\n");
    printf("0 - Exit\n");
    
    scanf("%d",&i);
    getchar();
      
    if(i != 1 && i != 0) 
    {
      i = 0;
      printf("\n** Invalid choice **\n\n");
    }
    
  }
  
  printf("----- Game Over -----");
  
  return 0;
}