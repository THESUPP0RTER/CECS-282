// listplus.cpp

// demonstrates reverse(), merge(), and unique()

#include <iostream>

#include <list>

#include<algorithm>

using namespace std;



int main()

{

    //Create 2 lists called list1 and list2. Store integer numbers.



    int arr1[] = { 40, 30, 20, 10 };

    int arr2[] = { 15, 20, 25, 30, 35 };

    //Determine the array size of arr1 and arr2



     //Push elements of array arr1 into list1



    //Push elements of array arr2 into list2



    // reverse list1: 10 20 30 40


    // merge list2 into list1


  // remove duplicate 20 and 30 from list 1

   //Diplay the content of list1 using iterator



     //Display the list1 in reverse





     //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"



    return 0;

}