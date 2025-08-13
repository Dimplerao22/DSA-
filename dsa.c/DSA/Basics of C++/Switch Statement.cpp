#include<bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day for 1 print monday,for 2 print tuesday and so on for 7 print sunday
*/
int main(){
 
  int day;
  cout<<"Enter the Day number";
  cin>>day;

  switch(day){
    case 1:
     cout<<"Monday";
     
    
    case 2:
     cout<<"Tuesday";
      

    case 3:
     cout<<"Wednesday";
      

    case 4:
     cout<<"Thursday";
      
    case 5:
     cout<<"Friday";
      
    case 6:
     cout<<"Saturday";
     

    case 7:
     cout<<"Sunday";
      
    
    default:
    cout<<"Invalid";

  }
}