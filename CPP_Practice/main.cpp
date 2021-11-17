//
//  main.cpp
//  CPP_Practice
//
//  Created by Jiwon_Hae on 2021/11/17.
//

#include <iostream>
#include <cmath>

using namespace std;


void show_types(){
    char cha = 'c';
    string str = "string";
    int integer = 1;
    float flo = 1.0f;
    double dou = 1.00000000f;
    
    
    int age;
    cout << "Enter your age : " << endl;
    
    // cin : single input
    // getline : get a line of information getline(cin, variableName)
    cin >> age;
    
    cout << age << endl;
}


int main(int argc, const char * argv[]) {
    
    string characterName = "John";
    int age = 10;
    
    cout << "My name is " << characterName << endl;
    cout << "I am " << age << " years old" << endl;
    
    show_types();
    
    return 0;
}



