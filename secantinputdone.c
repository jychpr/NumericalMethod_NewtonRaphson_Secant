#include <stdio.h>
#include <math.h>

int main(){

    float x0, x1, fx0, fx1;
    float x2, rae, raem=100;

    printf("Masukkan nilai x0 :");
    scanf("%f", &x0);
    printf("Masukkan nilai x1 :");
    scanf("%f", &x1);

    //x = x0 + x1;

    //printf("sum : %f", x);

    for(int i=0; raem>=1; i++){

        printf("Iterasi i=%d ------------------------------------------\n", i);

        printf("x0      : %f \n", x0);

        printf("x1      : %f \n", x1);

        fx0 = pow((1.5),x0)-5; //rumus utama dimasukin x0
        printf("f(x0)    : %f \n", fx0);

        fx1 = pow((1.5),x1)-5; //rumus utama dimasukin x1
        printf("f(x1)    : %f \n", fx1);

        x2 = x1 - ((fx1 * (x1-x0))/(fx1 - fx0)); // <<< mulai algoritma secant
        printf("x2       : %f \n", x2);

        rae = ((x2-x1)/x2)*100;
        if(rae<0){
            raem = rae*(-1);
        }
        else{
            raem = rae;
        }
        
        printf("rae      : %f \n", raem);\

        x0 = x1;

        x1 = x2;

    }

    return 0;
}