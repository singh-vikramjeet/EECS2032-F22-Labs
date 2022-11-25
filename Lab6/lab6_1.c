#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int Employee_ID;
    char name[50]; // Employee first name and then last name
    char address[50];
    int job_code;
    float salary;
};

int main(int argc, char *argv[])
{
    FILE * fptr; // Declare a file pointer
    // Array of structs to store the employee records
    struct employee arrOfEmployees[50];
    // Count the number of records
    int records = 0;
    
    // Open the file for reading
    fptr = fopen("data1.txt", "r");
    if(fptr == NULL){
        fprintf(stdout, "\nError opening the file\n");
        exit(1);
    }

    // Read file contents till end of file
    while(fread(&arrOfEmployees[records],sizeof(struct employee),1,fptr)){
        //printf("ID = %d Name = %s Address = %s Job Code = %d salary = %f\n", arrOfEmployees[records].Employee_ID,
        //arrOfEmployees[records].name, arrOfEmployees[records].address, arrOfEmployees[records].job_code, arrOfEmployees[records].salary);
        records++;

    }
    // close file
    fclose(fptr);

// Printf statements to print the record
    // printf("\nRecords Count: %d\n", records);
    // printf("Employee ID: %d\n", arrOfEmployees[0].Employee_ID);
    // printf("Name: %s\n", arrOfEmployees[0].name);
    // printf("Address: %s\n", arrOfEmployees[0].address);
    // printf("Job code: %d\n", arrOfEmployees[0].job_code);
    // printf("Salary: %.2f\n", arrOfEmployees[0].salary);

    // Check the command line arguments
    if((strcmp(argv[1],"-ID") == 0)){
        char id[50];
        int index = 0;
        int flag = 0;
        for(int i = 0; i < records; i++){
            
            sprintf(id,"%d",arrOfEmployees[i].Employee_ID);

            if((strcmp(argv[2], id) == 0)){
                //printf("%s\n",arrOfEmployees[i].name);
                index = i;
                flag = 1;
                break;
            }      
        }
        if(flag == 1){
            printf("%s\n",arrOfEmployees[index].name);
        }
        else{
            printf("No such employee\n");
        }
    }
    else if((strcmp(argv[1],"-s") == 0)){
        // Display employees with salary equal to or greater than argv[2]
        float salary = atof(argv[2]);
        for(int i = 0; i < records; i++){
            if(arrOfEmployees[i].salary >= salary){
                printf("%s, %f\n", arrOfEmployees[i].name, arrOfEmployees[i].salary);
            }
        }

    }
    else if((strcmp(argv[1],"-count") == 0)){
        // Print the number of employees in the file
        printf("%d\n", records);
    }
    else if((strcmp(argv[1],"-name") == 0)){
        // Display the salary of employees if
        // argv[2] matches employee name
        int index = 0;
        int flag = 0;

        for(int i = 0; i < records; i++){
            if((strcmp(argv[2], arrOfEmployees[i].name) == 0)){
                //printf("%.2f\n", arrOfEmployees[i].salary);
                index = i;
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            printf("%.2f\n", arrOfEmployees[index].salary);
        }
        else{
            printf("No such employee\n");
        }
    }
    



    return 0;
}