/*
i/p:t=2;n=5,2
        A               {4 space ,star,4space}
      A B C             {3 space ,star,3space}
    A B C D E              {2 space ,star,2space}
  A B C D E F G           {1 space ,star,1space}
 A B C D E F G H I         {0 space ,star,0space}
space formula:- n-i-1
for stars :- 2*i+1
we need loop for space star and again space 
*/


#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i = 0;i < n ; i++ ){
        //space
        for(int j =0; j < n-i-1 ; j++){
           cout<<" ";
        }
        //letters
        for(char ch = 'A'; ch < 'A'+(2*i+1); ch++){
          cout<<ch;
        }
        //space
        for(int j = 0 ; j < n-i-1 ; j++){
         cout<<" ";
        }


        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         int n;
         cin>>n;
         pattern7(n);
    }
    return 0;
}
//sorry this is fake push again 