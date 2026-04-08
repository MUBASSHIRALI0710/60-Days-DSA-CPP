// Remove Duplicates in Array (Sorted)
// Given a **sorted** array, remove the duplicates in‑place and return the new length. Do not use extra array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = 8;
    int j = 0;
    
    for(int i=1 ;i<n;i++){
      if(arr[i] != arr[j]){
      j++;
      arr[j] = arr[i];
      }
    }
    int newLenght = j+1;
    for(int i=0 ; i < newLenght ; i++){
      cout << arr[i] << " ";
    }  
    return 0;
}