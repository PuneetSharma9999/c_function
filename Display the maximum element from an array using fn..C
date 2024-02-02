#include<stdio.h>
#include<conio.h>
int main()
{
int ar[100],i,n,m;
int maxselect (int[],int);
printf("Enter size of an array: ");
scanf("%d",&n);
printf("\nEnter elements: ");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
m=maxselect(ar,n);
printf("\nlargest is %d",m);
}
int maxselect (int ar[],int n)
{
int i,m;
m=ar[0];
for(i=0;i<=n-1;i++)
{
if(ar[i]>m)
m=ar[i];
}
return m;
}
