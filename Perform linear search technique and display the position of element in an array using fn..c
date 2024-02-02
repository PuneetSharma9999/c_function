#include<stdio.h>
int main()
{                                                  
	int ar[100],i,n,ele,pos;
	int lsearch(int[],int,int);
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the element you want to search: ");
	scanf("%d",&ele);
	pos=lsearch(ar,n,ele);
	if(pos>0)
	printf("\nElement is found at position %d",pos);
	else
	printf("\nElement not found ");
}
int lsearch (int ar[],int n,int ele)
{
	int i,pos=0;
	for(i=0;i<=n-1;i++)
	{
		if(ar[i]==ele)
		{
			pos=i+1;
			break;
		}
	}
	return pos;
}
