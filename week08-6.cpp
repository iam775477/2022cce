#include <stdio.h>
int main()
{
	int n,i=1,k;
	scanf("%d",&n);

	while(i<=n)
	{
		k=1;
		while(k<=n)
		{
			if(k<=n-i)
			printf(" ");
			else
			printf("*");

			k++;

		}
		printf("\n");
		i++;
	}
}
