#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int nth=(a>>b)&1;
    printf("%d",nth);
    return 0;
}