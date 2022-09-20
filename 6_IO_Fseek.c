/**
 * @file 6_IO_Fseek.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Random access line from file
 * @version 0.1
 * @date 2022-09-20
 * @since TuesDay; 04:26 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FILE *filePointer;
    filePointer = fopen("AllTxtFiles\\6_IO_Fseek.txt", "w");
    fputs("niton computing group",filePointer);
    fclose(filePointer);

    filePointer = fopen("AllTxtFiles\\6_IO_Fseek.txt", "r");
    if(filePointer == NULL){
        printf("File not found...!\n");
    }
    else{
        /*fseek(filePointer, character position, offset)
        offset, 0 = first char of line of file
        offset, 1 = current pointer position
        offset, 2 = end of file and EOF considered by OS*/
        fseek(filePointer, 3L, 0);
        putchar(getc(filePointer)); // print-> o
        // puts("\n");
        fseek(filePointer, 8L, 0); 
        putchar(getc(filePointer));//print->m

        fseek(filePointer, 2L, 1);
        putchar(getc(filePointer));//print->t

        fseek(filePointer, -8L, 1);
        putchar(getc(filePointer));//print->n

        fseek(filePointer, -8L, 2);
        putchar(getc(filePointer));//print->n
    }
    fclose(filePointer);
    getch();
    return 0;
}
