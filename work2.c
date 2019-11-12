/*P63 题目3-8 同P55例题3-8*/
#include<stdio.h>
int main (void)
{
    int i, choice ;
    double price ;
    for(i=1;i<=5;i++)/* ++为自增,注意分号 可查询五次价格 */{
        printf("[1] Select apples\n");
        printf("[2] Select pears\n");
        printf("[3] Select oranges\n");
        printf("[4] Select geapes\n");
        printf("[0] Exit \n");
    
        printf("Enter choice:\n");
        scanf("%d",&choice);
    if (choice==0)
        break;
    switch (choice){
        case 1: price=3.00;break;  /*case与数字间必须有空格 */
        case 2: price=2.50;break;
        case 3: price=4.10;break;
        case 4: price=10.20;break;
        default: price =0.00;break;
        }
        printf("%.2f\n",price);
    }
        printf("Thanks\n");
        return 0;
    }
    
    