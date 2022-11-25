#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i,id,code;
    float salary;
    char name[50], address[50];
    char input[50];
    typedef struct {
        int ID;
        char name[50];
        char  address[50];
        int code;
        float salary;
    } PERSON;

    PERSON p;
    FILE *fp;
    fp=fopen("data1.txt", "w"); // open data.txt to write data in
    i=1;
    //read i then on a separate line an integer (ID), int (age) name 
    //woihout spaces, and a salary
    //if i is 0, it terminates
    fgets(input, 50, stdin);
    sscanf(input,"%d",&i);
    
    while(i) {
        fgets(input, 50, stdin);
        sscanf(input,"%d",&id); p.ID=id; 
        printf("I have read %d\n",id);
        fgets(name, 20, stdin);
        printf("I have read %s\n",name);
        name[strlen(name)-1]='\0';
        strcpy(p.name, name); 
        fgets(address, 50, stdin);
        printf("I have read %s\n",address);
        address[strlen(address)-1]='\0';
        strcpy(p.address, address);
        fgets(input, 50, stdin);
        sscanf(input,"%d",&code); p.code=code;
        printf("I have read %d\n",code);
        fgets(input, 50, stdin);
        sscanf(input,"%f",&salary); p.salary=salary; 
        printf("I have read %f\n",salary);
        printf("BEFORE WRITING TO THE FILE\n");
        printf("%d\n",p.ID);
        printf("%s\n",p.name);
        printf("%s\n",p.address);
        printf("%d\n",p.code);
        printf("%f\n",p.salary);
        printf("===================\n");

        int k =fwrite(&p, sizeof(p), 1, fp);
        printf("                    k=%d\n",k);
        fgets(input, 50, stdin);
        sscanf(input,"%d",&i);
        

    }
    fclose(fp);


}