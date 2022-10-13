#include<stdio.h>
void main()
{
char n,c,s;
printf("enter char : ");
scanf("%c",&n);
if(n<=90)
{
s=n+32 ;
printf("%c",s);
}
else
{
    c=n-32;
    printf("%c",c);
}

}