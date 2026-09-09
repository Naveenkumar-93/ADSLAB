#include<stdio.h>
int main()
{
int size,i,pos,ele;
printf("enter the size of an array");
scanf("%d",&size);
int a[size];
printf("enter the elements of an array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("enter the value to be inserted");
scanf("%d",&ele);
printf("enter the pos of the element");
scanf("%d",&pos);
if(pos<=0||pos>size+1)
printf("invalid ");
else
{
for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=ele;
}
printf("Array elements");
for(i=0;i<size+1;i++)
printf("%d",a[i]);
}
