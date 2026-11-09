/*
A
AB
ABC
ABCD
ABCDE
*/


#include<iostream>
using namespace std;
void pattern15(int n){
     for(int i =0; i<n ; i++){
     // Example: ASCII values of letters are 'A' = 65, 'B' = 66, 'C' = 67...
     // Here, ch starts from 'A' and goes up to 'A' + i, so it prints A, AB, ABC...
        for(char ch = 'A' ; ch<= 'A'+i ; ch++){
            cout<<ch;
        }
        cout<<endl;
     }

}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t;i++){
        int n;
        cin>>n;
        pattern15(n);
    }
}
