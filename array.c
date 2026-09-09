#include<stdio.h>
int main()
{
int size,i;
printf("enter the size of an array");
scanf("%d",&size);
int ar[size];
printf("enter the elements of an array");
for(i=0;i<size;i++)
scanf("%d",&ar[i]);
printf("Array elements");
for(i=0;i<size;i++)
printf("%d",ar[i]);
}


