//to print thee sum of nthe series//
#include<stdio.h>
float equation(int n);
int factorial(int i);
int main(){
        int n, fact;
        printf("Enter value of n : ");
        scanf("%d", &n);
        equation(n);
        return 0;
}
int factorial(int num){
    if(num!=1){
        int i=1, fact=1;
        for(i;i<=num;i++){
            fact*=i;
        }
        return fact;
    }
    else{
        return 1;
    }
}

float equation(int n){
        float result=1.0;
        int i;
        for(i=1;i<n;i++){
                result+=(1.0/factorial(i+1));
        }
        //return result;
        printf("Result : %.2f \n", result);
}

