#include <stdio.h>
int main()
{
	int s;
	printf("�п�J�~��\n");
	scanf("%d",&s);

	if(s%400==0)
	printf("�|�~");
	else if(s%100==0)
	printf("���q�~/���~");
	else if(s%4==0)
	printf("�|�~");
	else
	printf("���q�~/���~");
}
