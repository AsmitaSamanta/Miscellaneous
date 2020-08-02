

	#include<stdio.h>
	#include<math.h>
	int main()
	{
		int x[18],k,i;
		x[0]=1;
		printf("\n\tEnter your Day of Birth please : ");
		scanf("%d",&x[1]);
		for(i=2;i<18;i++)
		{
			k=pow((x[i-1]+1),2);
			x[i]=(k%97)+x[i-2];
		}
		printf("\n\tThe created integer series for you is :\n\n\t");
		for(i=0;i<18;i++)
			printf("%d  ",x[i]);
		printf("\n\n");
	}



