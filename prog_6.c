#include<stdio.h>
/*Write a program to print the first 10 even natural numbers*/
int main()
{
  int i = 1;
  printf("first 10 even natural numbers are: ");
  while(i<=10)
  {
    printf("%d ", i*2);
    i++;
  }
  printf("\n");

  return 0;
}
