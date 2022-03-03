#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf(" enter the cordinates of the three sides of a triangle \n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
  }
int is_trinagle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int res;
  float dis1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  float dis2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
  float dis3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
 if(x1!=x2||y1!=y2&&x1!=x3||y1!=y3&&x2!=x3||y2!=y3)
 {
 res=1;   
 }
 else if(dis1+dis2>dis3||dis1+dis3>dis2||dis2+dis3>dis1)
  {
    res=0;
  }
  else if(dis1==0||dis2==0||dis3==0) 
  {
    res=1;
  }
   else
  {
    res=1;
  }
   return res;
   }
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==0)
    printf("the given coordinates represents  a triangle\n");
  else if(istriangle==1)
  printf("the given coordinates doesn't represent a triangle\n");
    }
  void main()
{
  float  x1,y1,x2,y2,x3,y3;
  int istriangle;
  input_triangle( &x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_trinagle(x1, y1, x2, y2, x3, y3);
  output(x1,  y1,  x2,  y2, x3,  y3,  istriangle);
}