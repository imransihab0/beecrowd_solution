#include<stdio.h>
int main(){

int x,y;
scanf("%d%d",&x,&y);

if(x==y){
    printf("%d\n",x);
}else if(x>y){
    printf("%d\n",x);
}else if(y>x){
    printf("%d\n",y);
}

return 0;
}