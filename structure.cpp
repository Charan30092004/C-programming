#include<stdio.h>
#include<string.h>
struct employee
{
	int empnumber;
	char name[20];
	char designation[25];
	char location[30];
	float salary;
};
int main()
{
	int n,i,j,t;
	printf("Enter the number of Employees:");
	scanf("%d",&n);
	struct employee E[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the Details of the Employee %d:\n",i+1);
		printf("Employee Number : ");
		scanf("%d",&E[i].empnumber);
		printf("Name : ");
		scanf("%s",E[i].name);
		printf("Designation : ");
		scanf("%s",E[i].designation);
		printf("Location : ");
		scanf("%s",E[i].location);
		printf("Salary : ");
		scanf("%f",&E[i].salary);
	}
	for(i=0;i<n;i++)
	{
		if(E[i].salary>=10000)
		{
			printf("%d		%s		%s		%s		%f\n",E[i].empnumber,E[i].name,E[i].designation,E[i].location,E[i].salary);
		}
		
	}
	struct employee temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			t=strcmp(E[i].name,E[j].name);
			if(t>0)
			{
				temp=E[i];
				E[i]=E[j];
				E[j]=temp;
			}
		}
		printf("%d		%s		%s		%s		%f\n",E[i].empnumber,E[i].name,E[i].designation,E[i].location,E[i].salary);
	}
	
	
}
