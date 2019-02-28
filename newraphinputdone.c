/*Program C MetNum metode Newton Raphson dan Secant*/
#include <stdio.h>
#include <math.h>

//kurang di loop bagian jika rae<1% metode newton rhapson
int main(){

    float x, fx;
    float fd1, xa, rae, raem=100;

    printf("Masukkan nilai x :");
    scanf("%f", &x);
    //printf("x0      : %f \n", x);
    
    for(int i=0; raem>=1; i++){ // coding metode newton rhapson start

        printf("Iterasi i=%d ------------------------------------------\n", i);

        printf("x0      : %f \n", x);

        fx = pow((1.5),x)-5; //rumus utama
        printf("f(x)    : %f \n", fx);

        fd1 = pow((1.5),x) * 0.4054651081; // <<< mulai algoritma newton rhapson
        printf("f'(x)   : %f \n", fd1);

        xa = x-(fx/fd1);
        printf("x1      : %f \n", xa);

        rae = ((xa-x)/xa)*100;
        if(rae<0){
            raem = rae*(-1);
        }
        else{
            raem = rae;
        }
        
        printf("rae     : %f \n", raem);

        x = xa;

    }

    return 0;
}