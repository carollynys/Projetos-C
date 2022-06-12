// Leia uma sequência de n inteiros e mostre quantos são potências de 2.
// Observação: não utilize math.h.

#include <stdio.h>

int potencia(float num);

int main()
{
  int i, valor, n_valores, qtde_potencias;
  int contador = 0;

  scanf("%d", &n_valores);

  for (i = 0; i < n_valores; i++)
  {
    scanf("%d", &valor);
    qtde_potencias = potencia(valor);
    contador = contador + qtde_potencias;
  }
  printf("%d", contador);
  return 0;
}

int potencia(float num)
{
  int qtde_potencias = 0;
  while (num >= 2)
  {
    num = num / 2;
    if (num == 1)
    {
      qtde_potencias = 1;
    }
  }
  return (qtde_potencias);
}
