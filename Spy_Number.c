#include<stdio.h>
void spy(int n)
{
    int s=0,p=1,q,r;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        p=p*r;
        q=q/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    spy(n);
}