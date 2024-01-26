#include<stdio.h>
int main(){

float n1,n2,n3,n4,average;
scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
average = (n1*2 + n2*3 + n3*4 + n4)/(2+3+4+1);
printf("Media: %.1f\n",average);
if(average>=7.0){
    printf("Aluno aprovado.\n");
}else if(average<5.0){
    printf("Aluno reprovado.\n");
}else if(average>=5.0 && average<=6.9){
    printf("Aluno em exame.\n");
    float one_more,new_average;
    scanf("%f",&one_more);
    printf("Nota do exame: %.1f\n",one_more);

new_average = (average+one_more)/2;
if(new_average>=5.0){
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n",new_average);
}else if(new_average<=4.9){
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n",new_average);

}

}

return 0;
}