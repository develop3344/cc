/*输出2到500之间的素数 每十个换一行 */
# include<stdio.h>
# include<math.h>
int main(void)
{
    int n,i,count=0;  //count 计数
    for(n=1;n<=500;n++)
    {
        for(i=2;i<=sqrt(n);i++)    /*sqrt(n)=pow(n,0.5)  但pow(n,1/2)是错误的 1/2为0，应该用0.5*/
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i>sqrt(n)) /*最后一步 执行了 i++ */
        {
            printf(" %d ",n); /*注意 引号与 %d 之间的空格 */
            count++;          /*注意 count  */
        }
         if (  count%10 == 0 ) 

        {

            printf("\n"); /*输出结果 每行十项个数字*/

        }
    }
    return 0;
}
