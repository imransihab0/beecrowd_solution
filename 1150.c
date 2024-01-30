#include<stdio.h>
int main(){
    
    int x,z,num=0,res=0;
    scanf("%d",&x);
    while (1)
    {
        scanf("%d",&z);
        if(x<z){
            break;
        }
    }
    
    for(int i=x; i<=z; i++){
        num+=i;
        res++;
        if(num>z){
            break;
        }
    }

    printf("%d\n",res);
    
return 0;
}