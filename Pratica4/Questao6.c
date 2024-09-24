#include <stdio.h>
#include <stdlib.h>


//Implentando os structs;
typedef struct valor {
  float numero;
  struct valor *prt;
} Valor;

int main()
{
  //Declrando struct para PV;
  struct valor PV;

  //Atribuindo um numero real para PV:
  PV.numero = 3.14;

  //Alocando memoria para PV;
  PV.prt = (Valor *)malloc(sizeof(Valor));
  if(PV.prt == NULL){
    printf("Erro de alocação de memoria\n");
    return 1;
  }

  //Atribuindo valor da memoria de PV para o ponteiro prt;
  PV.prt = &PV;

  //Imprimindo os resultados:
  printf("O conteudo de PV eh: %f\n", PV.numero);
  printf("O endereco de PV eh: %p\n", &PV);
  printf("Endereco do ponteiro: %p\n", PV.prt);

  free(PV.prt);


  return 0;
}
