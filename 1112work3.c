/*求1的阶乘 加到 n的阶乘 */
#include<stdio.h>
int main (void)
{
    int i,n,s,sum;
    s=1;
    sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for ( i=1; i<=n; i++ )
    {
        s=s*i;
        sum=sum+s;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
