#include<stdio.h>
int divi();
void main()
{
    int a=divi();
    printf("%d",a);
}
int divi()
{
    int a=10,b=5;
    int c=a/b;
    return c;
}