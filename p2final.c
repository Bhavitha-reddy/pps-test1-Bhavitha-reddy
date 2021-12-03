in#clude<stdio.h>
int input()
{
  int a;
  printf("enter the value:\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}
int output(int a,int b,int sum)
{
  printf("sum of a and b is c,%d,%d,%d",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
