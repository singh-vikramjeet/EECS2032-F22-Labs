#include <stdio.h>
#include <stdlib.h>

struct employee {
    int Employee_ID;
    char name[20]; // Employee first name and then last name
    char address[50];
    int job_code;
    float salary;

};

int main(int argc, char *argv[])
{
    FILE * outfile;
    int count = 0;

    // open file for writing
    outfile = fopen("newdata1.txt", "wb");
    if(outfile == NULL)
    {
        fprintf(stdout, "\nError in opening the file\n");
        exit(1);
    }

    // struct employee input1 = {123456, "John Smith", "70 main St. Toronto, ON M3M 3M3",9, 73123.45};
    // struct employee input2 = {2189342, "Jos Buttler", "81 McQueen Drive Brampton, ON L6P 19N", 4, 85452.678};
    // struct employee input3 = {4567891, "Glen Maxwell", "56 Northfield Drive Waterloo, ON N2P 2B5",8,90500.3267};

    // Add new data to create new data1.txt file
    struct employee input1 = {123456,"John Doe","123 main st.",8,1000.000000};
    struct employee input2 = {4444, "Jane Doe", "78 Keele St.",9,2000.000000};

    
    // write struct to file
    count = fwrite(&input1, sizeof(struct employee),1, outfile);
    fwrite(&input2, sizeof(struct employee),1, outfile);
    //fwrite(&input2, sizeof(struct employee),1, outfile);

    if(count != 0){
        printf("\nContents to the file are successfully written\n");
    }
    else{
        printf("Error in writing to file!\n");
    }

    // close file
    fclose(outfile);


    return 0;
}