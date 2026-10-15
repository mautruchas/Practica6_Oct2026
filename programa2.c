#include <stdio.h>
int main ()
{
  if (0)
  {
    printf("Esta isntrucción siempre se ejecuta\n");
    printf("porque la condicion siempre es falsa (0).\n");
  }
  if (-38) //El bloque de código de esta estructura if
  {        //solo consta de una línea porque los comentarios
          //no son tomados por el compilador.
          //La condicion siempre es verdadera (diferente de 0)
    printf("Esta condición seiempre se ejecuta.\n");
  }
  return 0;
}
