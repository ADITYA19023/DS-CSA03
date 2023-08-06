#include<stdio.h>
int main()
{
int num;
printf("Enter the Number of elements in the array:");
scanf("%d",&num);
int arr[num];

printf("Enter %d elements in the array:",num);
for(int i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Even numbers in the array are:");
for (int i=0;i<num;i++)
{

if (arr[i]%2==0)
printf("%d",arr[i]);
}

printf("\n odd numbers in the array are:");
for (int i=0;i<num;i++){
if (arr[i]%2==1)
printf("%d",arr[i]);}
return 0;
}
