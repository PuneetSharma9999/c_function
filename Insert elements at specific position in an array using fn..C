#include<stdio.h>
#include<conio.h>
int main()
{
int ar[100],i,n,ele,pos;
void insert (int[],int,int,int);
printf("Enter size of an array: ");
scanf("%d",&n);
printf("\nEnter element: ");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the element you want to insert: ");
scanf("%d",&ele);
printf("\nEnter the position of inserting element: ");
scanf("%d",&pos);
insert(ar,n,pos,ele);
n++;
printf("\nElement after insertion ");
for(i=0;i<=n-1;i++)
{
printf("\n%d\t",ar[i]);
}
}
void insert (int ar[],int n,int pos,int ele)
{
int i;
for(i=n;i>=pos;i--)
{
ar[i]=ar[i-1];
}
ar[i]=ele;
}
