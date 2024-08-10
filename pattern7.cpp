#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    char ch = 'a';
    while(i<=n) {
         
        int j = 1;
        char z=ch;
        while(j<=i) {
            
            cout<< z<<' ';
            j = j+1; 
            z++;
        }
        
        cout<<endl;
        ch++;
        i = i+1;
    } 
}