#include<stdio.h>
float Sum(float x,float y);
float input();
void output(float add);
int main()
{
  float a,b,sum;
  a=input();
  b=input();
  sum=Sum(a,b);
  output(sum);
  return 0;
}
float input()
{
  float A;
  printf("Enter a number:\n");
  scanf("%f",&A);
  return A;
}
float Sum(float x,float y)
{
  float S;
  S=x+y;
  return S;
}
void output(float add)
{
  printf("The sum of two given numbers is:%0.2f",add);
}