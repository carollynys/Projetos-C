// Implemente a função imprimir_qtd_palavras, que recebe um texto e deve imprimir a quantidade de palavras em cada frase do texto. Considere que todas as frases terminam com um ponto final.
// Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use gets/fgets/scanf/fscanf e headers adicionais (por exemplo, string.h e math.h). O header stdio.h pode ser utilizado.

#include <stdio.h>

void imprimir_qtd_palavras(char texto[])
{
  int contador = 0, i = 0, j = 0;
  char ultimo_caracter;

  ultimo_caracter = texto[0];
  for (j = 0; texto[j] != '\0'; j = i + 1)
  {
    contador = 0;
    for (i = j; texto[i] != '.'; i++)
    {
      if ((texto[i] == ' ' || texto[i] == '\0') && (ultimo_caracter != ' ' && ultimo_caracter != '.'))
      {
        contador++;
      }
      ultimo_caracter = texto[i];
    }
    if (texto[i] == '.' && ultimo_caracter != ' ' && ultimo_caracter != '.')
    {
      contador++;
      ultimo_caracter = texto[i];
      i++;
    }
    printf("%d\n", contador);

    ultimo_caracter = texto[i + 1];
  }
}

int main()
{
  {
    imprimir_qtd_palavras("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla ac ultrices magna. Sed in nibh a enim pharetra ultrices. Phasellus pulvinar tellus sit amet massa sagittis rhoncus sed nec orci. Etiam et lobortis justo. Mauris arcu enim, pulvinar nec viverra sit amet, ornare at velit. Nullam nec lacus nec arcu cursus auctor. Aliquam erat volutpat. Aliquam tincidunt eleifend purus id fringilla. Vestibulum at euismod nisl. Suspendisse erat turpis, aliquam eget porttitor vitae, bibendum et nibh. Sed vitae faucibus mi.");
  }
}
