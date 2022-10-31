/*calculation of simple interest*/
#include <stdio.h>

int main()
{
    int p,n;
    float r,si,amount;

    p = 100;
    n = 4;
    r = 10;

    /* Formula of Simple Interest*/

    si = p*n*r/100;

    printf("%f\n",si);
    
    //formula for amount
    amount = p + si;
  
    printf("%f\n",amount);
  
    return 0;

}
