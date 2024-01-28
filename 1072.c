#include<stdio.h>
int main(){
    int n,x,in,out;
    scanf("%d",&n);
    in = out = 0;

    for(int i=0; i<n; i++){
        scanf("%d",&x);
        if(x>=10 && x<=20){
            in++;
        }else{
            out++;
        }
    }

printf("%d in\n%d out\n",in,out);


return 0;
}