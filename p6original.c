#include<stdio.h>
int input_n();
int sum_n(int n);
void output(int n, int sum);
int main()
{
  int a,add;
  a=input_n();
  add=sum_n(a);
  output(a,add);
  return 0;
}
int input_n()
{
  int i;
  printf("Enter a number:");
  scanf("%d",&i);
  return i;
}
int sum_n(int n)
{
  int s=0,i;
  for(i=0;i<=n;i++)
  {
    s=s+i;
  }
  return s;
}
void output(int n, int sum)
{
  printf("The sum of the first %d numbers is %d",n,sum);
}