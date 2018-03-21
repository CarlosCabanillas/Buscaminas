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

int main(){
    int tablero[M][N];
    rellena(tablero);
    pon_minas(tablero);
    return EXIT_SUCCESS;
}





