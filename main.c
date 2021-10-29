
/**********
create a calculator program

INPUTS;
-num1,num2
/num1,*num2

OUTPUTS
-sum
-diff
-mult
-div

Computations
-sum=num1+num2
-diff=num1-num2
-multi=num1*num2
-div=num1/num2

STORAGE
num1,num2,sum,diff,multi,div
**********/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int num1,num2,sum,diff,multi,div;


    //ASSIGNMENTS
    num1=200;
    num2=50;

    //computation
    sum=num1=num2;
    diff=num1-num2;
    multi=num1*num2;
    div=num1/num2;

    //OUTPUT
    //sum;results
    //3+5=8
    printf("%d + %d=%d/n",num1,num2,sum);
    printf("%d - %d=%d/n",num1,num2,diff);
    printf("%d * %d=%d/n",num1,num2,multi);
    printf("%d / %d=%d/n",num1,num2,div);


    return 0;
}
