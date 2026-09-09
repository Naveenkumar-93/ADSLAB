#include<stdio.h>
int main()
{
int size,i,ele,found;
printf("enter the size of an array");
scanf("%d",&size);
int a[size];
printf("enter the elements of an array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("enter the element to be searched");
scanf("%d",&ele);
for(i=0;i<size;i++)
{
if(a[i]==ele){
found=1;
}
}
if(found==1)
printf("element found");
else
printf("element not found");
}
