/*
* Problema Online
* ---------------
* Problema  : moscowdream
* Plataforma: Kattis
*
* Data         : 27/06/2025
* Hora inicial : 19:05:25
* Hora de envio: 19:47:26
*
* Dificuldade: Fácil...
* Categoria  : Seleção
* Tipo       : A1
**/
#include <stdio.h>

int main (void)
{
	unsigned int a, b, c, n;

	scanf("%i %i %i %i", &a, &b, &c, &n);

	if (a > 0 && b > 0 && c > 0 && (a + b + c) >= n && n >= 3)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
