#include<stdio.h>
#include<math.h>
int main(){

int n,res;
scanf("%d",&n);

for(int i=2; i<=n; i++){
    if(i%2==0){
        printf("%d^2 = %d\n",i,i*i);
    }
}

return 0;
}