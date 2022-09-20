/**
 * @file 8_MyMp3Tag.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of random access line from file
 * @version 0.1
 * @date 2022-09-20
 * @since TuesDay; 05:11 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char *tag = (char*) malloc(4);
    char *title = (char*) malloc(31);
    char *artist = (char*) malloc(31);
    char *album = (char*) malloc(31);
    char *year = (char*) malloc(5);
    char *comment = (char*) malloc(31);

    FILE *filePointer = fopen("AllTxtFiles\\1.mp3", "r");
    /*If no file opened succesfully*/
    if(filePointer == NULL){
        printf("File not found..!");
        return 0;
    }
    fclose(filePointer);
    /*Send file location as desired location using offset = 2*/
    fseek(filePointer, -128L, 2); // 2 == offset == EOF
    fgets(tag, 4, filePointer);
    printf("\nTAG1 = %s\n", tag);
    /*Check whether opened file is an ID3V1 standard mp3 file*/
    if(strcmp("TAG", tag) != 0){
        printf("Not an  ID3V1 standard mp3 file..!");
        fclose(filePointer);
        return 0;
    }

    /*Now read the data different fields*/
    fgets(title, 31, filePointer);
    fgets(artist, 31, filePointer);
    fgets(album, 31, filePointer);
    fgets(year, 5, filePointer);
    fgets(comment, 31, filePointer);
    

    printf("TAG: %s\n", tag);
    printf("TITLE: %s\n", title);
    printf("ARTIST: %s\n", artist);
    printf("ALBUM: %s\n", album);
    printf("YEAR: %s\n", year);
    printf("COMMENT: %s\n", comment);

    free(tag);
    free(title);
    free(artist);
    free(album);
    free(year);
    free(comment);

    getch();
    return 0;
}
