#include<stdio.h>

void main()
{       float hra,da,salary,gross;
	
	printf("Enter salary:");
	scanf("%f",&salary);

	if(salary<=5000)
	{
		hra=salary*0.08;
		da=salary*0.20;
	}
	else if(salary>5000 && salary<=10000)
	{
		hra=salary*0.12;
		da=salary*0.30;
	}
	else if(salary>10000 && salary<=15000)
	{
		hra=salary*0.15;
		da=salary*0.40;
	}
	else
	{
		hra=salary*0.20;
		da=salary*0.50;
	}
	gross=salary+hra+da;
	printf("Your Gross Salary is: %.2f",gross);


}