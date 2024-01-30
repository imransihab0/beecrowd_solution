#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int x,y,sum=0;
        scanf("%d%d",&x, &y);

        if(x%2==0){
            x=x+1;
            for(int j=0; j<y; j++){
                sum +=x;
                x += 2;
            }
        }else if(x%2==1){
            for(int k=0; k<y; k++){
                sum += x;
                x += 2;
            }
        }
        printf("%d\n", sum);
    }
return 0;
}