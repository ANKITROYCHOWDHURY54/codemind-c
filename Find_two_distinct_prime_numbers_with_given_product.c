#include <stdio.h>

int main()
{
    int n,c=0,i,f=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0){
            f = i;
            n = n/i;
            break;
        }
    }
    // printf("%d",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2 && n!=f)
    {
        printf("%d %d",f,n);
    }
    else
    {
        printf("-1");
    }
    return 0;
}