#include<stdio.h>
void mul(int a,int b)
{
    int v;
    v=a*b;
    printf("%d",v);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mul(a,b);
}