//Functions(Pass by Reference or value)
#include<bits/stdc++.h>
using namespace std;
 
//Functions are set of code which performs something for you
//Functions are used to modularise code
//Functions are used to increase readability
//Functions are used to use same code multiple times
//we use four types of functions usually:-- 
//void->which does not returns anything
//return->
//parameter->
//non parameterised->


/*void printName(){ //keyword,functionname and () non parameter
  cout<<"dimple";
}
int main(){
 
    printName();
    return 0;

}

//parameterised void function
void printName(string name){
  cout<<"dimple "<<" "<<name<<endl;
}
int main(){
  string name;
  cin>>name;
  printName(name);

  string name2;
  cin>>name2;
  printName(name2);
  
  return 0;
}*/


//take two numbers and print its sum

/*int main(){
  int num1,num2,num3;
  cin>>num1>>num2;
  int num3=num1+num2;
  cout<<num3;
  return 0;
}
//for calculator
int sum(int num1,int num2){
 int num3=num1+num2;
    return num3;
}
int main(){
  int num1,num2;
  cin>>num1>>num2;
  int res=sum(num1,num2);
  cout<<res;
  return 0;
}*/



//for max value
/*int maxx(int num1,int num2){
if (num1>= num2){
  return num1;

}

return num2;}
//looking for a return line

int main(){
  int num1,num2;
  cin>>num1>>num2;
  int maximum=maxx(num1,num2);
  cout<<maximum;
  return 0;

}*/

//functions(pass by value or pass by reference)

//pass  by value(when we call function and pass number it goes by copy not the original number goes)

/*void doSomething(int num){
  cout<<num<<endl;
  num += 5;
  cout<<num<<endl;
  num +=5;
  cout<<num<<endl;
}
int main(){
  int num=10;
  doSomething(num);
  cout<<num<<endl;
  return 0;
}//do same with string*/

//pass by reference (it changes in original one)
void doSomething(string s){//& means address
  s[0]='t';
  cout<<s<<endl;
}
int main(){
  string s="dimple";
  doSomething(s);
  cout<<s<<endl;
  return 0;
}//do it for int 

//thing to keep in mind of array(combining array and loop and functions)
/*void doSomething(int arr[]){//for array it works like this arr[] pass by refrence not by &

}

int main(){
  int arr[5];
  for(int i=0;i<=4;i=i+1){
    cout<<i<<endl;
    cin>>arr[i];
  }
  return 0;
}*/