#include<stdio.h>
int main(){

int x;
scanf("%d",&x);

for(int i=1; i<=x; i++){
    if(i%2 == 0){
continue;
    }
    printf("%d\n",i);
}

}