#include <stdio.h>
int main()
{
    unsigned int a;
    printf("Enter an integer: ");
    scanf("%u", &a);

    unsigned int msb = a & (1 << (sizeof(unsigned int) * 8 - 1));

    if (msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }

    return 0;
}
