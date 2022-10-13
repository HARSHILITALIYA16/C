#include<stdio.h>
void main()
{
    int a[100],i,f=0,s;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
         if(a[0]>a[i])
    {
        f=a[0];
        s=a[1];
    }
    else
    {
        f=a[1];
        s=a[0];
    }
    }
    for(i=2;i<5;i++)
    {
        if(f<a[i])
        {
            s=f;
            f=a[i];
        }
        else if(s<a[i])
        {
            s=a[i];
        }
    }
    printf("first=%d",f);
    printf("second=%d",s);

}
