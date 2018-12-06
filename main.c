#include <stdio.h>
#include <stdlib.h>

int main(){

int* M = NULL;
int i, a , b;
int t;
int j, mini;
int n; n = 0;

    printf("[infos] >: INITIALISATION\n");
    printf("[infos] >: Le tableau\n");
    printf("[infos] >: Entrez la taille du tableau : ");
    scanf("%d", &n);
    M = malloc(n *sizeof(int));
    printf("[infos] >: Entrez la 1ere Val de I : [ * , * ] >: ");
    scanf("%d", &a);
    printf("[infos] >: Entrez la 2e Val de I : [ %d , * ] >: ", a);
    scanf("%d", &b);
    printf("[infos] >: L'intervalle I : [ %d , %d ] >: ", a, b);
    for(i = 0; i < n; i++){
        M[i] = rand() % (b-a) + a;
        printf("\nValeur de M[%d] >: %d", i, M[i]);

        }

    printf("\n[infos] >: Computing....\n");
    for(i = 0; i <= n-1 ; i++){
        mini = i;
        for(j=i+1; j <= n; j++){
            if(M[j] < M[mini]) mini = j;
        }
        t = M[mini];
        M[mini] = M[i];
        M[i] = t;
    }

    printf("\n[infos] >: Tableau trié\n");
    printf("[ ");
    for(i = 0; i < n; i++){
        printf("%d ", M[i]);
        }
    printf("]");
    return 0;
}
