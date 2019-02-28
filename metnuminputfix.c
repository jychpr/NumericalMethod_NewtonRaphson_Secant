//program metode numeris newton raphson method dan secant method
#include <stdio.h>
#include <math.h>

void newtonraphson();
void secant();

int main(){

    printf("\n");
    newtonraphson();
    printf("\n");
    secant();

    return 0;

}

void newtonraphson(){

    float x, fx;
    float fd1, xa, rae, raem=100;

    printf("-------------------------NEWTON RAPHSON METHOD-------------------------");
    printf("\n\n");
    printf("Masukkan nilai x0 metode Newton Raphson :");
    scanf("%f", &x);
    printf("\n");

    for(int i=0; raem>=1; i++){ // coding metode newton raphson start

        printf("Iterasi i=%d ------------------------------------------\n", i);

        printf("x0       : %f \n", x);

        fx = pow((1.5),x)-5; //rumus utama
        printf("f(x)     : %f \n", fx);

        fd1 = pow((1.5),x) * 0.4054651081; // <<< mulai algoritma newton rhapson
        printf("f'(x)    : %f \n", fd1);

        xa = x-(fx/fd1);
        printf("x1       : %f \n", xa);

        rae = ((xa-x)/xa)*100;
        if(rae<0){
            raem = rae*(-1);
        }
        else{
            raem = rae;
        }
        
        printf("rae      : %f \n", raem);

        x = xa;

    }

    printf("\n");

}

void secant(){

    float x0, x1, fx0, fx1;
    float x2, rae, raem=100;

    printf("-------------------------SECANT METHOD-------------------------");
    printf("\n\n");
    printf("Masukkan nilai x0 metode Secant :");
    scanf("%f", &x0);
    printf("Masukkan nilai x1 metode Secant :");
    scanf("%f", &x1);
    printf("\n");

    for(int i=0; raem>=1; i++){ // coding metode secant start

        printf("Iterasi i=%d ------------------------------------------\n", i);

        printf("x0       : %f \n", x0);

        printf("x1       : %f \n", x1);

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

}