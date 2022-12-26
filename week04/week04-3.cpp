#include <stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	if(s%400==0)
	printf("Yes");
	else if(s%100==0)
	printf("No");
	else if(s%4==0)
	printf("Yes");
	else
	printf("No");
}
