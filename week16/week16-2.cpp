#include <string.h>
#include <stdio.h>
char line[3000];
char line2[3000];

int main()
{
	printf("�п�J�@��r(���n���Ů�)\n");
	scanf("%s",line);

	int N=strlen(line);///�禡1
	printf("�r����׬O%d\n",N);

	strcpy(line2,line);///�禡2
	printf("line2:%s\n",line2);
}
