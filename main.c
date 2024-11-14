#include <stdio.h>
#include <stdlib.h>
void imprime_histograma(int *vendas, int num_categorias);
int main(){
    int *vendas;
    int num_categorias;
    scanf("%d", &num_categorias);
    if(num_categorias==0){
        printf("'vazio'");
    }
    vendas=(int*) malloc(num_categorias*sizeof(int));
    for(int i=0; i<num_categorias; i++){
        scanf("%d", &vendas[i]);
    }
    imprime_histograma(vendas, num_categorias);
    free(vendas);
    return 0;
}
void imprime_histograma(int *vendas, int num_categorias){
    for(int i=0; i<num_categorias; i++){
        printf("%d ", vendas[i]);
        for(int j=0; j<vendas[i]; j++){
            printf("*");
        }
        if(i<num_categorias)
            printf("\n");
    }
}