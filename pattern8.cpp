#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    char ch = 'a';
    while(i<=n) {
         
        int j = 0;
        
        while(j<i) {
            
            cout<< ch<<' ';
            j = j+1; 
            ch++;
        }
        
        cout<<endl;
        
        i = i+1;
    } 
}