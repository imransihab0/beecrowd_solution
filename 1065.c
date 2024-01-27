#include<stdio.h>
int main(){

int num,input;
int j;
j = 0;
for(int i=1; i<=5; i++){
    scanf("%d", &input);
    if(input%2 == 0){
        j++;
    }
}

printf("%d valores pares\n",j);

return 0;
}