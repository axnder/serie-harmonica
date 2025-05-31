#include <stdio.h>

float serieharmonica (int num){
    float hn = 0.0;

    for(int i = 1; i <= num; i++){
        hn += 1.0 / i;
    }

    return hn;
}

int main(){
    int num;
    printf("entre com um numero: ");
    scanf("%d", &num);
    if(num > 0){
        printf("o resultado da serie harmonica: %.4f", serieharmonica(num));
    } else{
        printf("o numero precisa ser positivo");
    }
    
    return 0;
}