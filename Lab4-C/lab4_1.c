#include <stdio.h>

// Read one integer(M) followed by two integers (i, j)
// Display the ith through the jth digits of M
// Input   =      1298567 1 4
// Digit number = 6543210
// Display digits 1 through 4
// Output = 9856
int main()
{
    int M;
    int i;
    int j;
    int num = 1;
    int y;
    int count = 0;

    scanf("%d %d %d", &M, &i, &j);


    // Divide integer M by 10^i
    // This eliminates part of M which is on Right Hand Side of i
    for(int a = 0; a < i;a++){
        M = M / 10;
        count++;
    }

    // Do M % 10^j
    // This eliminates part of M which is on Left Hand Side of i
    y = j - (count - 1);

    for(int z = 0; z < y; z++){
        num = num * 10;
    }
    M = M % num;// Final Number
    
    // Display the final number
    printf("%d\n", M);

}
