#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

// operands are not evaluated left-to-right, but are unsequenced with respect to one another.

// In order to fix this, we shold call cout<< twice, to ensure that values will be printed out in well defined order. 

int error1() {
int i ;
cout<<"Enter your number"<<endl;
cin >> i;
cout << i++ << i << endl;
return i;
}


int error1fix(){
    int i ;
cout<<"Enter your number"<<endl;
cin >> i;
cout << i++ <<endl;
cout<< i << endl;
return i;
}

// value k is not initialized, this could result in undefined behaviour 
// make sure the value is initialized as k=0
int error2() {
  int k;
  int w;
  w = k + 5;
  for (int o = 0; o<5; o++){
      cout<<" in ";
      w += o;
  }
  cout << w;
  return w;
}

int error2fix(){
    int k = 0; 
    cout<<k;
    return k;
}

// the string input could become truncated leading to information loss 
// in order to fix this is to use string instead of char array 

void error3() {
  char bufOne[12];
  char bufTwo[12];
  cin.width(12);
  cin >> bufOne;
  cin >> bufTwo;
  for (int i = 0; i<12; i++){
      cout<<bufOne[i];
  }
  for (int j = 0; j<12;j++){
      cout<<bufTwo[j];
  }

}

void error3ffix (){
  string input;
  string stringOne, stringTwo;
  cin >> stringOne >> stringTwo;
  cout<<stringOne;
  cout<<stringTwo;
}

//do not use float as loop counter -- we do not know if the loop will iterate 9 or 10 times


int error4 (){
float g;
for (float x = 0.1; x<1.0; x+= 0.1){
     g = x + 20;
    cout<<x<<endl;
    cout<<g<<endl;
}
return g;
}


int main (){

error1();
error2();
error3();
error4();


return 0;
}