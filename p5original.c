#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  
  for(int k=i+i;k<n;k+i)
    {
      a[k]=0;
    }
}