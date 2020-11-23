#include <iostream> 
#include<sstream>
#include<typeinfo>
#include <vector> // vector class-template definition
using namespace std;
template <typename X>
int ReadInput( const string & s, vector <X> & v ) {
    istringstream is( _____________ );//FILL IN BLANK
    int n;
    if(typeid(int)==typeid(X))
    {
    while( is >> n ) {
        v.push_back( n );
    }
    }
    //Check type X for char
    if(__________________________)//FILL IN BLANK
    {int i =0;
    while( i<s.length() ) {
        ____________________( s.______t(i) );//FILL IN BLANK
        i++;
    }
    }
    return v.size();
}

// function template palindrome definition
template <typename X>
bool palindrome(const vector<X>& vec) {
   auto r=vec.crbegin(); 
   auto i=vec.cbegin();

   while (r != vec.crend() && i != vec.__________) {//FILL IN BLANK
      if (*r != _____) { // //FILL IN BLANK
         return false;
      }

      ++r;
      _________;//FILL IN BLANK
   } 

   return true; // the vector is a palindrome
} 

// function template printVector definition
template <typename Y>
void printVector(const vector<Y>& vec) {
   for (auto i=vec.cbegin(); i != vec.size(); ++i) {//FILL IN BLANK
      cout << vec(i) << ' ';//FILL IN BLANK
   }
} 

int main() {
   vector<int> iv;//FILL IN BLANK
   vector<string> ic;//FILL IN BLANK
   int x=0;

   cout<<"Enter single digit separted by a space:"<<endl;
   string s;
   getline(cin, s);
   ReadInput(s, iv);
   printVector(iv);//FILL IN BLANK
   cout << (palindrome(iv) ? " is " : " is not ") << "a palindrome\n";
   cout<<"Enter a string without spaces:"<<endl;
   getline( cin, s );
   ReadInput( s, ic );//FILL IN BLANK
   printVector(ic);//FILL IN BLANK
   cout << (palindrome(ic) ? " is " : " is not ") << "a palindrome\n";//FILL IN BLANK
   
   
} 