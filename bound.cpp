 #include<iostream>
using namespace std; 
int lastOcc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

      if (arr[mid] == key) {
        ans = mid;
        e = mid - 1;
      } 
      else if (key > arr[mid]){
        s = mid + 1;
    }
    else if (key < arr[mid]){
     e = mid - 1;
}
mid = s + (e - s) / 2;
}
return ans;
}
int firstOcc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

      if (arr[mid] == key) {
        ans = mid;
        e = mid - 1;
      } 
      else if (key > arr[mid]){
        s = mid + 1;
    }
    else if (key < arr[mid]){
     e = mid - 1;
}
mid = s + (e - s) / 2;
}
return ans;
}