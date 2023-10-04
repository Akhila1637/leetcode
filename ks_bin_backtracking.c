#include <stdio.h>
int a[20],n;

int persos(int wt[],int val[],int sum,int index,int n)
{
	int i;
	if(index==n)
	{
		int asum=0;
		int value=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			asum=asum+wt[i];
			value=value+val[i];
		}
	}
	if(asum==sum)
	{
		for(i=0;i<n;i++)
		{
				printf("%d ",a[i]);
			
		}
		printf("\n");
	}
	return ;
  }	
		for(i=0;i<2;i++)
		{
			a[index]=i;
			persos(wt,val,sum,index+1,n);
		}
}
int main()
{
	int i,sum;
	printf("enter the n value:");
	scanf("%d",&n);
	int wt[n];
	printf("\n enter the weight array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}
	int val[n];
	printf("\nenter the value array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	printf("\nenter the weight(sum):");
	scanf("%d",&sum);
	persos(wt,val,sum,0,n);
}

