#include<stdio.h>
float depreciation(float,float,float);
int main()
{
	float pv,sv,d;
	int ys;
	printf("Enter the Value :");
	printf("\nPurchase Price :");
	scanf("%f",&pv);
	printf("Depreciation :");
	scanf("%f",&d);
	printf("Year of Service");
	scanf("%d",&ys);
	sv =depreciation(pv,d,ys);
	printf("Salvage Value is :%f",sv);
}
float depreciation(float pv,float d,int ys)
{
	float sv;
	sv=pv-d*ys;
	return sv;
}
