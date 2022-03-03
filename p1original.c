#include<stdio.h>
#include<math.h>
void input(float *x1,float *x2,float *y1,float *y2)
{
  printf("Enter x1 coord:");
  scanf("%f",x1);
  printf("Enter y1 coord:");
  scanf("%f",y1);
  printf("Enter x2 coord:");
  scanf("%f",x2);
  printf("Enter y2 coord:");
  scanf("%f",y2);
}
void find_distance(float x1,float x2,float y1,float y2,float *area)
{
  *area=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
void output(float x1,float x2,float y1,float y2,float area)
{
  printf("Distance between(%.1f,%.1f) and (%.1f,%.1f) is %.f",x1,y1,x2,y2,area);
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&x2,&y1,&y2);
  printf("First Coord is %.1f,%.1f\n",x1,y1);
  printf("Second Coord is %.1f,%.1f\n",x2,y2);
  find_distance(x1,x2,y1,y2,&area);
  output(x1,x2,y1,y2,area);
  return 0;
}