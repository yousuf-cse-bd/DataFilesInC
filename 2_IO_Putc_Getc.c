/**
 * @file 2_IO_Putc_Getc.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Write and read file using putc() and getc()
 * @version 0.1
 * @date 2022-09-19
 * @since MonDay; 05:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FILE *inData;
    char ch;
    /*Open the file 2_IO_Putc_Getc.txt*/
    inData = fopen("AllTxtFiles\\2_IO_Putc_Getc.txt", "w");
    printf("A data file is open for you.\n");
    printf("Write something and CTRL+Z at end.\n");
    /*Get character from the user until CTRL+Z pressed*/
    /*ch = getchar() not support here*/
    while(scanf("%c", &ch) != EOF){
        /*Write the character to the 2_IO_Putc_Getc.txt*/
        putc(ch, inData);
    }
    fclose(inData);  

    inData = fopen("AllTxtFiles\\2_IO_Putc_Getc.txt", "r");
    if(inData == NULL){
        printf("Error: File does not exist..!\n");
    }else{
        /*Read character until EOF found*/
        /*ch = getc(inData) not support properly*/
        while(fscanf(inData, "%c", &ch) != EOF){
            printf("%c", ch);
        }
    }
    fclose(inData);
    getche();
    return 0;
}
