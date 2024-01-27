#include<stdio.h>
int main(){
    char charachter;
    charachter = getchar();
    int i,k;
    for(i=0, k=65; i<26; i++,k++){
        if(charachter == k){
            break;
        }
    }
    printf("%d\n",++i);

return 0;
}