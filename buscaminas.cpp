#include <stdio.h>
#include <stdlib.h>

#define N 6
#define Q 10

void pon_minas(int a[N][N]){

    for(int minas_puestas=0; minas_puestas<Q; minas_puestas++){
	int fila;
	int colum;
	do{
	    fila = rand() % N;
	    colum = rand() % N;
	} while(a[fila][colum]!=0);

	a[fila][colum] = 1;

    }
}
void rellena(int a[N][N]){
    for (int fila=0; fila<N; fila++)
	for(int colum=0; colum<N; colum++)
	    a[fila][colum] = 0;
}

void toti(int tablero[N][N]){
    int x,y;
    for (x=0; x<N; x++){
	for (y=0; y<N; y++){
	    printf("%d", tablero[x][y]);
	}
	printf("\n");
    }		
}

void matriz_x(int a[N][N], int ver_f, int ver_c){
    char letra = 'x';
    for(int f=0; f<N;f++) {
	for(int c=0; c<N; c++)
	    if ( ver_f == f && ver_c == c)
		printf("%i", a[f][c]);
	    else
		printf("%c", letra);
	printf("\n");
    }

}

int main(){
    int tablero[N][N];
    rellena(tablero);
    matriz_x(tablero, 2, 3);
    pon_minas(tablero);
    return EXIT_SUCCESS;
}

















/*Quitar el 2, 3 y meter para que me pida la coordenada*/
/*Hacer un do while, pedir la coordenada mientras que salga un 0*/
