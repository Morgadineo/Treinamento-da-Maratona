/*
* Problema Online
* ---------------
* Problema  : tarifa
* Plataforma: Kattis
*
* Data         : 26/06/2025
* Hora inicial : 13:29:14
* Hora de envio: 13:57:59
*
* Dificuldade: Fácil
* Categoria  : Repetição
* Tipo       : A1
**/
#include <stdio.h>

int main (void) {

	int X, N, Pi, Xi = 0;

	scanf("%i", &X);
	scanf("%i", &N);

	while(N--)
	{
		scanf("%i", &Pi);

		Xi = Xi + X - Pi;

	}

	printf("%i\n", Xi + X);
	
	return 0;
}
