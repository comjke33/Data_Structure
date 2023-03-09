#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n){
    int result=1;
    for(int i=1; i<=n; i++){
        result = result *i;
    }
    return result;
}

int main(){
    int n, result; 
    scanf("%d", &n);
    result = factorial(n);
    print("%d", result);
}