#include <stdio.h>
int main()
{
	int a[10]={90,80,70,60,50,40,30,20,10,0};
	int k,i,temp;

	for(k=0;k<10;k++)
	{
        for(i=0;i<10-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }

    for(i=0;i<10;i++)
    printf("%d ",a[i]);
	printf("\n");
    }
}
