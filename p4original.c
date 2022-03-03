#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int f=0;
  int x=0,y=1;
  for(int i=0;i<n;i++)
    {
      f=x;
      x=y;
      y=f+y;
    }
  return f;
}
void output(int n,int f)
{
  printf("The %d th term is:%d",n,f);
}
int main()
{
  int n,f;
  n=input();
  f=find_fibo(n);
  output(n,f);
  return 0;
}