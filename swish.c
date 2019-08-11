#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float mrp,discount,finalcost=0.0;
    scanf("%f %f",&mrp,&discount);
    printf("\n");
    
    while(mrp>=1.0)
    {
        finalcost+=mrp;
        mrp=truncf(mrp-(mrp*(discount/100)));
    }
    
    printf("%.2f",finalcost);
    return 0;
}
