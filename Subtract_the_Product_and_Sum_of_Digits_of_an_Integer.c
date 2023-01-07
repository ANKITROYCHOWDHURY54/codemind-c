#include<stdio.h>
void ps(int n)
{
    int r,p=1,s=0,q,tc;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        p=p*r;
        q=q/10;
    }
    tc=p-s;
    printf("%d",tc);
}
int main()
{
    int n;
    scanf("%d",&n);
    ps(n);
}