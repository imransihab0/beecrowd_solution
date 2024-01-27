#include<stdio.h>
int main(){

double input,average,num;
int j;
j = 0;
num = 0;
for(int i=1; i<=6; i++){
    scanf("%lf", &input);
    if(input>0){
        j++;
        num = num + input;
    }
}

average = num/j;

printf("%d valores positivos\n%.1lf\n",j,average);

return 0;
}