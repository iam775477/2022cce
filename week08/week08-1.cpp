#include <stdio.h>
int main()
{
    int n,i,bad=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        bad=1;
    }
    if(bad==0)
    printf("%d �O���",n);
    else
    printf("%d ���n,���O���",n);
}
