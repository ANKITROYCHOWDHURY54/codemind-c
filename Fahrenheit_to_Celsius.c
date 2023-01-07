#include<stdio.h>
void fc(int n)
{
    float c;
    c=(n-32)*5.0/9;
    printf("%0.2f",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    fc(n);
}