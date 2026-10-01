#include<stdio.h>
int main()
{
    int a;
    printf("enter three digit number");
    scanf("%d",&a);

    a=a%10*a/10%10*a/100;
    printf("%d",a);
    return 0;
}