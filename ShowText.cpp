/**
 * @file ShowText.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Show text file using command line argument
 * @version 0.1
 * @date 2022-09-21
 * @since WednesDay; 08:29 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
    FILE *filePointer;
    char line[255];
    filePointer = fopen(argv[1], "r");
    if(filePointer == nullptr){
        cout<<"Error opening "<<argv[1]<<endl;
    }else{
        /*Read and display eachi line of the file*/
        while(fgets(line, sizeof(line), filePointer)){
            fputs(line, stdout);
        }
    }
    fclose(filePointer);
    return 0;
}
