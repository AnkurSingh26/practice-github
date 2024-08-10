#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i<=n) {
        
        int j = n-i;
        while(j) {
            cout<< ' ';
            j = j-1; 
        }
        int z=1;
        while(z<=i) {
            cout<< "x";
            z = z+1; 
        }
        int p=i-1;
        while(p){
            cout<<'x';
            p--;

        }
        cout<<endl;

        i = i+1;
    } 
}