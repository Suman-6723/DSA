/*
1      1
12    21
123  321
12344321

*/



#include<iostream>
using namespace std;
void pattern13(int n){
  int space = 2 * (n-1);
 for(int i=0;i<n;i++){
       //number
      for(int j = 1; j<=i;j++){
        cout<< j;
      }
       //space
       for(int j = 1; j<=space ;j++){
        cout<<" "; 
      }

       //number
        for(int j = i; j>=1;j--){
        cout<< j;
      }
    cout<<endl;
    space-=2;

 }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern13(n);
    }
}