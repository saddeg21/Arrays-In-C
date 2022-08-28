#include <stdio.h>

int main() {
    //LENGTH OF MATRIXS COLUMNS AND ROWS
    int arow,acol,sum=0;
    printf("Length of rows of first array: ");
    scanf("%d",&arow);
    printf("Length of columns of first array: ");
    scanf("%d",&acol);

    int matrixA[arow][acol];

    int brow,bcol;
    printf("Length of rows of first array: ");
    scanf("%d",&brow);
    printf("Length of columns of first array: ");
    scanf("%d",&bcol);

    int matrixB[brow][bcol];

    //GET THE VALUES OF MATRIX
    printf("Provide values to fill Matrix A:\n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            printf("Index row: %d column: %d --> ",i,j);
            scanf("%d ",&matrixA[i][j]);
        }
    }


    printf("Provide values to fill Matrix B:\n");
    for(int i=0;i<brow;i++){
        for(int j=0;j<bcol;j++){
            printf("Index row: %d column: %d --> ",i,j);
            scanf("%d ",&matrixB[i][j]);
        }
    }

    //Check whether multiplication can be done or not
    if(acol!=brow) {
        printf("Sorry but these matrixes cannot be multiplied.");
    }else{

    //Multiply Matrixes
    int productMatrix[arow][bcol];

    for(int i = 0; i<arow;i++){
        for(int j=0;j<bcol;j++) {
            for(int k=0;k<acol;k++) {
                    sum += matrixA[i][k] * matrixB[k][j];
            }
            productMatrix[i][j] = sum;
            sum=0;
        }
    }


    //PRINT THE PRODUCT MATRIX
    printf("\nThe result is :\n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            printf("%d ",productMatrix[i][j]);
        }
        printf("\n");
    }
        }

}
