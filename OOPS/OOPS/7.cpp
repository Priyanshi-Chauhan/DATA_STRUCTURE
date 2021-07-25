
#include<iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v=10);
};

Test::Test(int v) {
    value = v;
    cout<<value<<endl;
}

int main() {
    Test t[100];
    return 0;
}
