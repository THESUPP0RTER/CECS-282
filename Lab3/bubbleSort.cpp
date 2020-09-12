#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size, int(*compare)(int a, int b));
int compareAscending(int a, int b);
int compareDescending(int a, int b);

int main(){
    int size;
    cout << "Enter size: " << endl;
    cin >> size;

    int *array = new int[size];
    
    cout << "Enter " <<size << " elements" << endl;
    for(int i = 0; i < size; i++){
        cin >> *(array + i);
    }
    bubbleSort((array), size, &compareAscending);
    cout << "Array in ascending order: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(array+i)<<" ";
    }
    cout<<endl;
    bubbleSort((array), size, &compareDescending);
    cout << "Array in descending order: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(array+i)<<" ";
    }
    cout<<endl;
    
}

void bubbleSort(int *array, int size, int(*compare)(int a, int b)){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int x = compare(*(array+i), *(array+j));
            if(x == 1){
                temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

int compareAscending(int a, int b){
    if(a > b){
        return 1;
    }
    else{
        return 0;
    }

}

int compareDescending(int a, int b){
    if(a < b){
        return 1;
    }
    else{
        return 0;
    }
}
