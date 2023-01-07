#include<stdio.h>
void sdn(int a,int b)
{
    int i,tc=0,c=0,q,r;
    for(i=a;i<=b;i++)
    {
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            c=c+1;
            r=q%10;
            if(r!=0 && i%r==0)
            {
                tc=tc+1;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sdn(a,b);
}