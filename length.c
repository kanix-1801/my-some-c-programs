#include <stdio.h>

int main()
{
    float l,c,k,f;
    printf("enter length in meter :");
    scanf("%f \n",&l);
    c = 100*l;
    printf(" length in centimeter : %.2f\n",c);
    k = 0.001*l;
    printf(" length in kilometer : %.2f\n",k);
    f = 3.28*l;
    printf(" length in feet : %.2f\n",f);
    return 0;
}
