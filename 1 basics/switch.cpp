#include<iostream>
using namespace std;
/*
take the day no and print the corresponding day
for 1 print monday 
for 2 print tuesday and so on.
*/

int main(){
      int day;
      cin >> day;
      switch(day){
        case 1:
           cout<<"monday";
           break;
        case 2:
          cout<<"Tuesday";
          break;
        case 3:
        cout<<"Wednesday";
         break;
        case 4:
           cout<<"Thursday";
         break;
        case 5:
          cout<<"Friday";
          break;

        case 6:
           cout<<"Saturday";
           break;

        case 7:
        cout<<"Sunday";
        break;
      }

return 0;
}