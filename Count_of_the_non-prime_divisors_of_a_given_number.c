#include<stdio.h>
void npd(int n)
{
    int tc=0,i,j,c=1;
    for(i=1;i<=n;i++)
    {
        tc=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    tc=tc+1;
                    if(tc>2)
                    {
                        c=c+1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    npd(n);
}