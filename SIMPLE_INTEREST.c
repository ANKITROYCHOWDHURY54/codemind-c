#include<stdio.h>
void si(int p,int t,int r)
{
    int tc;
    tc=(p*t*r)/100;
    printf("%d",tc);
}
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    si(p,t,r);
}