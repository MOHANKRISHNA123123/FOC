#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("NAME:CH.MOHAN KRISHNA REG:192211852\nEnter last number of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			sum=sum+pow(i,2);
		}
	}
	printf("sum=%d",sum);
	return 0;
}
