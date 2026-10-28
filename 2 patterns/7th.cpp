/*
i/p:t=2;n=5,2
      *                {4 space ,star,4space}
    * * *              {3 space ,star,3space}
  * * * * *              {2 space ,star,2space}
 * * * * * * *            {1 space ,star,1space}
* * * * * * * * *           {0 space ,star,0space}
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
        //stars
        for(int  j = 0; j < 2*i+1; j++){
          cout<<"*";
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
/*
   *    
   ***   
  *****  
 ******* 
*********
 * 
***
*/
