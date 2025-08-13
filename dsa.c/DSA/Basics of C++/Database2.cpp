#include <iostream>//by <bits/stdc++.h> it will take all the libraries in it no need to mention again nd again
using namespace std;
int main(){
  //int datatype
  int x=10;

  //long datatype
  long x=10;
  cin>>x;

  long long x=1000000000000000;
  

  //float,double datatype
  float x=5.6;
  float y=5;
  cout<<"value of y:"<<y;

  //string and getline datatype
  string s;
  cin>>s;
  cout<<s;
  return 0;
}
// if we want to add a string like "HEy Bitches " then we have to add two string s1 and s2 and a space like " jj"

//in case we want everything together in the string then we have to use getline datatype

//print hey bitches how are you the whole statement in one line
int main(){
string str;
getline(cin,str);
cout<<str;
return 0;
}

//Character Datatype(256 chr)
 int main(){
   char ch='g'; //single codes are use to declare a character
   cin>>ch;
   cout<<ch;
 }
 // most imp. datatype are int,long,long long,float,double,string,getline,char
 // every datatype takes a certain memory so it is better to use relevent 