#include<stdio.h>
int main(){
    
    int i,password;
    while(1){
        scanf("%d",&password);
        if(password != 2002){
            printf("Senha Invalida\n");
        }else if(password==2002){
            printf("Acesso Permitido\n");
            break;
        }
    }    
    
return 0;
}