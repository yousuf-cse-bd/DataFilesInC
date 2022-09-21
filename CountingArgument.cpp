/**
 * @file CountingArgument.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Showing command line arguments
 * @version 0.1
 * @date 2022-09-21
 * @since WednesDay; 07:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Argument: "<<argc<<endl;
    for(register unsigned int n = 0; n < argc; n++){
        cout<<"Argv["<<n<<"] = point to. "<<argv[n]<<endl;
    }
    return 0;
}
