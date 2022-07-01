#include <stdio.h>
#include <math.h>
#define erro 0.01
#define NO 100
float f (float x)
{
  return  pow(x,4) + (pow(x,3)*2) - (pow(x,2)*13) - 14*x + 24;
}
int main()
{
  float a, b;
  float xn = 0.0;
  float x[NO] = {0.0};
  int i = 0, n = 1;
  scanf("%f", &a);
  scanf("%f" ,&b);

  x[0] = a;
  x[1] = b;


  while(fabs(f(xn)) > erro)
  {
    xn = x[n+1] = x[n] - (x[n] - x[n - 1])/(f(x[n]) - f(x[n - 1])) * f(x[n]);
    i++;
    n++; 

    if(i >= NO)
    {
      break;
    }

  }

  printf("raiz %f\n iteração %d\n", xn, i);
  return 0;
}
