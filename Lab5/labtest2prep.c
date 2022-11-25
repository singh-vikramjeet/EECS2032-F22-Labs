#include <stdio.h>

int main() {
    printf("Lab Test 2 Preparation\n");

    // https://www.tutorialgateway.org/c-program-to-find-sum-of-each-row-in-a-matrix/

    // Circular shift of an array
    //https://www.studytonight.com/c-programs/c-program-to-circular-rotation-of-an-array-by-n-positions

    // Character Strings
    // If you write 9, this is treated as an Integer
    // If you write '9', this is treated as a character
    // Every String terminates with Null Character '\0'

    //char name[50] = {'H','E','L','L','O','\0'};
    //char name[50] = "Hello";
    //printf("%s", name);

    // To read a string that does not contain any spaces or tabs

    //char name[100];
    //scanf("%s", name);
    // The %s modifier in scanf stops reading input until
    // it encounters Space
    // Input is terminated when space is encountered
    //printf("The name is %s", name);
    // Remember that we don't use & with %s modifier in scanf

    // To read a string that contains whitespaces
    // The string terminates with newline character(or pressing enter button)

    //char name[100];
    //char ch;
    //int i = 0;

    // Read the input until newline character is encountered
//    while((ch = getchar()) != '\n'){
//        name[i] = ch;
//        i++;
//    }
//
//    printf("Entered String: %s\n", name);
//    printf("Length of string: %d", i);

// Another Alternative to read string with whitespaces
// is to use gets() function
//    char name[100];
//    gets(name);
//    printf("%s", name);

// Use of putchar() function to display strings
//    char name[50];
//    char ch;
//    int i = 0;
//    printf("Enter a string\n");
//    while((ch = getchar()) != '\n'){
//        name[i] = ch;
//        i++;
//    }
//
//    // Display the string with putchar
//    for(int i = 0; name[i]!='\0';i++){
//        putchar(name[i]);
//    }
//
//    // Display the string with printf
//    printf("\n%s", name);
//
//    // Find the length of the string entered
//    // and display it
//    int length;
//    for(length = 0; name[length] != 0;length++){}
//
//    printf("\nLength of the string is %d", length);

// Use of break keyword
    //for(int i = 0; i <= 5; i++){
    //   if(i == 3){
    // With continue, iteration 3 skipped and then
    // iteration 4 and 5 are executed
    //continue;
    // break
    // With break, at iteration 3, the execution stops completely
    // }
    // printf("%d\n",i);
    // }

    // Practic Lab Test 2 (2020)
//   // Part 3
//   char str[100];
//   char ch;
//   int i = 0;
//   while((ch = getchar()) != '\n'){
//       str[i] = ch;
//       i++;
//   }
    // Remove all tabs and white spaces

    // Length of the string
//   int len;
//   for(len = 0; str[len] != '\0'; ++len){}
//   printf("Length: %d\n", len);
    //printf("\n%s", str);

    // String without whitespaces
//   for(int j = 0; str[j] != '\0'; j++){
//       if(str[j] == ' '){
//           continue;
//       }
//       putchar(str[j]);
//   }

//// Storing string without white spaces
//    for (int j = 0; j < len ; ++j) {
//        if(str[j] == ' '){
//            for(int k = j; k < len;k++){
//                str[j] = str[j + 1];
//            }
//            len--;
//        }
//    }
//    printf("String without whitespaces:\n");
//    printf("%s", str);

// Part 4 Question
// Read three floating point numbers from input
// f1, f2 and delta

//    float f1, f2, delta;
//    scanf("%f %f %f", &f1, &f2, &delta);
//    //printf("%.3f\n%.3f\n%.3f\n", f1, f2, delta);
//
//    if((f1 - f2) <= delta){
//        printf("%f equals %f\n", f1, f2);
//    }
//    else if((f1 - f2) >= delta){
//        printf("%f is not equal to %f", f1, f2);
//    }

// Fall 2021 Lab test
// Problem 1
// Read an integer n, then read a seq of n integers
// Display number of positive to negative changes in the sequence
////
//    int num;
//    int count = 0;
//    scanf("%d", &num);
//
//    int seq[100];
//    for(int i = 0; i < num; i++){
//        scanf("%d", &seq[i]);
//    }
//
//    for(int i = 0; i < num; i++){
//        if(seq[i] > seq[i + 1] && seq[i] > 0){
//            count++;
//        }
//    }
//    printf("%d\n", count);

// Reading a string using %c modifier in scanf
//    char str[50];
//    char ch;
//    int i = 0;
//   while(ch != '\n' ){
//       scanf("%c", &ch);
//       str[i] = ch;
//       i++;
//   }
//   puts(str);
//    printf("%s", str);

// Problem 4
// Read an integer n
// Read n strings on the same line,
// separated by spaces
    //int num;
    //scanf("%d\n", &num);
    // 2D arrays
    // arrayName [rowSize][ColumnSize]

    // n strings is n rows
    // 20 characters is columns
//    char strings[num][20];
//
//    for(int i = 0; i < num; i++){
//        for(int j = 0; j < 20; j++){
//            scanf("%s", &strings[i][j]);
//        }
//    }
//
//    for(int i = 0; i < num; i++){
//        for(int j = 0; j < 20; j++){
//            printf("%s", strings[i][j]);
//        }
//    }

    // Read a matrix with r rows and c columns
//    int r = 0; //rows
//    int c = 0; // columns
//
//    scanf("%d %d", &r, &c);
//
//    int matrix[r][c];
//
//    for(int i = 0; i < r; i++){
//        for(int j = 0; j < c;j++){
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//    // Displaying the elements of matrix
//    for(int i = 0; i < r; i++){
//        for(int j = 0; j < c; j++){
//            printf("%5d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    int r = 0; //rows
//    int c = 0; // columns
//
//    scanf("%d %d", &r, &c);
//
//    int matrix[r][c];
//
//    for(int i = 0; i < r; i++){
//        for(int j = 0; j < c;j++){
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//    int sum = 0;
//    // Displaying the elements of matrix
//    for(int i = 0; i < r; i++){
//        //sum = 0;
//        for(int j = 0; j < c; j++){
//            // Display the row with maximum sum
//            if(i == j) {
//                sum = sum + matrix[i][j];
//            }
//            //printf("%5d", matrix[i][j]);
//            //printf("\n%d", sum);
//        }
//       // printf("\n");
//    }
//
//    printf("Sum of Diagnol elements: %d\n", sum);
//
//    return 0;
//}
    int r = 0; //rows
    int c = 0; // columns
    int Sum;

    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int copyMatrix[r][c];
    int thirdMatrix[r][c];

    printf("Enter first matrix\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
//    // Sum of each row and Column of matrix
//    for(int rows = 0; rows < r; rows++){
//        Sum = 0;
//        for(int columns = 0; columns < c; columns++){
//            Sum = Sum + matrix[rows][columns];
//        }
//        printf("\n Sum of Rows = %d ", Sum);
//    }
//
//    for(int rows = 0; rows < r; rows++){
//        Sum = 0;
//        for(int columns = 0; columns < c; columns++){
//            Sum = Sum + matrix[columns][rows];
//        }
//        printf("\n Sum of columns = %d ", Sum);
//    }

// Transpose of matrix
//    for(int rows = 0; rows < r; rows++){
//        for(int columns = 0; columns < c; columns++){
//            copyMatrix[columns][rows] = matrix[rows][columns];
//        }
//    }
//    printf("Transpose of matrix is:\n");
//    for(int rows = 0; rows < r; rows++)
//    {
//        for(int columns = 0; columns < c; columns++){
//            printf("%5d", copyMatrix[rows][columns]);
//        }
//        printf("\n");
//    }
    printf("Enter second matrix: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &copyMatrix[i][j]);
        }
    }

    //Adding two matrices
    for(int rows = 0; rows < r; rows++){
        for(int columns = 0; columns < c; columns++){
            thirdMatrix[rows][columns] = matrix[rows][columns] + copyMatrix[rows][columns];
        }
    }

    // Displaying the result
    for(int i = 0; i < r; i++){
        for (int j =0; j < c; j++){
            printf("%5d", thirdMatrix[i][j]);
        }
        printf("\n");
    }

    // Condition to check for Identity Matrix
    /*
     * Identity Matrix is
     *  1 0 0
     *  0 1 0
     *  0 0 1
     *
     *  Inside the inner for loop of columns check for this
     *
     *  if(a[rows][columns] != 1 && a[columns][rows] != 0)
     *  if the condition above is true, then matrix is not an identity matrix
     */

    /*
     * Condition for Lower Triangle, Diagnol elements and Upper triangle
     * Lower Triangle: i > j (Rows > Columns)
     * Upper Triangle: i < j (Rows < Columns)
     * Diagonal Elements: i == j (Rows == Columns)
     */

    /*
     * Insert an element at n postion in an array
     * Get the element to be inserted, say x
     * Get the position at which element is inserted
     * Shift the array elements from this position to one position
     * towards right and do this for all other elements
     * Insert the element x now at this postion x
     *
     * for (arrLength - 1; i >= pos; i--){
     *      arr[i] = arr[i - 1];
     * }
     *
     * arr[pos - 1] = x
     *
     * Print the updated array
     *
     * Deleting an element in an array
     * for(i = pos - 1; i < arrlength - 1; i++){
     *      arr[i] = arr[i + 1]
     */





}