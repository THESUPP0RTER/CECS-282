/*
Hunter Lewis
CECS 282 SEC 07-08
Lab 5
*/
#include<iostream>
using namespace std;
#include "Matrix.h"
Matrix::Matrix(int r, int c){
    rowSize = r;
    colSize = c;
    ptr = new int*[rowSize];
    for(int i = 0; i< rowSize; i++){
        ptr[i] = new int[colSize];
    }
}

Matrix::~Matrix(){
    for(int i = 0; i < rowSize; i++){
        delete[] ptr[i];
    }
    delete []ptr;
}
void Matrix::InputMatrix(){
    for(int i = 0; i < rowSize ; i++){
        for(int j = 0; j < colSize; j++){
            cin >> ptr[i][j];
        }
    }
}
void Matrix::add(const Matrix& second, Matrix& result) const{
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);
    for(int i = 0; i < rowSize ; i++){
        for(int j = 0; j < colSize; j++){
            result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
        }
    }
}
void Matrix::subtract(const Matrix& second, Matrix& result) const{
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);
    for(int i = 0; i < rowSize ; i++){
        for(int j = 0; j < colSize; j++){
            result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
        }
    }
}
void Matrix::multiply(const Matrix& second, Matrix& result) const{
    assert(colSize == second.rowSize);
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < second.colSize; j++){
            for(int k = 0; k < colSize; k++){
                result.ptr[i][j] += ptr[i][k] * second.ptr[k][j];
            }
        }
    }
}

void Matrix::print() const{
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
// Instantiation and setup of matrix1
cout << "matrix1 (3x4)" << endl;
Matrix matrix1 (3, 4);
matrix1.InputMatrix();
matrix1.print();

// Instantiation and setup of matrix2
cout << "matrix2 (3x4)" << endl;
Matrix matrix2 (3, 4);
matrix2.InputMatrix();
matrix2.print();

// Instantiation and setup of matrix3
cout << "matrix3 (4x2)" << endl;
Matrix matrix3 (4, 2);
matrix3.InputMatrix();
matrix3.print();

// Adding matrix2 to matrix1 and printing the result
cout << "Result of matrix1 + matrix2" << endl;
Matrix addResult (3, 4);
matrix1.add(matrix2, addResult);
addResult.print();

// Subtracting matrix2 from matrix1 and printing the result
cout << "Result of matrix1 - matrix2" << endl;
Matrix subResult (3, 4);
matrix1.subtract (matrix2, subResult);
subResult.print();

// Multiplying matrix1 and matrix3 and printing the result
cout << "Result of matrix1 * matrix3" << endl;
Matrix mulResult (3, 2);
matrix1.multiply(matrix3, mulResult);
mulResult.print();
return 0;
}
