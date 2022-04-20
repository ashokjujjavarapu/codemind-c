#include<stdio.h>
int main()
{
    int lp,y;
    scanf("%d",&y);
    if(lp=(y%4==0&&y%100!=0||y%400==0))
    printf("True");
    else
    printf("False");
    return 0;
}