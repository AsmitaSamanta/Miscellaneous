

	#include<stdio.h>
	#include<math.h>

	int main()
	{
		int a,b,g,r,m,l;
		printf("Enter two integers : ");
		scanf("%d%d",&a,&b);
		if(a==0 && b==0)
			printf("\nL.C.M. is not possible !!!\n");
		else if(a==0 || b==0)
			printf("\nL.C.M. is 0.\n");
		else
		{
			printf("\nL.C.M. of %d and %d is ",a,b);
			m=a*b;
			r=a%b;
			while(r!=0)
			{
				a=b;
				b=r;
				r=a%b;
			}
			g=b;
			l=m/g;
			printf("%d.\n",l);
		}	
	}



