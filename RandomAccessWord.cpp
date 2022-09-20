/**
 * @file RandomAccessWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic file read system using fseek()
 * @version 0.1
 * @date 2022-09-20
 * @since TuesDay; 07:09 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char *word;
    FILE *filePointer;
    filePointer = fopen("AllTxtFiles\\Simple.txt", "r");
    if(filePointer == nullptr){
        cout<<"The file is found...!"<<endl;
        return 0;
    }
    
    /*Dynamic read the file statement*/
    fseek(filePointer, -100, 2);
    fgets(word, 10, filePointer);
    cout<<"The Word: "<<word<<endl;

    fclose(filePointer);
    return 0;
}
