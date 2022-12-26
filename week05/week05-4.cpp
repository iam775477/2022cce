#include <stdio.h>
int main()
{
    int i,a=3;
    for(i=0;i<3;i++)
    {
        printf("迴圈(電腦習慣) i是%d\n",i);
    }
    for(i=0;i<=3;i++)
    {
        printf("迴圈(人類習慣) i是%d\n",i);
    }
    for(a=3;a>0;a--)
    {
        printf("倒過來的迴圈 a是%d\n",a);
    }
}
