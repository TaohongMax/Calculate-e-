#include <stdio.h>
#include <stdlib.h>
float f(int n){
    int a;

    if(n>1) a=n*f(n-1);
    else a=1;
    //printf("%d\n",a);
    return a;
}
int main()
{
    int i=1;
    float e=1.0;
    while(f(i)<1e6){//用f(i)<1e6代替，以解决小数精度不足的问题
        e=e+(1.0/f(i));
        i++;
    }
    printf("e=%f\n",e);
    return 0;
}
