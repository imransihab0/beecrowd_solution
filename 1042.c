#include<stdio.h>
int main(){
    
    int a,b,c,temp;
    int v[3];
    scanf("%d%d%d",&a,&b,&c);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v[i] < v[j]){
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }

for(int k=0; k<3; k++){
    printf("%d\n",v[k]);
}
printf("\n%d\n%d\n%d\n",a,b,c);

return 0;
}