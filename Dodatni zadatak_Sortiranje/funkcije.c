#include "header.h"
//1. - Ispisivanje polja
void ispispolja(int niz[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", niz[i]);
    }
}

//Pomoćna swap funkcija
void swap( int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//2./3. - Selection Sort - Uzlazno /Silazno 
void selectionSort (int *a, int n, int parametar){
    int i, j, min;
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){  
            if(parametar ==0){
                if(a[j] < a[min])
                    min = j;
            }
            else{
                if(a[j] > a[min])
                    min = j;
            }
        }
        swap(&a[i], &a[min]);
    }
}


//4./5. - Bubble Sort - Uzlazno/ SIlazno
void bubbleSort(int *a, int n, int parametar){
    int i,j, chg = 1;
    for(i=0; chg == 1; i++){
        chg=0;
        for(j=0; j<n-1-i; j++)
            if(parametar ==0){
                if(a[j+1] < a[j]){
                    swap(&a[j], &a[j+1]);
                    chg=1;
                }
            }
            else{
                if(a[j+1] > a[j]){
                    swap(&a[j], &a[j+1]);
                    chg=1;
                }
            }
                
    }
}

//6. Spremanje polja u datoteku
void spremanjePolja(int A[], int n){
    FILE *f;
    f = fopen("izlaz.txt", "w");
    for(int i=0; i<n; i++){
        fprintf(f, "%d ", A[i]);
    }
    fclose(f);
}