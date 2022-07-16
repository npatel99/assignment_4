#include<stdio.h>
/*Write a program to print the first 10 even natural numbers in reverse order*/
int main()
{
  int i = 10;
  printf("first 10 even natural numbers in reverse order are: ");
  while(i>=1)
  {
    printf("%d ", i*2);
    i--;
  }
  printf("\n");

  return 0;
}
