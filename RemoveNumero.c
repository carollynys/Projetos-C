// Implemente a função remover_numeros_matriz, que recebe uma matriz com n_linhas e n_colunas e também os índices de uma célula (l: linha, c: coluna). A função deve incluir o valor zero na célula informada, assim como também em todas as células adjacentes que possuam o mesmo valor original da célula. Ao trocar o valor de uma célula, as células adjacentes a esta também devem ser preenchidas com o valor zero. Para este exercício, considere células adjacentes as que estão imediatamente acima, abaixo, esquerda e direta.

void remover_numeros_matriz(int l, int c, int n_linhas, int n_colunas, int m[n_linhas][n_colunas])
{
  int valor_buscado = m[l][c];

  if (l - 1 >= 0 && l - 1 < n_linhas && m[l - 1][c] == valor_buscado)
  {
    remover_numeros_matriz(l - 1, c, n_linhas, n_colunas, m);
  }
  m[l][c] = 0;
  if (l + 1 >= 0 && l + 1 < n_linhas && m[l + 1][c] == valor_buscado)
  {
    remover_numeros_matriz(l + 1, c, n_linhas, n_colunas, m);
  }
  m[l][c] = 0;
  if (c - 1 >= 0 && c - 1 < n_colunas && m[l][c - 1] == valor_buscado)
  {
    remover_numeros_matriz(l, c - 1, n_colunas, n_colunas, m);
  }
  m[l][c] = 0;
  if (c + 1 >= 0 && c + 1 < n_colunas && m[l][c + 1] == valor_buscado)
  {
    remover_numeros_matriz(l, c + 1, n_colunas, n_colunas, m);
  }
  m[l][c] = 0;
}
