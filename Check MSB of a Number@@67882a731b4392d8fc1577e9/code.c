#include <stdio.h>
int main()
{
    unsigned int a;
    scanf("%u",&a);
    unsigned int b = a & ( 1 << (sizeof)(a) * 8-1 );
    if (msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}