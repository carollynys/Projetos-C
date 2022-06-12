// Implemente a função frequencia_string, que recebe uma string str e um texto. Por meio do parâmetro qtd (passado por referência), a função deve retornar a quantidade de vezes que str aparece no texto. Essa verificação deve ignorar diferenças em razão de letras minúsculas e maiúsculas. Por exemplo, considere str="teste" e texto="Teste teste TESTE". Nesse caso, a função deve retornar o valor 3.

// Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h, string.h e math.h).

void frequencia_string(const char *str, const char *texto, int *qtd)
{
  *qtd = 0;
  int i, j, quantidade = 0, tamanho_palavra = 0, x = 0, aux_i = 0, c = 0;

  while (str[c] != '\0') {
    tamanho_palavra++;
    c++;
  }

  for (i = 0; texto[i] != '\0'; i++) {
    x = 0;
    if (str[0] == texto[i] || str[0] + 32 == texto[i] || str[0] - 32 == texto[i])
    {

      aux_i = i;

      for (j = 0; str[j] != '\0'; j++) {

        if (str[j] == texto[aux_i] || str[j] + 32 == texto[aux_i] || str[j] - 32 == texto[aux_i]) {
          x++;
        }
        aux_i++;
      }
      if (x == tamanho_palavra){
        *qtd = *qtd + 1;
      }
    }
  }
}
