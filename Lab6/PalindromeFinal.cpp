#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
void transform(char *raw, char *testStr){
    int strlength  = strlen(raw);
    int j = 0;
    for(int i = 0; i < strlength; i++){
        raw[i] = toupper(raw[i]);
    }
    for(int i = 0; i < strlength; i++){
        if(isalpha(raw[i])){
            testStr[j] = raw[i];
            j++;
        }
    }
}

bool testPalindrome(char *s){
    int i = 0;
    int r = 1 + strlen(s) - 1;

    while(i != r){
        if(s[i] != s[r])
            return false;
        i++;
        r--;
    }
    return true;
}

int main(){
    cout<< "Enter a word or scentence to see if it is a palindrome."<<endl;
    string s;
    getline(cin, s);

    //declares a constant char[] and puts the contents of s into it
    const char* input = s.c_str();

    //make a new char[] of length s + 1 so we can have \0 at the end
    char* test = new char[s.length() + 1];

    //copies char[] input to char[] test
    strcpy(test, input);
    transform(test, test);
    if(testPalindrome(test) == true)
        cout << "The statement is a palindrome";
    else
        cout << "The statement isn't a palindrome";
}