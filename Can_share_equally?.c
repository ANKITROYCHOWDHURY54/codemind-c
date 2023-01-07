#include<stdio.h>
void cse(int x,int y)
{
    if(x%2==0 && (x>0||y%2==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    cse(x,y);
}