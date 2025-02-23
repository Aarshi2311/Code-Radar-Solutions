#include <stdio.h>
int main()
{
    unsigned int a;
    scanf("%u", &a);

    unsigned int b = num & (1 << (sizeof(unsigned int) * 8 - 1));

    if (b)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}
