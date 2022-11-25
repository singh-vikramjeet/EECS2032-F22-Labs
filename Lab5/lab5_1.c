#include <stdio.h>


int main()
{
    char str[100];
    int strlength;
    int diff = 0;
    int checkConsc = 0;
    int checkUpperCase = 0;
    int checkLowerCase = 0;
    scanf("%s", str);


    for(strlength = 0; str[strlength] != '\0'; ++strlength);


// To check for consecutive and not consecutive
    for(int i = 1; i < strlength; i++){
        // Condition to check for consecutive characters
        // s[i] - s[i-1] == 1
        diff = str[i] - str[i - 1];
        if (diff != 1){
            checkConsc = 1;
            break;
        }
    }

// To check for capital and Not capital
// If ASCII value between 65 to 90: All uppercase
// If ASCII value between 97 to 122: All Lowercase

for(int i = 0; i < strlength;i++){
    checkUpperCase = checkUpperCase || (str[i] >= 'A' && str[i] <= 'Z');
    checkLowerCase = checkLowerCase || (str[i] >= 'a' && str[i] <= 'z');
}
    if (checkConsc == 0 && checkLowerCase == 1){
        printf("Consecutive and all small letters\n");
    }
    else if (checkConsc == 0 && checkUpperCase == 1){
        printf("Consecutive and all capital letters\n");
    }
    else{
        printf("Not consecutive\n");
    }

    return 0;
}
