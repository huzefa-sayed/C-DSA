#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase character";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase character";
    }
    else{
        cout << "Not an alphabetic character";
    }
    
    return 0;
}
