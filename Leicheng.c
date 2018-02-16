#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1,n=0;
    float e=1,a=1e-5;
    double jc=1;//用累乘代替阶乘
    while(1/jc>a)
    {
        e=e+1/jc;
        i++;n++;
        jc*=i;
    }
    printf("e=%f\nn=%d\n",e,n);
}
