#include <stdio.h>
int sum(int a,int b);

int main()
{
    ////在用之前要先宣告declare或定義define
    int ans=sum(2,3);
    printf("ans : %d",ans);
}

int sum(int a,int b)
{
    return a+b;
}
