/**
 * @file CommandLineArgBeep.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Make beep sound using command line argument
 * @version 0.1
 * @date 2022-09-21
 * @since WednesDay; 08:14 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*ASCII to int*/
    int count = atoi(argv[1]);
    for(register unsigned int  i = 0; i<count; i++){
        Beep(700, 900);
    }
    return 0;
}
