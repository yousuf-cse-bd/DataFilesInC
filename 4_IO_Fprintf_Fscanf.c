/**
 * @file 4_IO_Fprintf_Fscanf.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Write and read file using fprintf() and fscanf()
 * @version 0.1
 * @date 2022-09-20
 * @since TuesDay; 09:13 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Variable for writing to file*/
    char *names[] = {"Israt" ,"Sumaiya", "Sumon", "Yousuf", "Mustafiz", "Fatima", "AlMurshid"};
    char *IDs[] = {"171311098", "171311099", "171311100", "171311101", "171311103","171311104", "171311105"};
    float cgpa[] = {2.75, 3.10, 3.00, 3.35, 3.25, 3.75, 3.50};
    unsigned short int size = sizeof(names) / sizeof(names[0]);
    
    FILE *filePointer;
    filePointer = fopen("AllTxtFiles\\4_IO_Fprintf_Fscanf.txt", "w");
    for(unsigned int i = 0; i<size; i++){
        fprintf(filePointer, "%-10s%-10s%lf\n", *(names+i), *(IDs+i), *(cgpa+i));
    }
    fclose(filePointer);

    /*Variable for reading from file*/
    char *getName;
    char *getID;
    float getCGPA;

    filePointer = fopen("AllTxtFiles\\4_IO_Fprintf_Fscanf.txt", "r");
    if(filePointer == NULL){
        printf("The file not found...!\n");
    }else{
        printf("Names\t\tID\tCGPA\n");
        while(fscanf(filePointer, "%s %s %lf", getName, getID, &getCGPA) != EOF){
            printf("%-10s %-10s %1.2lf\n", getName, getID, getCGPA);
        }
    }
    fclose(filePointer);
    getche();
    return 0;
}
