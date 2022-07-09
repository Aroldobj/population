#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ini;
    do
    {
        ini = get_int("População inicial: ");// TODO: Solicite o valor inicial ao usuário
    }
    while (ini < 9);

    int fim;
    do
    {
        fim = get_int("População final: ");// TODO: Solicite o valor final ao usuário
    }
    while (fim < ini);
    int pop = 0;
    int mor = 0;
    int cres = 0;
    pop = ini / 3;
    mor = ini / 4;
    cres = pop - mor;
    float year = 0;
    year = ((float) fim - (float) ini) / cres;
    printf("Years: %f \n",year);


     // TODO: Calcule o número de anos até o limite

     // TODO: Imprima o número de anos

}