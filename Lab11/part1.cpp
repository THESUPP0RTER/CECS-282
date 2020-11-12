#include <iostream>

#include <vector>

#include<algorithm>

#include<numeric>//for accumulator operations

using namespace std;

int main()

{
    // an array of doubles

    double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

    //Determine the array size

    int size = sizeof(arr) / sizeof(arr[0]);

  // initialize vector v1 to array arr
    vector<double> v1;
    for (int i = 0; i < size; i++) {
        v1.push_back(arr[i]);
    }


    //Display the contents of vector v1

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

 // Sorting the Vector in Ascending order

    sort(v1.begin(), v1.end());

//Display the content of vector v1 after sorting

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

// Reversing the Vector v1

    reverse(v1.begin(), v1.end());

//Display the content of vector v1
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl;


//Display the maximum element of vector v1
    cout << *max_element(v1.begin(), v1.end()) << endl;


//Display the minimum element of vector v1
    cout << *min_element(v1.begin(), v1.end()) << endl;


//Display the accumulation of all elements in vector v1
// Starting the summation from 0
    double allElements = accumulate(v1.begin(), v1.end(), 0.0);
    cout << allElements << endl;


// Counts the occurrences of 2.2 from 1st to last element
    c = count(v1.begin(), v1.end(), 2.2);
    

//Display the counts
    cout << "The amount of times 2.2 occurs is " << c << endl;

// Delete second element of vector

    v1.erase(v1.begin() + 1);

//Display the v1 after erasing the element
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

//Remove the duplicate occurrences
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    return 0;

}