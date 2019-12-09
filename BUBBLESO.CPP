//BUBBLE SORT

#include<stdio.h>
#include<conio.h>

void main() {
int i,c,d,arr[50],swap,n;
printf("enter the no.of elements");
scanf("%d",&n);
printf(" the integers are:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(c=0;c<n;c++){
for(d=0;d<n-c-1;d++)
{
if(arr[d]>arr[d+1])
{
swap=arr[d+1];
arr[d+1]=arr[d];
arr[d]=swap;   
}}}
printf("the sorted array is given by:\n");
for(i=0;i<n;i++)   {
printf("%d\n",arr[i]); }
getch();
}

