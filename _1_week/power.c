#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_power(int a, int b){
    int result=1;
    for(int i=0; i<b; i++){
        result = result *a;
    }
    return result;
}

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = my_power(a, b);
    print("%d", result);

    return 0;
}