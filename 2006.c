#include <stdio.h>

int main() {
    int n, x, sum = 0;
    scanf("%d",&n);

    for(int i=0; i<5; i++){
    scanf("%d",&x);
    if(x==n){
        sum++;
    }
    }
printf("%d\n",sum);

    return 0;
}
