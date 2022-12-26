#include <stdio.h>
int main()
{
	int s;
	printf("請輸入年份\n");
	scanf("%d",&s);

	if(s%400==0)
	printf("閏年");
	else if(s%100==0)
	printf("普通年/平年");
	else if(s%4==0)
	printf("閏年");
	else
	printf("普通年/平年");
}
