/**
 * @file FwriteFread.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief fwrite() and fread() two function
 * @version 0.1
 * @date 2022-09-21
 * @since WednesDay; 10:36 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <conio.h>
using namespace std;
#pragma pack(1)

struct FwriteFread{
    /* data */
    char name[20];
    char phone[12];
    char address[15];
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FILE *filePointer;
    filePointer = fopen("Test.txt", "w");
    short int testCase = 2;
    FwriteFread person[testCase];

    for(unsigned short int i = 0; i < testCase; i++){
        printf("Enter your name here: ");
        scanf("%[^\n]", person[i].name);
        getchar();
        printf("Enter your phone number here: ");
        scanf("%s", person[i].phone);
        getchar();
        printf("Enter your address here: ");
        scanf("%[^\n]", person[i].address);
        getchar();

        fwrite(&*(person+i), sizeof(*(person+i)), 1, filePointer);
    }
    fclose(filePointer);
    // for(unsigned short int i = 0; i < testCase; i++){
    //     printf("Your Name: %s\n", person[i].name);
    //     printf("Your Phone Number: %s\n", person[i].phone);
    //     printf("Your Address: %s\n", person[i].address);
    // }
    filePointer = fopen("Test.txt", "r");
    if(filePointer == NULL){
        printf("File not found...!\n");
        return 0;
    }
    for(unsigned int i = 0; i < testCase; i++){
        fwrite(&*(person+i), sizeof(*(person+i)), 1, filePointer);
        printf("\nFrom File:\n");
        printf("Your Name: %s\n", person[i].name);
        printf("Your Phone Number: %s\n", person[i].phone);
        printf("Your Address: %s\n", person[i].address);
    }
    getche();
    return 0;
}

