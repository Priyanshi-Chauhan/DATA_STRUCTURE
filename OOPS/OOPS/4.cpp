#include<iostream>
using namespace std;

 class base1  {
  public:
  base1(){
  cout<<"hehe"<<endl;}
      base1( int x){
       cout<< "base1"<< endl;
       }
  };
  class base2 : virtual public base1{
  public:
    base2 (int x) : base1(x){
     cout<< "base2"<<endl;
     }
  };
  class base3 : virtual public base1{
public:
    base3 ( int x): base1(x){
    cout<< "base3"<< endl;}
  };
  class base4  : public base2 , public base3{
      public:
           base4(int x) : base3(x) , base2(x){
      cout<< "base4"<<endl;
      }

  };
 int main ()  {
     base4 t(39);
  return 0;}
/*
#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};

class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};

class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};

class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};

int main()  {
    TA ta1(30);
}
*/
