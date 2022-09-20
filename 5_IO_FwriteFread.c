/**
 * @file 5_IO_FwriteFread.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Write and read file using fwrite() and fread()
 * @version 0.1
 * @date 2022-09-20
 * @since TuesDay; 10:30 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma pack(1)

struct PhoneBook{
    char name[10];
    char address[25];
    char phoneNumber[12];
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    struct PhoneBook yousuf[4] = {"Yousuf", "1, Kansat-6341", "+880123451",
                                  "Ali", "2, Kansat-6341", "+880123452",
                                  "Tamim", "3, Kansat-6341", "+880123453",
                                  "Maruf", "4, Kansat-6341", "+880123454"};

    FILE *filePointer;
    filePointer = fopen("AllTxtFiles\\5_IO_FwriteFread.txt", "w");
    for(unsigned int i = 0; i<4; i++){
        fwrite(&yousuf[i], sizeof(yousuf[i]), 1, filePointer);
    }                             
    fclose(filePointer);
    filePointer = fopen("AllTxtFiles\\5_IO_FwriteFread.txt", "r");

    for(unsigned int i = 0; i<4; i++){
        fread(&yousuf[i], sizeof(yousuf[i]), 1, filePointer);
        printf("%-10s%-25s%-10s\n", yousuf->name, yousuf->address, yousuf->phoneNumber);
    }                             
    fclose(filePointer);
    return 0;
}
