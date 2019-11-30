// 100钱买100只鸡 公鸡五钱一只 母鸡三钱一只 小鸡一钱三只 x,y,z 数学函数 
# include<stdio.h>
int main (void)
{
    int x,y,z,count=0;  //嵌套结构
    for(x=1;x<=20;x++)  //公鸡
    for(y=1;y<=33;y++)  //母鸡
    for(z=1;z<=300;z++) //小鸡
    {if( ( x+y+z == 100 ) && ( 5*x+3*y+z/3<=100 ) )
    printf("公鸡 %d 只，母鸡 %d 只，小鸡 %d 只\n",x,y,z);
    count++;
    }
    printf("Count is %d\n",count);
    return 0;
}
