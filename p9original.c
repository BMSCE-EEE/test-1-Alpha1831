#include<stdio.h>
#include<string.h>
void input_two_string(char *a, char *b);
void output(char *a, char *b, int result);
int main()
{
  char x[20],y[20];
  int z;
  input_two_string(x,y);
  z=strcmp(x,y);
  output(x,y,z);
  return 0; 
}
void input_two_string(char *a, char *b)
{
  scanf("%s",a);
  scanf("%s",b);
}
void output(char *a, char *b, int result)
{
  if(result==0)
  {
    printf("The words entered %s and %s are same",a,b);
  }
  else if(result>0)
  {
    printf("%s is greater than %s",a,b);
  }
  else
  {
    printf("%s is greater than %s",b,a);
  }
}