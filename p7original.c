#include<stdio.h>
int input_array_size();
void input_array(int n,int a[n]);
int sum_n_arrays(int n,int a[n]);
void out_put(int n,int a[n],int sum);
int main()
{
  int x,add;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  add=sum_n_arrays(x,a);
  out_put(x,a,add);
  return 0;
}
int input_array_size()
{
  int y;
  printf("Enter the number elements:");
  scanf("%d",&y);
  return y;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i;
  
  for(i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
}