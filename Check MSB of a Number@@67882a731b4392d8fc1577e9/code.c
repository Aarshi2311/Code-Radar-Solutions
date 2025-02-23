#include <stdio.h>
int main()
{
    unsigned int a;
    scanf("%u",&a);
    unsigned int b = a & ( 1 << (unsigned int)(a) * 8-1 );
    if (b)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}