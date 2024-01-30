#include<stdio.h>
int main(){
    int inter=0, gremio=0, grenais=0, option, count=0, a, b;
    while(1){
        scanf("%d%d", &a, &b);
        if(a == b){
            grenais++;
        }
        if(a > b){
            inter++;
        }else if(a<b){
            gremio++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);
        if(option == 1){
            count++;
            continue;
        }else if(option == 2){
            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", count+1, inter, gremio, grenais);
            if(inter > gremio){
                printf("Inter venceu mais\n");
            }else if(inter < gremio){
                printf("Gremio venceu mais\n");
            }else if(inter == gremio){
                printf("Não houve vencedor\n");
            }
            break;
        }

    }
    
return 0;
}