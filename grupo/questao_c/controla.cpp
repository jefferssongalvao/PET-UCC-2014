#include <iostream>

using namespace std;

#include "definicoes.h" //  definições padrões utilizadas

#include "Grafo.h" // struct do grafo

#include "controla.h" // função que controla as entregas

void controla (Grafo G, Vertices s, Vertices parnt[], double cst[], Vertices Destino) {
	Vertices w, w0, fr[maxV];
	for(w = 0; w < G->V; w++) {
		parnt[w] = -1;
		cst[w]   = maxCST;
	}
	fr[s]  = s;
	cst[s] = 0.0;

	while(1) {
		double mincst = maxCST;
		for(w = 0; w < G->V; w++) {
			if(parnt[w] == -1 && mincst > cst[w]) 
				mincst = cst[w0=w];
		}
		if(mincst == maxCST) break;
		parnt[w0] = fr[w0];

		for(w = 0; w < G->V; w++) {
			if(cst[w] > cst[w0] + G->adj[w0][w]){
				cst[w] = cst[w0] + G->adj[w0][w];
				fr[w] = w0;
			}
		}
	}

	if(cst[Destino] < INFINITO)
		cout << cst[Destino];
	else
		cout << "Nao e possivel entregar a carta";
	cout << "\n";
}