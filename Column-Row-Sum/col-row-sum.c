#include <stdio.h>

int main() {
    int arr[5][5] = {{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int rowsum=0,colsum=0;

    printf("The row sum is: \n");

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            rowsum=rowsum+arr[i][j];
        }
        printf("%d ",rowsum);
        rowsum=0;
    }

    printf("\nThe column sum is: \n");

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            colsum = colsum + arr[j][i];
        }
        printf("%d ",colsum);
        colsum=0;
    }
    return 0;
}

