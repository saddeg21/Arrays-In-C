#include <stdio.h>

int main() {
    int seen[10] = {0};
    int rem;
    printf("Enter a value to be checked whether there are repeated number:\n");
    scanf("%d",&num);


    while(num!=0){
        rem = num%10;
        if(seen[rem] == 1) {
            break;
        }
        seen[rem] = 1;
        num=num/10;
    }

    if(num==0) {
        printf("False");
    }else {
        printf("True");
    }


    return 0;
}

