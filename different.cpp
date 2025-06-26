/*
* Problema Online
* ---------------
* Problema  : different
* Plataforma: Kattis
*
* Data         : 23/06/2025
* Hora inicial : 17:40:42
* Hora de envio: 17:43:10
*
* Dificuldade: Fácil
* Categoria  : Repetição
* Tipo       : A1
**/

#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;
        
int main(void)
{
        long long int a, b;

        while(scanf("%lli %lli", &a, &b) == 2)
        {
                if (a > b)
                        printf("%lli\n", a - b);
                else
                        printf("%lli\n", b - a);
        }



        return 0;
}

