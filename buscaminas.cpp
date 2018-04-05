#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 6
#define Q 10

void pon_minas(int a[M][N]){

      for(int minas_puestas=0; minas_puestas<Q; minas_puestas++){
          int fila;
          int colum;
          do{
                 fila = rand() % M;
                 colum = rand() % N;
            } while(a[fila][colum]!=0);

          a[fila][colum] = 1;

      }
}
void rellena(int a[M][N]){
    for (int fila=0; fila<M; fila++)
        for(int colum=0; colum<M; colum++)
            a[fila][colum] = 0;
}

void toti(int tablero[M][N]){
	int x,y;
	for (x=0; x<M; x++){
		for (y=0; y<N; y++){
			printf("%d", tablero[x][y]);
}
			printf("\n");
}		
}



int main(){
    int tablero[M][N];
	rellena(tablero);
    pon_minas(tablero);
	toti(tablero);
    return EXIT_SUCCESS;
}


