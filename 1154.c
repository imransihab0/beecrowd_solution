#include<stdio.h>
int main(){
    double average;
    int age=0,many=0,ageAdd=0;
    while(1){
        many=many+1;
        scanf("%d",&age);
        if(age<0){
            break;
        }
        ageAdd+=age;   
    }
printf("%.2lf\n",(ageAdd/((many-1)*1.0)));


return 0;
}