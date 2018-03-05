#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, nota, sobra;

    printf("Valor: ");
    scanf("%i",&valor);

    nota = valor/100;
    if(nota>=1)
    {
        printf("%i notas de 100.\n", nota);
    }
    sobra = valor%100;
    valor = sobra;

    nota = valor/50;
    if(nota>=1)
    {
        printf("%i notas de 50.\n",nota);

    }
    sobra = valor%50;
    valor = sobra;

    nota = valor/20;
    if(nota>=1)
    {
        printf("%i notas de 20.\n",nota);
    }
    sobra = valor%20;
    valor = sobra;

    nota = valor/10;
    if(nota>=1)
    {
        printf("%i notas de 10.\n",nota);
    }
    sobra = valor%10;
    valor = sobra;

    nota = valor/5;
    if(nota>=1)
    {
        printf("%i notas de 5.\n",nota);
    }
    sobra = valor%5;
    valor = sobra;

    nota = valor/2;
    if(nota>=1)
    {
        printf("%i notas de 2.\n",nota);
    }
    sobra = valor%2;
    valor = sobra;

    nota = valor/1;
    if(nota>=1)
    {
        printf("%i notas de 1.\n",nota);
    }



    return 0;
}
