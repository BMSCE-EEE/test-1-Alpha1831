#include<stdio.h>
float input();
float my_sqrt(float n);
void output(float n, float sqrt_result);
int main()
{
  float x,sr;
  x=input();
  sr=my_sqrt(x);
  output(x,sr);
  return 0;
}
float input()
{
  float y;
  printf("Enter a number:");
  scanf("%f",&y);
  return y;
}
float my_sqrt(float n)
{
  float y=1,x=n;
  float e=0.000001;
  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n, float sqrt_result)
{
  printf("The square root of %0.2f is %0.2f",n,sqrt_result);
}