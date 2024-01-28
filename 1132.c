#include<stdio.h>
int main(){

int x,y,thirteen=0;
scanf("%d%d", &x, &y);

if(x>y){
    for(int i=y; i<=x; i++){
    if(i%13!=0){
        thirteen+=i;
    }
}
}else if(y>x){
    for(int i=x; i<=y; i++){
    if(i%13!=0){
        thirteen+=i;
    }
}
}

printf("%d\n",thirteen);
    
return 0;
}