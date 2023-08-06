#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a[10],i,n=5;
	float mean,temp,var,sd,sum=0.0;
	for(i=0;i<n;i++)
        {
		printf("\nENTER NUMBER-%d: ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	mean=sum/n;
	sum=0.0;
	for(i=0;i<n;i++)
        {
		temp=a[i]-mean;
		sum=sum+(temp*temp);
	}
	var=sum/n;
	sd=sqrt(var);
	printf("\nMEAN = %0.2f",mean);
	printf("\nVARIANCE = %0.2f",var);
	printf("\nSTANDARD DAVIATION = %0.2f",sd);
	return 0;
}
