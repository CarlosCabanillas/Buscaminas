#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 6
#define Q 10

void pon_minas(int a[M][N]){
    
	for(int minas_puestas=0; minas_puestas<Q; minas_puestas++){
	do{	
	    int f = rand() % M;
	    int c = rand() % N;
	} while(a[f][c]!=0);
	 
	a[f][c] = 1;
	
	}
}
void rellena(int a[M][N]){
    for (int f=0; f<M; f++)
	for(int c=0; c<M; c++)
	    a[f][c] = 0;
}

int main(){
    int tablero[M][N];

    rellena(tablero);
    pon_minas(tablero);

    return EXIT_SUCCESS;
}
