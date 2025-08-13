//write a program that takes an input of age
//and prints if you are adult or not
#include<bits/stdc++.h>
using namespace std;

int main(){

  int age;
  
  cout<<"enter your age";
  cin>>age;

  if(age>=18){
    cout<<"you are an adult"<<endl;
  }

  else{
    cout<<"you are not an adult"<<endl;
    return 0;
  }
}

/*
A school has following rules for grading system
a.Below 25-F
b.25 to 44- E
c. 45 to 49-D
d. 50 to 59-C
e.60 to 79-B
f. 80 to 100 -A
Ask user to enter marks and print the corresponding grade
*/

/* #include<bits/stdc++.h>
using namespace std;

int main(){
  int marks;
  cout<<"Enter the Marks";
  cin>>marks;

  if(marks<=25){
    cout<<"F"<<endl;
  }

  else if(marks<=40){
    cout<<"E"<<endl;
  }

  else if(marks<=49){
    cout<<"D"<<endl;
  }

  else if(marks<=59){
    cout<<"C"<<endl;
  }

  else if(marks<=79){
    cout<<"B"<<endl;
  }

  else if(marks<=100){
    cout<<"A"<<endl;
  }
  return 0;
} */