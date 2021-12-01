#include<stdio.h>
int cmp(int a, int b, int c);
int input ();
void comp(int *a, int *b, int *c, int *large);
void in(int *a, int *b,int *c);
int main()
{
  int a,b,c,large,A,B,C,L;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("Largest of the three numbers is %d",large);
  in(&A,&B,&C);
  comp(&A,&B,&C,&L);
  printf("Largest of the three numbers is %d",L);
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
void in(int *a, int *b,int *c)
{
  scanf("%d %d %d",*a,*b,*c);
}
void comp(int *a, int *b, int *c, int *large)
{
  int l;
  if(*a>*b && *a>*c)
  *l=*a;
  else if(*b>*c)
  *l=*b;
  else
  *l=*c;
}