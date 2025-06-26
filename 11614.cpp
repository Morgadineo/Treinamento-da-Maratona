/* 
* Problema Online
* ---------------
* Problema  : 11614 - Etruscan Warrios
* Plataforma: UVa
* 
* Data         : 09/06/25
* Hora inicial : 
* Hora de envio: 16:14
* 
* Dificuldade: Facil
* Categoria  : I/O + Sequencias
* Tipo       : A1
* */
#include <bits/stdc++.h>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// Numero de casos de teste na primeira linha
	int TC;
	scanf("%d", &TC);
	while(TC--)
	{
		long long int warriors, k;
		scanf("%Ld", &warriors);

		k = (sqrt(1 + 8 * warriors) - 1) / 2;

		printf("%Ld\n", k);

	}


	return 0;
}

