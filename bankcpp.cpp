#include <stdio.h>
#include <string.h>


int main(void){
    int senha = 1234;
    int senha1;
    int opcao;
    int i=3;
    int tentativa_atual=0;
    float saldo = 1000;
   
    printf("Enter your password: \n");
    scanf("%d", &senha1);
    

    while (i>0)
        {
        if (senha1 != senha){
    
        printf("senha incorreta, tente novamente:");
        scanf("%d", &senha1);
        i--;}
        
        else if (i==tentativa_atual)   
        {
            printf("você excedeu o número de tentativas, sua conta foi bloqueada");
            return 0;
        }

        else
       {
        printf("digite uma opção:\n 1- saldo\n 2- saque\n 3- depósito\n 4- sair\n");
        scanf("%d", &opcao);




        while(0){
        printf("digite uma opção:\n 1- saldo\n 2- saque\n 3- depósito\n 4- sair\n");
        scanf("%d", &opcao);}}

        
    switch (opcao)
        {
        case 1:{

            
            printf("seu saldo é de saldo%.2f\n", saldo);
            
        
        
            
           
        break;}
        case 2:
        {
            float saque;
            
            printf("quanto deseja sacar?");
            scanf("%f", &saque);      
            printf("saque realizado com sucesso, seu novo saldo é de R$%.2f\n", saldo - saque);
            
            saldo = saldo - saque;
            
            break; }  
    
        case 3:
        {
            float deposito;

            printf("quanto deseja depositar?");
            scanf("%f", &deposito);
            
            printf("depósito realizado com sucesso, seu novo saldo é de R$%.2f\n", 1000 + deposito);
            saldo = saldo + deposito;


        break;
        }

        case 4:
        {
            printf("saindo..., volte sempre");
            return 0;
            break;
        }
            
            
        default:
            printf("opção inválida");
           }}
   
    return 0;}
   