#include <stdio.h>
int sum(int a,int b);

int main()
{
    ////�b�Τ��e�n���ŧideclare�Ωw�qdefine
    int ans=sum(2,3);
    printf("ans : %d",ans);
}

int sum(int a,int b)
{
    return a+b;
}
