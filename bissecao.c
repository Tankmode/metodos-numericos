#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    float y;
    y = pow(x,4) + (pow(x,3)*2) - (pow(x,2)*13) - 14*x + 24;
    return y;
}

float bissecao (float a, float b, float erro)
{
    float c;
    float ba = f(a);
    float bb = f(b);
    float bc = f(c);
    
    while(fabs(b-a) > erro){
        c = (a+b)/2;
        if(f(a)*f(c) < 0){
            b = c;
            bb = bc;
        }
        else{
            a = c;
            ba = bc;
        }
    }
    c = (a+b)/2;
    return c;
}

int main()
{
    float a, b, erro;
    float c;
    printf("intervalo 1, por favor\n");
    scanf("%f", &a);
    printf("intervalo 2, por favor\n");
    scanf("%f", &b);
    printf("erro, por favor\n");
    scanf("%f", &erro);
    
    c = bissecao(a,b,erro);
    printf( "raiz aproximada = %0.3f",c );
    return 0;
}
