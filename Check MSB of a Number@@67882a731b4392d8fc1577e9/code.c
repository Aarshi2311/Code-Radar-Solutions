#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b = a & ( 1 << (sizeof)(a) * 8-1 );
    if (b)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}