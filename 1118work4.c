/*求 e 的值   e= 1+ 1/1! +1/2! + ... +1/n! */
# include<stdio.h>
int main (void)
{
    int n=1,fac=1;
    double e=1,term=1;
    

    while (term>=1e-5)  /*表示 1乘以10的5次幂 */
    {
        fac=fac*n;
        term=1.0/fac;
        e+=term;
        n=n+1;
    }
    printf("e is %lf\n",e);
    return 0;
}


/*求 e 的值 e= 1+ 1/1! +1/2! + ... +1/n!*/
# include<stdio.h>
int main (void)
{
    int n,i;
    double term=1, e;
    printf("Enter n:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term*=i;       /*或者 term=term/i; e += term;*/
        e+=1.0/term;
    }
    
    e += 1;

    printf("e is %.5lf\n",e);
    return 0;
}
