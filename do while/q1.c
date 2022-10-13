#include<stdio.h>
void main()
{
    int a=1,n;
    printf("n :");
    scanf("%d",&n);
         do
        {
            printf("%d\n",a);
            a++;
        }
        while(a<=n);
}