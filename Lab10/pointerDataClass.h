#include<iostream>
using namespace std;

class pointerDataClass{
   int maxSize;
   int length;
   int *p;
public:
   pointerDataClass(int size);
   ~pointerDataClass();

   //Commenting out will make it a shallow copy
   pointerDataClass(const pointerDataClass&other);

   void insertAt(int index, int num);
   void displayData();
   void get();//get the length of the arrray
};

pointerDataClass::pointerDataClass(int size)
{
   this->p = new int[size];
   this->maxSize = size;
   this->length = 0;
   for (int index = 0; index < size; index++)
       this->p[index] = 0;
}
pointerDataClass::~pointerDataClass()
{
   delete this->p;
}
//Commenting out will make it a Shallow copy

pointerDataClass::pointerDataClass(const pointerDataClass&other)
{
   this->maxSize = other.maxSize;
   this->length = other.length;
   this->p = new int[this->maxSize];
   for (int index = 0; index < other.maxSize; index++)
       this->p[index] = other.p[index];
}
void pointerDataClass::insertAt(int index, int num)
{
   this->p[index] = num;
   this->length++;
}
void pointerDataClass::displayData()
{
   for (int index = 0; index < maxSize; index++)
       cout << this->p[index] << " ";
   cout << endl;
}
void pointerDataClass::get()
{
   cout << "Length: " << length << endl;
}