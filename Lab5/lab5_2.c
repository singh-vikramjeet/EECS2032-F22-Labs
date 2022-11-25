#include <stdio.h>

int main() {
    int n = 0;// n rows
    int m = 0;// m columns

    // Read n and m on the same line
    scanf("%d %d", &n, &m); // rows columns

    // Read a matrix A with n rows and m columns
    int A[n][m];

    // Reading the elements of matrix
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    // Displaying the elements of matrix

    for(int i = 0; i < n; ++i){
        // Display only rows where all elements are non-descending
        for (int j = 0; j < m; ++j)
        {
            if(A[i][j] > A[i][j + 1]){
                break;
            }
                printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
