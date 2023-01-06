#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        int n,sq,sqr;
        scanf("%d",&n);
        sq=sqrt(n);
        sqr=sq*sq;
        if(sqr==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}