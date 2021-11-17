//
//  main.cpp
//  CPP_Practice
//
//  Created by Jiwon_Hae on 2021/11/17.
//

#include <iostream>
#include <vector>
#include <cmath>
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


void playArray(){
    int nums[] = {4, 8, 15, 10, 20, 30};

    for (int i = 0; i < 6 ; i++) {
        cout << nums[i] << endl;
    }
}

void controlStatement(){
    int size = 6;
    
    int nums[] = {4, 8, 15, 10, 20, 30};
    
    if (size % 2 == 0) {
        for (int i = 0; i < sizeof(nums) ; i+=2) {
            cout << nums[i] << endl;
        }
    }else{
        for (int i = 0; i < sizeof(nums)  ; i++) {
            cout << nums[i] << endl;
        }
    }
}

int getArraySize(vector<int> arr){
    return sizeof arr / sizeof arr[0];
}

string repeat(string var1, int count){
    string out;
    
    for(int i = 0; i < count; i++){
        out += var1;
    }
    return out;
}

void printPyramid(int size){
    // 1, 3, 5, 7, 9
    int arr[size * 2 - 1];
    arr[0] = 1;
    int multiple = 1;
    
    for(int i = 1 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        if(i > size-1){
            multiple = -1;
        }
        
        arr[i] = arr[i-1] + 2 * multiple;
    }
    
    int numMax = arr[size-1];
    
    for(int index = 0; index < sizeof(arr) / sizeof(arr[0]) ;index++){
        cout << repeat(" ", (numMax - arr[index]) / 2) << repeat("*", arr[index])  << endl;
    }
}

void printCircle(int size){
    int radius = size * 2 - 1;
    
    string grid[radius][radius];
    
    
    int centerX, centerY;
    centerX = radius / 2;
    centerY = radius / 2;
    
    for(int y = 0; y < radius; y++){
        for(int x = 0; x < radius; x++){
            if(pow(x - centerX, 2.0) + pow(y - centerY , 2.0) <= pow(radius/ 2, 2.0)){
                grid[y][x] = "*";
            }else{
                grid[y][x] = " ";
            }
        }
    }
    
    for(int y = 0; y < radius; y++){
        for(int x = 0; x < radius; x++){
            cout << grid[y][x];
        }
        cout << endl;
    }
}

int main(){
    cout << "size of diagrams to be drawn: ";
    int size;
    cin >> size;
    
    printPyramid(size);
    printCircle(size);
    
    
    
    return 0;
}

