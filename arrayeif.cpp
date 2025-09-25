#include <stdio.h>
int main(){

    int n[10] = {0,1,2,3,4,5,6,7,8,9};
    int j[10] = {9,8,7,6,5,4,3,2,1,0};
    
    for(int i=0; i<10; i++){
        printf("N[%d] = %d\n", i, n[i]);}
    
        printf("\n");
        printf("digite o n;");
        scanf("%d", &n[0]);
        printf("digite o j;");
        scanf("%d", &j[0]); 
        printf("\n");

    int soma = n[0] + j[0];
    
    printf("A soma de N[0] + J[0]= %d\n", soma);
    
    return 0;

}