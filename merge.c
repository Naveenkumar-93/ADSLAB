#include<stdio.h>
int main()
{
int ar1[50],ar2[50],ar3[100];
int m,n,i,j,k=0;
printf("enter the size of first array");
scanf("%d",&m);
printf("enter the elment of the first array");
for(i=0;i<m;i++)
{
scanf("%d",&ar1[i]);
}
printf("enter the size of second array");
scanf("%d",&n);
printf("enter the elment of the second array");
for(j=0;j<n;j++)
{
scanf("%d",&ar2[j]);
}
i=0,j=0;
while(i<m && j<n)
{
if(ar1[i]<ar2[j])
{
ar3[k]=ar1[i];
i++;
}
else
{
ar3[k]=ar2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
ar3[k]=ar2[j];
j++;
k++;
}
if(j>=n)
{
while(i<m)
{
ar3[k]=ar1[i];
i++;
k++;
}
}
}
printf("resultantarray");
for(i=0;i<k;i++)
{
printf("%d",ar3[i]);
}
return 0;
}
