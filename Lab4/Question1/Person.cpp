/*
Hunter Lewis
Team 8
SEC 07 and 08
September 22nd 2020
Question 2
*/
#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		float salary;
	public:
		void setPerson();
		string getName();
		float getSalary();
};
void Person::setPerson(){
	cout<<"Enter person's name ";
	cin>> name;
	cout<<"Enter person's salary ";
	cin>> salary;
}
string Person::getName(){
	return name;
}
float Person::getSalary(){
	return salary;
}
void bsort(Person** p,int n,bool s)
{
	void order(Person**, Person**);
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(((s==false && p[i] -> getSalary() > p[j] -> getSalary()) || (s==true && p[i] -> getName() > p[j] -> getName()))){
				order(p+i,p+j);
			}
		}
	}
}
void order(Person** person1, Person** person2){
		Person* temp;
		temp = *person1;
		*person1 = *person2;
		*person2 = temp;
}
int main(){
	
	int n;
	cout << "Enter number of person: ";
	cin >> n;
	Person* p[n];
	for(int i = 0;i < n;i++){
		p[i] = new Person();
		p[i] -> setPerson();
	}
	cout << "\nUnsorted order" << endl;
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << "\nSorted base of name alphabetically" << endl;
	bsort(p,n,true);
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << "\nSorted based on salary from least to greatest" << endl;
	bsort(p,n,false);
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << endl;
	return 0;
}

