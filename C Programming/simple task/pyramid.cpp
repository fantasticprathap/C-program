//pyramid
//prathap
//7/1/2023

#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("how many row you want pyramid=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (s=0;s<n-i-1;s++)
		printf(" ");
		for (j=0;j<i*2-1;j++)
		printf("*");
		printf("\n");
	}

}
