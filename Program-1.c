#include <stdio.h>
#include<string.h>

int main() {
    
    double a, b;
    char c[10];
    double sum;
    
    
    printf("enter number one ");
    scanf("%lf",&a);
    printf("enter the operator in words(add, subtract, multiply, divide): ");
    scanf(" %s",&c);
    printf("enter number two ");
    scanf("%lf",&b);
    
    
    if(strcmp(c, "add")==0){
        sum=a+b;
    }
    else if(strcmp(c, "subtract")==0) sum=a-b;
     else if(strcmp(c, "multiply")==0) sum=a*b;
     else if (strcmp(c, "divide")==0) sum=a/b;
     
     printf("result is %lf",sum);
     
    

    return 0;
}
