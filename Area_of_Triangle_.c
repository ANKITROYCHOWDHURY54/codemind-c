#include<stdio.h>
#include<math.h>
void aot(int a,int b,int c)
{
    float s,area;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",area);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    aot(a,b,c);
}