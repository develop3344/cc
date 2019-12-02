// 100钱买100只鸡 公鸡五钱一只 母鸡三钱一只 小鸡一钱三只 x,y,z 数学函数
#include <stdio.h>
int main(void)
{
    int x, y, z, count = 0;   //嵌套结构
    for (x = 0; x <= 20; x++) //公鸡
    {
        for (y = 0; y <= 33; y++) //母鸡
        {
            for (z = 0; z <= 99; z += 3) //小鸡只数 z 应为 3 的倍数因为钱数为整数  z++&&z/3.0等价z+3&&z/3.0
            {
                if ((x + y + z == 100) && (5 * x + 3 * y + z / 3== 100))
                {
                    printf("公鸡 %d 只，母鸡 %d 只，小鸡 %d 只\n", x, y, z);
                    count ++;
                }
            }
        }
    }
printf("Count is %d\n", count);
return 0;
}




#include <stdio.h>
int main(void)
{
    int cock,hen,chicken;
    for( cock=0;cock<=20;cock++ )
    {
        for(hen=0;hen<=33;hen++)
        {
            chicken=100-cock-hen;              //重点
            if(5*cock+3*hen+chicken/3.0 == 100)   //重点 15*cock+9*hen+chicken == 300   chicken%3==0
            {
                printf("cock: %d ,hen: %d ,chicken: %d \n",cock,hen,chicken);
            }
            
        }
    }
    retuen 0;
}
