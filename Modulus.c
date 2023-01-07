#include<stdio.h>
void mod(int a,int b)
{
    int d;
    d=a%b;
    printf("%d",d);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mod(a,b);
}