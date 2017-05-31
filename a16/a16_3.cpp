/*
* Class: CS 110B 
* Description: Sort array of numbers recursively.
*(selection sort)
* File Name: a16_2.cpp
*/
#include <iostream>
using namespace std;


void sort(int list[], int start, int size);
int indexOfSmallest(const int list[], int start, int size);









int main() {

    int s[10] = {12, 83, 3, 896, 935, 63, 336, 8, 191, 718};
    
    for (int i = 0; i < 10; i++) {
        cout << s[i] << " ";
    }
    
    sort(s, 0, 10);
    
    cout << endl;
    for (int i = 0; i< 10; i++) {
        cout << s[i] << " ";
    }
}









int indexOfSmallest(int array[], int start, int size) {
    int temp = array[start];
    int index = start;
    
    for (int i = start; i < size; i++) {
        
        if (temp > array[i]) {
            
            temp = array[i];
            index  = i;
        }
    }
    return index;
}








void sort(int array[], int start, int size) {
    
    if (start < size) {
        
        int index = indexOfSmallest(array, start, size);
        int temp = array[start];

        array[start] = array[index];
        array[index] = temp;

        sort(array, start+1, size);
    }
}


/*SAMPLE OUTPUT

5 38 312 1 208 603 33 8 911 415 
1 5 8 33 38 208 312 415 603 911  

500 380 3 156 802 306 33 8 119 514 
3 8 33 119 156 306 380 500 514 802 

12 83 3 896 935 63 336 8 191 718 
3 8 12 63 83 191 336 718 896 935  
*/
