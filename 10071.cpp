/* 
* Problema Online
* ---------------
* Problema  : 10071 - Back to High School
* Plataforma: UVa
* 
* Data         : 06/06/25
* Hora inicial : 18:11
* Hora de envio: 18:40
* 
* Dificuldade: Era para ser fácil...
* Categoria  : I/O + Sequências
* Tipo       : B
**/
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	/* Múltiplos casos de teste terminados por EOF */
	int x, y;
	while (scanf("%d %d", &x, &y) == 2)
		printf("%d\n", 2 * x * y);
}
