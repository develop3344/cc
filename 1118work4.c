/*求 e 的值 */
# include<stdio.h>
int main (void)
{
    int n=1,fac=1;
    double e=1,term=1;
    

    while (term>=1e-5)
    {
        fac=fac*n;
        term=1.0/fac;
        e+=term;
        n=n+1;
    }
    printf("e is %lf\n",e);
    return 0;
}
