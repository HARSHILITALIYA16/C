#include<stdio.h>
void main()
{
    int i=65;
    while(i<=69)
    {
        int j=1;
        while(j<=5)
        {
            printf("%c ",i);
            j++;
        }
        printf("\n");
        i++;
    }
}