//to print factorial of a number//
#include<stdio.h>
int f(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, f(n));
    return 0;
}
int f(int n){
    if(n!=1){
        int i=1, f=1;
        for(i;i<=n;i++){
            f*=i;
        }
        return f;
    }
    else
    {
        return 1;
    }
}

