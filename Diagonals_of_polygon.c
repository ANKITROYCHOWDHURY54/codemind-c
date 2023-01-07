#include<stdio.h>
void dp(int n)
{
    int d;
    d=n*(n-3)/2;
    printf("%d",d);
}
int main()
{
    int n;
    scanf("%d",&n);
    dp(n);
}