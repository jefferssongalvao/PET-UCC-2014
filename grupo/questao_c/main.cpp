#include <iostream>

using namespace std;

#include "definicoes.h" //  definições padrões utilizadas

#include "Grafo.h" // struct do grafo

#include "controla.h" // função que controla as entregas

int main(void) {
	Grafo D;

	D = new (struct grafo);

	int i, j, cidades, acordos, consultas, Origem, Destino, Tempo;
	Vertices parnt[501];
	double cst[501];

	while(cin >> cidades &&  cin >> acordos) {
		if(cidades == 0) break;

		for(i = 0; i <= cidades; i++)
			for(j = 0; j <= cidades; j++)
				D->adj[i][j]=INFINITO;
		for(i = 0; i < acordos; i++){
			cin >> Origem;
			cin >> Destino;
			cin >> Tempo;
			if(D->adj[Destino][Origem] != INFINITO){
				D->adj[Origem][Destino] = 0;
				D->adj[Destino][Origem] = 0;
			} else
				D->adj[Origem][Destino] = Tempo;
		}
		D->V = cidades+1;
		D->A = acordos;

		cin >> consultas;

		for(i = 0; i < consultas; i++) {
			cin >> Origem;
			cin >> Destino;
			controla (D, Origem, parnt, cst, Destino);
		}
		cout << "\n";

	}
}