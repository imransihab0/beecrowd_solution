#include <stdio.h>

int main() {
    int X;

    while(1){
        int last=0;
        scanf("%d",&X);
        if(X==0){
        break;
        }else{
for(int i = 1 ; i <= X-1 ; i++){
    
        printf("%d " ,i);
        last+=1;
    
}
printf("%d\n",last+1);

    }
    }
    return 0;
}
