  #include<iostream>
using namespace std;

int main () {

   int arr[10] = {2,5,6};
  /*
   cout <<"address of first memory block is " << arr << endl;
   cout << arr[0] << endl;
   cout <<"address of first memory block is " << &arr[0] << endl;
   cout << " 4th " << *arr+2 << endl;
   cout << "5th " << *(arr + 1) << endl;

   

int i = 2;
cout << i[arr] << endl;

int temp[10] = {1,2};
cout << sizeof(temp) << endl;
cout << sizeof(*temp) << endl;
cout << "1st" << sizeof(*temp) << endl;
cout << "2nd" << sizeof(&temp) << endl;



int *ptr = &temp[0];
cout << sizeof(ptr) << endl;
cout << sizeof(*ptr) << endl;
cout << sizeof(&ptr) << endl;

*/
int a[20] = {1,2,3,5};
cout << "->" << &a[0] << endl;
cout << &a << endl;
cout << a << endl;

int *p = &a[0];
cout << p << endl;
cout << *p << endl;
cout << "->" << &p << endl;


return 0 ;

}