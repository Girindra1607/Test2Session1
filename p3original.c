#include<stdio.h>
int input_number()
{
  int n ;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int pri=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    pri++;
  }
  return pri;
}
void output(int n, int pri)
{
  if (pri<=2)
  printf("the given number is a prime number\n");
  else
  printf("the given number is not a prime number\n");
}
int main(void)
{
  int n,pri;
  n=input_number();
  pri=is_prime(n);
  output(n,pri);
}