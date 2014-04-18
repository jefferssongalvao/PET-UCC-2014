#ifndef _GRAFO_H_
	#define _GRAFO_H_
		struct grafo {
			int V;
			int A;
			int adj[501][501];
		};

		typedef struct grafo * Grafo;
#endif