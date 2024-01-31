#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    char ch;
    scanf(" %c", &ch);

    double M[12][12], sum=0.0;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    if(ch == 'S'){
        for(int i=0; i<12; i++){
            sum += M[i][n];
        }
        printf("%.1lf\n", sum);
    }else if(ch == 'M'){
        for(int i=0; i<12; i++){
            sum += M[i][n];
        }
        printf("%.1lf\n", sum/12);
    }
    
return 0;
}