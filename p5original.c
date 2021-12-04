#include<stdio.h>
void cmp(int *a, int *b, int *c, int *l);
void input(int *a, int *b,int *c);
int main()
{
  int A,B,C,L;
  input(&A,&B,&C);
  cmp(&A,&B,&C,&L);
  printf("Largest of the three numbers is %d",L);
  return 0;
}
void input(int *a, int *b,int *c)
{
  scanf("%d %d %d",a,b,c);
}
void cmp(int *a, int *b, int *c, int *l)
{
  if(*a>*b && *a>*c)
  {*l=*a;}
  else if(*b>*c && *b>*a)
  {*l=*b;}
  else
  {*l=*c;}
}