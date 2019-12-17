
#include <stdio.h>
#define LEN 5

int main(void)
{

    int a[LEN], i;

    printf("Enter an array:\n");

    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, LEN);
    for (i = 0; i < LEN; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}
void sort(int x[], int n)
{
    int i, j, tmp,k; //优化算法：最多进行n-1轮比较
    for (i = 0; i < n - 1; i++)
    {   k=1; //假设剩下的元素已经排序好了
        for (j = i + 1; j < n; j++)
        {
            if (x[j] > x[i])
            {
                tmp = x[j]; 
                x[j] = x[i];
                x[i] = tmp;
                k=0; //一旦须要交换数组元素，说明剩下的元素没有排序好
            }
        }
        if(k) break; //如果没有发生交换，说明剩下的元素已经排序好了
    }
}
