#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    int z=1;
    while(i<=n) {
        
        int j = 1;
        while(j<i) {
            cout<< z;
            j = j+1; 
            z++;
        }
        cout<<endl;

        i = i+1;
    } 
}