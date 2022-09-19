/**
 * @file 3_IO_Fputs_Fgets.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Write and read file using fputs() and fgets()
 * @version 0.1
 * @date 2022-09-19
 * @since MonDay; 10:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char *getLine;
    FILE *filePointer;
    /*Create 3_IO_Fputs_Fgets.txt file*/
    filePointer = fopen("AllTxtFiles\\3_IO_Fputs_Fgets.txt", "w");
    /*Writing string in 3_IO_Fputs_Fgets.txt*/
    fputs("home computing group\n", filePointer);
    fclose(filePointer);

    /*Opne the 3_IO_Fputs_Fgets.txt file*/
    filePointer = fopen("AllTxtFiles\\3_IO_Fputs_Fgets.txt", "r");
    if(filePointer == NULL){
        printf("File not found!\n");
    }else{
        fgets(getLine, 10, filePointer);
        printf("%s\n", getLine);
    }
    fclose(filePointer);
    getch();

    return 0;
}
