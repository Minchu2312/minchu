#include <stdio.h>

int main() {
    int a, odd = 1;

    
    printf("Enter an integer (a): ");
    scanf("%d", &a);

  if(a%2==0) a=a-1;
  
    for (int i = 0; i < a; i++) {
        printf("%d", odd); 
        odd = odd+ 2;           
        if (i < a - 1) {
            printf(", ");   
        }
    }

    printf("\n");
    return 0;
}
