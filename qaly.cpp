/*
* Problema Online
* ---------------
* Problema  : qaly
* Plataforma: Kattis
*
* Data         : 26/06/2025
* Hora inicial : 13:18:05
* Hora de envio: 13:28:17
*
* Dificuldade: Fácil
* Categoria  : Repetição
* Tipo       : A1
**/
#include <stdio.h>

int main (int argc, char *argv[])
{
	int N;

	float q, y, Q = 0;

	scanf("%i", &N);
	while(N--)
	{
		scanf("%f %f", &q, &y);
		Q += q * y;
	}
	
	printf("%.3f\n", Q);

	return 0;
}
