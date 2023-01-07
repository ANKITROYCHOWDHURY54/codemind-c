#include<stdio.h>
void sn(int n)
{
    int q,r,fact=1,sum=0,i;
    q=n;
    while(q!=0)
    {
        r=q%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        q=q/10;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    sn(n);
}