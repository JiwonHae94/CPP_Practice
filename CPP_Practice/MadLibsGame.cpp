//
//  MadLibsGame.cpp
//  CPP_Practice
//
//  Created by Jiwon_Hae on 2021/11/17.
//

#include "MadLibsGame.hpp"
using namespace std;



void play_game(){
    string color, pluralNoun, celebrity;
    
    cout << "enter a color : ";
    getline(cin, color);
    
    cout << "enter a plural noun : ";
    getline(cin, pluralNoun);
    
    cout << "enter a celebrity : ";
    getline(cin, celebrity);
    
    
    cout << "Roses are " << color << endl;
    cout << "Violets are " << pluralNoun << endl;
    cout << "I love you " << celebrity << endl;
}

int main(){
    play_game();
    return 0;
}

