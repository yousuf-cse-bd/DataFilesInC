/**
 * @file 1_CreateFile.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief DataFile: Create a file and check existing or not
 * @version 0.1
 * @date 2022-09-19
 * @since MonDay; 12:01 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*FILE is a typedef structure*/
    FILE *filePtr;

    filePtr = fopen("AllTxtFiles\\1_CreateFile.txt", "w");
    cout<<"A new file is created by named 1_CreateFile.txt"<<endl; 

    filePtr = fopen("AllTxtFiles\\1_CreateFile.txt", "r");
    if(filePtr == nullptr){
        cout<<"Error: File does not exist..!"<<endl;
    }else{
        cout<<"The file succesfully fnound..."<<endl;
    }

    fclose(filePtr);
    getch();
    return 0;
}
