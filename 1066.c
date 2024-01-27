#include<stdio.h>
int main(){

int e,o,p,n,input;
e=o=p=n=0;
for(int i=1; i<=5; i++){
    scanf("%d", &input);
    
    if(input%2 == 0){
        e++;
    }
    if(input%2 != 0){
        o++;
    }
    if(input>0){
        p++;
    }
    if(input<0){
        n++;
    }
}

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);

return 0;
}