#include<stdio.h>
int main(){

int n,alcool,gasolina,disel;
alcool=gasolina=disel=0;

int i=0;
while(1){
    scanf("%d",&n);
    if(n>=4 && n<=1){
        continue;
    }else if(n==1){
        alcool++;
    }else if(n==2){
        gasolina++;
    }else if(n==3){
        disel++;
    }else if(n==4){
        break;
    }
}

printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,disel);

    
return 0;
}