#include <stdio.h>
int z=10;
void func()
{
    printf("��ifunc()��,z�O%d\n",z);
    z=2;
    printf("�bfunc()��,��z�令�O%d\n",z);
}
int main()
{
    int x;
    func();

    printf("�bmain()��,z�O%d\n",z);
    z=1;
    printf("main()��,��z�令�O%d\n",z);
}
