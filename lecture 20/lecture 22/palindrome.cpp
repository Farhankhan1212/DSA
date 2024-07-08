#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(a[s] != a[e]){
            return 0;
        }
        else {
          s++;
          e--;
        }
    }
    return 1;
}
void reverse(char name[], int n ){
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i =0; name[i] != '\0'; i++){count++;
        }
    return count;
}
char getMaxOccCharacter(string s) {
    int arr[26] ={0};

    for(int i=0;i<s.length(); i++){
        char ch = s[i];

        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch -'a';
        }
        else{
            number = ch -'A';
        }
        arr[number]++;
    }
    for(int i=0;i<s.length(); i++){
        if()
        maxi = max(maxi,arr[i]);
    }
}

int main( ) {
    /*
    char name[20];
    
    cout << " enter your name " << endl;
    cin >> name;
    
    
     cout << "your name is ";
     cout << name << endl;
     int len =getLength(name);
     cout << "Length: " << getLength(name) << endl;
     reverse(name,len);


     cout << "your name is ";
     cout << name << endl;

     cout << " palindrome or not: " << checkPalindrome(name, len) << endl;
     cout<<"CHARACTER is " << toLowerCase('b') << endl;
     cout<<"CHARACTER is " << toLowerCase('C') << endl;
     */

     string s;
     cin >> s;


     return 0;
}