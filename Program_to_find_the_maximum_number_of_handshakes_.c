#include<stdio.h>
void mnh(int n)
{
    int d;
    d=n*(n-1)/2;
    printf("%d",d);
}
int main()
{
    int n;
    scanf("%d",&n);
    mnh(n);
}