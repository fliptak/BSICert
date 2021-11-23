#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

int error1() {
int i ;
cout<<"Enter your number"<<endl;
cin >> i;
cout << i++ << i << endl;
return i;
}

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