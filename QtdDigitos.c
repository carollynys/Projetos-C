// Implemente a função quantidade_digitos, que deve retornar a quantidade de dígitos do número passado no parâmetro.

int quantidade_digitos(int numero)
{

  int contaDig = 0;
  if (numero == 0)
  {
    contaDig = 1;
  }
  else
  {
    while (numero != 0)
    {

      numero = numero / 10;
      contaDig = contaDig + 1;
    }
  }
  return contaDig;
}
