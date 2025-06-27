/*
* Problema Online
* ---------------
* Problema  : 11547 - Automatic Answer
* Plataforma: UVa
*
* Data         : 27/06/2025
* Hora inicial : 18:47:37
* Hora de envio: 19:04:26
*
* Dificuldade: Fácil
* Categoria  : Repetição
* Tipo       : A2
**/
#include <stdio.h>
#include <cmath>

int main (void) {

	int t, n, O;

	scanf("%i", &t);

	while(t--)
	{
		scanf("%i", &n);

		O = n * 567;
		O /= 9;
		O += 7492;
		O *= 235;
		O /= 47;
		O -= 498;

		O /= 10;

		printf("%i\n", abs(O % 10));

	}
	
	return 0;
}
