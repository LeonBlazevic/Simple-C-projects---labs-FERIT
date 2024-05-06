#include "header.h"
//bonus zadatak
int main(void){
    int n,x;
    FILE *fp;
    fp = fopen("ulaz.txt", "r");
    if (fp == NULL) {
        printf("Greska pri otvaranju datoteke.\n");
        exit(EXIT_FAILURE);
    }
    fscanf(fp, "%d", &n);
    int niz[n];

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &niz[i]);
    }
    fclose(fp);
    
    do{
        printf("\nIzaberite radnju (1-8):\n");
        printf("1. Ispis polja\n");
        printf("2. Bubble Sort - uzlazno\n");
        printf("3. Bubble Sort - silazno\n");
        printf("4. Selection sort - uzlazno\n");
        printf("5. Selection sort - silazno\n");
        printf("6. Spremanje polja iz memorije u datoteku izlaz.txt\n");
        printf("7. Kraj\n");
        scanf("%d", &x);
        switch (x){
            case 1:
                ispispolja(niz, n);
                break;
            case 2:
                bubbleSort(niz, n, 0);
                break;
            case 3:
                bubbleSort(niz, n , 1);
                break;
            case 4:
                selectionSort(niz, n, 0);
                break;
            case 5:
                selectionSort(niz, n, 1);
                break;
            case 6:
                spremanjePolja(niz, n);
                break;
            case 7:
                break;
        }
    }while(x!=7);
    printf("\n\n");
    return 0;
}

//za pokretanje u terminal upisati:
//gcc main.c funkcije.c -o main.exe
//.\main.exe
