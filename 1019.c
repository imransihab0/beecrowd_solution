#include<stdio.h>
int main(){

int N,hour,minute,second;
scanf("%d", &N);
hour = N/3600;
minute = (N%3600)/60;
second = N - ( (hour*3600) + (minute*60) );

printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}