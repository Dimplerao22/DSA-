//1D Array
/*#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[5];
   cout<<"enter a number";
   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

   arr[3]=16;
   arr[4] += 12;

   cout<<arr[4];

   return 0;
} */

//2D array
//it is used to do matrix and graph problems

#include<bits/stdc++.h>
using namespace std;

/*int main(){

  int arr[3][5];//row into column for matrix

  arr[1][3] = 38;
  cout<<arr[1][5];
  return 0;

} */

int main(){
  string s = "Dimple";

  int len =s.size();//to find the length 
  s[len-1] ='z';//we can change it to any value but remember the single codes since it is characters
  cout<<s[len-1];
  return 0;
} 