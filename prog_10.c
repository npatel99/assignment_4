#include<stdio.h>
/*Write a program to print a table of 5.*/
int main()
{
  int i = 1;
  printf("printing table of 5 till index [10]: ");
  while(i<=10)
  {
    printf("%d ", 5*i);
    i++;
  }
  printf("\n");

  return 0;
}
