#include<stdio.h>
void atn(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    atn(a,b);
}