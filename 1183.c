#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    double m[12][12], sum=0.0;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    int o=1;
    for(int i=0; i<12; i++){
        for(int j=o; j<12; j++){
            sum+=m[i][j];
        }
        o++;
    }
    if(ch == 'S'){
        printf("%.1lf\n", sum);
    }else if(ch == 'M'){
        printf("%.1lf\n", sum/66.0);
    }

return 0;
}