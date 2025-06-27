/*
* Problema Online
* ---------------
* Problema  : 11044 - Searching for Nessy
* Plataforma: UVa
*
* Data         : 27/06/2025
* Hora inicial : 17:24:04
* Hora de envio: 18:46:11
*
* Dificuldade: Era pra ser fácil...
* Categoria  : Repetição
* Tipo       : A2
**/
#include <stdio.h>
#include <cmath>

using namespace std;

int main (void) {

	long long int c, n, m, O;

	scanf("%lli", &c);

	while(c--)
	{
		scanf("%lli %lli", &n, &m);

		O = ceil((n - 2.0) / 3.0) * ceil((m - 2.0) / 3.0);

		printf("%lli\n", O);

	}
	
	return 0;
}
