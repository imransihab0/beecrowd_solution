#include<stdio.h>
int main(){

double input;
int j;
j = 0;
for(int i=1; i<=6; i++){
    scanf("%lf", &input);
    if(input>0){
        j++;
    }
}

printf("%d valores positivos\n",j);

return 0;
}