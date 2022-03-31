// Implemente a função funcao, que recebe os valores de a e de b e retorna o valor obtido pela função definida a seguir por meio do parâmetro resultado, que é passado por referência.

// Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h, string.h e math.h).

#include <stdio.h>
void funcao(int a, int b, int *resultado)
{
  int i, j = 1, somatorio_b = 0, somatorio_a = 0;

  for (i = 1; i <= a; i++)
  {
    while (j <= b)
    {
      somatorio_b = somatorio_b + (i * j + 10);
      j++;
    }
    j = 1;
    somatorio_a = somatorio_a + (5 * i * somatorio_b);
    somatorio_b = 0;
    *resultado = somatorio_a;
  }

  printf("%ld ", somatorio_a);
}
