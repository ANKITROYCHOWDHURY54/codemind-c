#include<stdio.h>
void divi(int a,int b)
{
    int v;
    v=a/b;
    printf("%d",v);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    divi(a,b);
}