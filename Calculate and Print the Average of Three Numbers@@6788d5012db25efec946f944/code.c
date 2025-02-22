#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    float average;
    average=d/3.0;
    printf("Average: %.2f",average);
    return 0;
}