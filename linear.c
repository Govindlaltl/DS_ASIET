#include<stdio.h>
void main()
{
	int a[20],n,i,s;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("Enter key:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
	     	printf("Element found");
	     	exit(0);
	    }
	}    
	printf("Element not found");
	
}
	 
