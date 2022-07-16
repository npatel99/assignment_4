#include<stdio.h>
/*Write a program to print squares of the first 10 natural numbers*/
int main()
{
  int i = 1;
  printf("squares of the first 10 natural numbers are: ");
  while(i<=10)
  {
    printf("%d ", i*i);
    i++;
  }
  printf("\n");

  return 0;
}
