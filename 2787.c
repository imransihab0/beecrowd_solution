#include<stdio.h>
int main(){
    
    int rows, coloum;
    scanf("%d%d",&rows,&coloum);

    if(rows%2 == 0 && coloum%2 == 0){
        printf("1\n");
    }else if(rows%2 == 1 && coloum%2 == 1){
        printf("1\n");
    }else{
        printf("0\n");
    }

return 0;
}