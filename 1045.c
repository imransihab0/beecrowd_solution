#include <stdio.h>

int main() {
    double arr[3],a,b,c;
    
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

a=arr[2];
b=arr[1];
c=arr[0];

    if( a >= (b+c) ){
        printf("NAO FORMA TRIANGULO\n");
    } 
     else if( (a*a) > ( (b*b)+(c*c) ) ){
        printf("TRIANGULO OBTUSANGULO\n");
    }
     if( (a*a) == ( (b*b)+(c*c) ) ){
        printf("TRIANGULO RETANGULO\n");
    }
     if( (a*a) < ( (b*b)+(c*c) ) ){
        printf("TRIANGULO ACUTANGULO\n");
    }
     if( a == b && b == c ){
        printf("TRIANGULO EQUILATERO\n");
    }
     if( (a == b && c != a) || (b == c && a != b) || (c == a && b != a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
