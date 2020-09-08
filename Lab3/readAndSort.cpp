/*
Hunter Lewis and Quan Do
SEC 07 and 08
Team 8
September 10th 2020
*/

#include <iostream>
#include <fstream>

using namespace std;

int readData(int *&arr){
    int size;
    ifstream inputFile;
    inputFile.open("data.txt");
    inputFile >> size;
    arr = new int[size];
    for(int i = 0; i < size; i++){
        inputFile >> *(arr + i);
    }
    inputFile.close();
    return size;
}
void bsort(int *arr, int last){
    bool sorted = true;
    int j = 0;
    int temp;
    while(sorted){
        sorted = false;
        j++;
        for(int i = 0; i < last - j; i++){
            if(*(arr + i) > *(arr + i + 1)){
                temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
                sorted = true;
            }
        }
    }
}

void writeToConsole(int *arr, int last){
    for(int i = 0; i < last; i++){
        cout << *(arr + i)<< " ";
    }
    cout<<endl;
}
int main(){
    int nums;
    int *arr;

    nums = readData(arr);
    bsort(arr, nums);
    writeToConsole(arr, nums);
    delete[] arr;
    return 0;
}