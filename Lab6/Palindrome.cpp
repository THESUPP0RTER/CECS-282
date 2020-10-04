#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;


int main(){
    string s;
    getline(cin, s);
    const char* input = s.c_str();
    char* test = new char[s.length() + 1];
    strcpy(test, input);
}