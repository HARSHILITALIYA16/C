#include<stdio.h>
int main()
{
    int income,tax;
    printf("your income :");
    scanf("%d",&income);
    if(income<=25000)
    {
        tax=income*0.05;
        printf("%d",tax);
    }
    else if (income>25000 && income<=100000)
    {
        income=income+1250;
        tax=income*0.10;
        printf("%d",tax);
    }
    else if (income>100000 && income<=500000)
    {
        income=income+8785;
        tax=income*0.12;
        printf("%d",tax);
    }
    else if(income>500000 && income<=1000000)
    {
        income=income+56750;
        tax=income*0.15;
        printf("%d",tax);
    }
    else
    {
        income=income+131750;
        tax=income*0.20;
        printf("%d",tax);
    }
}