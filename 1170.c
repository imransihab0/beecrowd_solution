#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int count=0;
        double x;
        scanf("%lf", &x);
        while(x>1.0){
            x/=2;
            count++;
        }
        printf("%d dias\n",count);
    }
    
return 0;
}