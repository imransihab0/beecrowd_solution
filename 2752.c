#include<stdio.h>
int main(){

char character[50] = "AMO FAZER EXERCICIO NO URI";
printf("<%s>\n",character);
printf("<%30s>\n",character);
printf("<%.20s>\n",character);
printf("<%-20s>\n",character);
printf("<%-30s>\n",character);
printf("<%.30s>\n",character);
printf("<%30.20s>\n",character);
printf("<%-30.20s>\n",character);

return 0;
}