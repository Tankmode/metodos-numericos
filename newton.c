#include <stdio.h>
#include <math.h>

float Absoluto( float x ){
  return x >=0? x: -x;
}

int main(){
  float xini = 0, xnovo , Fxnovo, Fdxnovo , E ;     
  int k = 0;

  printf( "Digite o x inicial: " );
  scanf( "%f", &xnovo );
  printf( "Digite a precisao: " );
  scanf( "%f", &E );

  do{

    xini = xnovo;
    Fxnovo = pow(x,4) + (pow(x,3)*2) - (pow(x,2)*13) - 14*x + 24; //inserir sua função principal aqui
    Fdxnovo = (pow(x,3)*4) + (pow(x,2)*6) - 26*x - 14 + 0;//inserir a derivada da função principal aqui
    xnovo = xini - ( Fxnovo / Fdxnovo );
    k += 1;
    printf( "\niteracao = %d", k );
    printf( "\nxini = %f\nxnovo = %f", xini, xnovo, Fxnovo, Fdxnovo );

  } while(Absoluto(Fxnovo) > E);

  printf( "\n\nxnovo - xini = %f\n", xnovo -(xini) );
  printf( "A solucao final e: %f\n", xnovo );

  return 0;
}
