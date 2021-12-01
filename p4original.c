#include<stdio.h>
int cmp(int a, int b, int c);
int input ();
int main()
{
  int a,b,c,large,A,B,C,L;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("Largest of the three numbers is %d",large);
  return 0;
}
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
int cmp(int a, int b, int c)
{
  int l;
  if(a>b && a>c)
  l=a;
  else if(b>c)
  l=b;
  else
  l=c;
  return l;
}