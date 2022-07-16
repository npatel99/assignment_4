#include<stdio.h>
/*Write a program to print the first 10 natural numbers in reverse order*/
int main()
{
  int i = 10;
  printf("first 10 natural numbers in reverse order are: ");
  while(i>=1)
  {
    printf("%d ", i);
    i--;
  }
  printf("\n");

  return 0;
}
