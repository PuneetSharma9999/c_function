#include<stdio.h>
#include<conio.h>
int main()
{
int ar[100],i,n;
void display (int[],int);
printf("\nEnter size of an array: ");
scanf("%d",&n);
printf("\nEnter element: ");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
display(ar,n);
printf("\nTraversing ");
getch();
}
void display (int ar[], int n)
{
int i;
for(i=0;i<=n-1;i++)
{
printf("%d\t",ar[i]);
}
}
