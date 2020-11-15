//Insertion Sort

#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,arr[20],d,temp;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=1;i<n;i++)
{
d=i;
while (d>0 && arr[d-1]>arr[d])

{
temp=arr[d];
arr[d]=arr[d-1];
arr[d-1]=temp;
d--;}}
printf("sorted array in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d \n",arr[i]);
}
getch();
}