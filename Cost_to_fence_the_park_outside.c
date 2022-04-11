#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a+2*c;
    f=b+2*c;
    g=((e*f)-(a*b))*d;
    if(e<=0||f<=0)
    printf("impossible");
    else
    printf("%d",g);
    return 0;
}