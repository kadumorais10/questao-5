#include <stdio.h>

int main(void) {
  printf("selecione o sexo\n");
  printf("1-masculino\n");
  printf("2-feminino\n");
  int sexo;
  scanf("%d", &sexo);
  if (sexo == 1){
    printf("digite sua altura\n");
    float altura;
    scanf("%f", &altura);
    float pesoideal = (72.7 * altura) - 58;
    printf("seu peso ideal é %0.2f quilogramas\n", pesoideal);
  }
  if(sexo == 2){
    printf("digite sua altura\n");
    float altura;
    scanf("%f", &altura);
    float pesoideal = (62.1 * altura) - 44.7;
    printf("seu peso ideal é %0.2f quilogramas\n", pesoideal);
  }
  
 
  
  return 0;
}