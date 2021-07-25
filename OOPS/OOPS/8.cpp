#include<iostream>
using namespace std;
 int &fun() {
  static int i =10;
  return i;
  }
 int main() {
 int y = fun();
  cout<<y<<endl;
  return 0;
 }

