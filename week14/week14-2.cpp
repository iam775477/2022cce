#include <stdio.h>
int z=10;
void func()
{
    printf("剛進func()時,z是%d\n",z);
    z=2;
    printf("在func()裡,把z改成是%d\n",z);
}
int main()
{
    int x;
    func();

    printf("在main()裡,z是%d\n",z);
    z=1;
    printf("main()裡,把z改成是%d\n",z);
}
