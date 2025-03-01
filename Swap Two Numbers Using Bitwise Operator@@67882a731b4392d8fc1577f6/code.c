#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    a=b;
    b=c;
    c=a;
    printf("%d %d",b,c);
    return 0;
}