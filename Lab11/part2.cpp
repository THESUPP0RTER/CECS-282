// listplus.cpp

// demonstrates reverse(), merge(), and unique()

#include <iostream>

#include <list>

#include <vector>

#include<algorithm>

#include<numeric>//for accumulator operations

using namespace std;



int main()

{
    //Create 2 lists called list1 and list2. Store integer numbers.
    int arr1[] = { 40, 30, 20, 10 };
    int arr2[] = { 15, 20, 25, 30, 35 };

    //Determine the array size of arr1 and arr2
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);


     //Push elements of array arr1 into list1
    list<int> l1;
    for (int i : arr1) {
        l1.push_back(i);
    }

    //Push elements of array arr2 into list2
    list<int> l2;
    for (int i : arr2) {
        l2.push_back(i);
    }
    // reverse list1: 10 20 30 40
    l1.reverse();

    // merge list2 into list1
    l1.merge(l2);

  // remove duplicate 20 and 30 from list 1
    l1.unique();

   //Diplay the content of list1 using iterator
    list<int> ::iterator itr;
    for (itr = l1.begin(); itr != l1.end(); ++itr)
        cout << *itr << " ";


     //Display the list1 in reverse
    cout <<  endl;
    l1.reverse();
    for (itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    
    cout << endl;


     //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"
    for (int i : l1) {
        if (i == 25) {
            cout << "Found 25" << endl;
            break;
        }
        else if (i == l1.back()) {
            cout << "Not found 25" << endl;
        }
    }
    return 0;

}