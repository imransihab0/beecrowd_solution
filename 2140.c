#include<stdio.h>
#include<stdlib.h>
int main(){
    
    while(1){
        int x, y;
        scanf("%d %d", &x, &y);

        if(x == 0 && y == 0){
            break;
        }else{
            int ammount = abs( x - y );
        if( ammount <= 187 && ammount > 87 ){
            int div = ammount % 100 % 50 % 20 % 10 % 5 % 2;
            if(div == 0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        }else if( ammount <= 87 && ammount > 37 ){
            int div = ammount % 50 % 20 % 10 % 5 % 2;
            if(div == 0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        }else if( ammount <= 37 && ammount > 17 ){
            int div = ammount % 20 % 10 % 5 % 2;
            if(div == 0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        }else if( ammount <= 17 && ammount > 7 ){
            int div = ammount % 10 % 5 % 2;
            if(div == 0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        }else if( ammount <= 7 && ammount > 2 ){
            int div = ammount % 5 % 2;
            if(div == 0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        }else{
            printf("impossible\n");
        }
        }
        
    }
    
return 0;
}