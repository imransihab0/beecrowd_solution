#include<stdio.h>
#include<math.h>
int main(){

int n,res;
scanf("%d",&n);

for(int i=0; i<n; i++){
    scanf("%d",&res);
    if(res == 0){
        printf("NULL\n");
    }else if(res%2==0 && res>0){
        printf("EVEN POSITIVE\n");
    }else if(res%2==1 && res>0){
        printf("ODD POSITIVE\n");
    }else if(res%2==0 && res<0){
        printf("EVEN NEGATIVE\n");
    }else if(res%2==-1 && res<0){
        printf("ODD NEGATIVE\n");
    }
}

return 0;
}