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

void matriz_x(int a[N][N], int r[N][N]){
    char letra = 'x';
    for(int f=0; f<N;f++) {
        for(int c=0; c<N; c++)
            if (r[f][c] == 1)
                printf("%i", a[f][c]);
            else
                printf("%c", letra);
        printf("\n");
    }

}

void revela(int tablero[N][N]) {

    int x, y;
    do {
    printf("introduce una coordemada (x,y): ");
    scanf("%i %*1[,] %i", &x, &y);
    } while ((x > N-1 || y > N-1) || (x < 0 || y < 0));
    tablero[x][y] = 1;
}

int comprueba(int tablero[N][N], int revela[N][N]){

    int amount = 0;
    for(int f=0; f<N; f++)
        for(int c = 0; c<N; c++)
        {
            int vtablero = tablero[f][c];
            int rtablero = revela[f][c];
            if(vtablero && rtablero) {
                return 2;
            }
            else if(!vtablero && !rtablero)
            {
                amount++;
            }
        }

    if(amount == 0)
        return 1;
    else
        return 0;

}

int main(){
    int tablero[N][N];
    int revelar[N][N];
    bool finish = false;

    rellena(tablero);
    rellena(revelar);
    pon_minas(tablero);

    while(!finish) {
        revela(revelar);
        matriz_x(tablero, revelar);

        int vcomprueba = comprueba(tablero, revelar);
        if (vcomprueba == 0)
            continue;
        if (vcomprueba == 1)
        {
            //Ha ganado
            printf("Has ganado\n");
        }
        else
        {
            //Ha perdido
            printf("Has perdido\n");
        }
        finish = true;
    }

    return EXIT_SUCCESS;
}
