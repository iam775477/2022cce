#include <stdio.h>
int a=20;

void funcA()
{
    a=10;
    printf("�bfuncA()��,a�O%d\n",a);
}

int funcB()
{
    int a=30;
    printf("�bfuncB()��,a�O%d\n",a);
}

int main()
{
    printf("�bmain()�ݨ쪺�O,a�O%d\n",a);
    funcA();
    funcB();
    printf("�bmain()�ݨ쪺�O,%d\n",a);
}
