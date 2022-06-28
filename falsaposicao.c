#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    float y;
    y = pow(x,4) + (pow(x,3)*2) - (pow(x,2)*13) - 14*x + 24;
    return y;
}

float falpos (float a, float b, float erro)
{
    float c;
    float aux;
    
    c = b - a;
    aux = (a * f(b) - b * f(a))/(f(b) - f(a));
    while(c < erro){
        if(f(a)*f(aux) < 0.0){
            b = aux;
        }
        else{
            a = aux;
        }
    }
    c = b - a;
    aux = (a * f(b) - b * f(a))/(f(b) - f(a));
    return aux;
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
    
    c = falpos(a,b,erro);
    printf( "raiz aproximada = %0.3f\n",c );
    c = f(c);
    printf("equação da raiz = %0.3f\n",c);
    return 0;
}
