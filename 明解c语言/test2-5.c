#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数。");
    printf("整数x："); scanf("%d",&a);
    printf("整数y："); scanf("%d",&b);
    printf("x的值是y的%f%%",(double) a*100/b);
    return 0;
}