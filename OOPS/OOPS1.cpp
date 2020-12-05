#include<iostream>
using namespace std;

class complexx{
    float real;
    float img;
    public:
    complexx(){
    real =0;
    img =0;
    }
    complexx(float r, float im){
        real=r;
        img=im;
    }
    //setter
    void setreal(const float r){
    real=r;
    }

    void setimg(const float im){
    img=im;
    }
    // getter
    float getreal() const{
    return real;
    }

    float getimg() const{
        return img;
    }
void print(){

cout<<real<< " + " <<img<<"i"<<endl;
}
};

int main() {
complexx c ;
c.print();
complexx c1(5 , 3);
c1.print();
complexx c2;
c2.setreal(8);
c2.setimg(1);
c2.print();

return 0;

}
