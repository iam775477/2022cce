#include <stdio.h>
int main()
{
    int n;
    printf("請輸入數字n: \n");
    scanf("%d",&n);
    printf("用8除餘數%d\n",n%8);
    printf("用9除餘數%d\n",n%9);
    printf("用15除餘數%d\n",n%15);
}
