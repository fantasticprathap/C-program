//hollow squre star
//7/1/2023
//prathap

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("How many row you want hollow squre star=");
	scanf("%d",&n);
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if ((i==0)||(i==n-1)||(j==0)||(j==n-1))
				printf("*");
				else
				printf(" ");
   			}
   			printf("\n");
		}
	}
}
