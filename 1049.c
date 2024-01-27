#include<stdio.h>
int main(){
    
char x[10],y[10],z[10];
scanf("%s%s%s",&x,&y,&z);

if(x[0] == 'v'){
    if(y[0] == 'a'){
        if(z[0] == 'c'){
            printf("aguia\n");
        }else{
            printf("pomba\n");
        }
    }else{
        if(y[0] == 'm'){
            if(z[0] == 'o'){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }
}else{
    if(x[0] == 'i'){
        if(y[0] == 'i'){
            if(z[2] == 'm'){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(y[0] == 'a'){
                if(z[0] == 'h'){
                    printf("sanguessuga\n");
                }else{
                    printf("minhoca\n");
                }
            }
        }
    }
}


return 0;
}