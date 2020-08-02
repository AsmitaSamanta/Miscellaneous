

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

	int main()
	{
		int *a,i,n,s1=0;
		float m,sd,s2=0;
		printf("\nEnter the number of integers : ");
		scanf("%d",&n);
		a=(int *)malloc(n*(sizeof(int)));
		printf("\nEnter the integers one by one : ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s1=s1+a[i];
		}
		m=(s1*1.0)/n;
		printf("\nMean = %f.",m);
		for(i=0;i<n;i++)
			s2=s2+pow((a[i]-m),2);
		printf("\nVarience = %f.",(s2/n));
		sd=sqrt((s2/n));
		printf("\nStandard Deviation of the given integers are %f.\n",sd);	
	}


