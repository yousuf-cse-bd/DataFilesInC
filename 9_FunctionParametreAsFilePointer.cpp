/**
 * @file 9_FunctionParametreAsFilePointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief File management using function with file pointer
 * @version 0.1
 * @date 2022-09-20
 * @since TuseDay; 08:11 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void getFileName(FILE *file){
    char ch[20];
    printf("Plesae, Enter some line of text:\n");

    for(unsigned int i = 1; i<=5; i++){
        gets(ch);
        fprintf(file, "%s\n", ch);
    }
    fclose(file);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FILE *file;
    file = fopen("AllTxtFiles\\9_FunctionParametreAsFilePointer.txt", "w");
    getFileName(file);
    fclose(file);
    return 0;
}
