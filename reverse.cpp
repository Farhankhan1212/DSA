#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
}

 void swapAlternate(int arr[], int size){

    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
 }

int main(){
     int even[5] = {2,4,6,8,12};
     int odd[5] = {11, 33, 9, 76,43};

     swapAlternate(even, 5);
     printArray(even, 5);

     cout << endl;

swapAlternate(odd, 5);
     printArray(odd, 5);
return 0;
}