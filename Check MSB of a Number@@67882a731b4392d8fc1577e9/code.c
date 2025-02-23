#include <stdio.h>
int main()
{
    unsigned int a;
    printf("Enter an integer: ");
    scanf("%u", &a);

    unsigned int b = num & (1 << (sizeof(unsigned int) * 8 - 1));

    if (b)
    {
        printf("The Most Significant Bit of %u is 1\n", num);
    }
    else
    {
        printf("The Most Significant Bit of %u is 0\n", num);
    }

    return 0;
}
