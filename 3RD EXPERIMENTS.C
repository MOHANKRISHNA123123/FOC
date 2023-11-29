#include<stdio.h>
int main()
{
	int n,i;
	printf("NAME:CH.MOHAN KRISHNA REG:192211852\nEnter the last number of series:");
	scanf("%d",&n);
	for(i=1;i<n;)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
