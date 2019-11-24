/* 判断n位数（n>=3）是否为 水仙花数 
简单一点 n 取3
方法 2 */
# include<stdio.h>
int main (void)
{
    int n,a,b,c;
    
    for(n=100;n<=999;n++)
    {
        a=n/100;    /* 分解出百位 */
        b=n/10%10;  /* 分解出十位 */
        c=n%10;     /* 分解出个位 */
        if ( n== a*a*a+b*b*b+c*c*c)
        {
            printf("n is %d\n",n);
        };   /* 分号可以不写 */
    }
    return 0;
}
