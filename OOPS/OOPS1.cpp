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
void add( const complexx &x){
real += x.real;
img += x.img;
}
// operator overloading
void operator+(const complexx &x){
real += x.real;
img += x.img;
}

void operator!(){   // since it is a urinary operator therefore 0argument to be passed
img *= -1;
}
//overloading [] operator
void operator[](string s){
if(s=="real"){
    cout<<real<<endl;
}
if(s=="img"){
    cout<<img<<endl;
}
}

// overloading left shift and right shift
void operator>>(istream &cin ,complexx &c){
    float r,im;
     cin>>r>>im;
    c.setreal(r);
    c.setimg(im);

}
void operator<<(ostream &cout ,complexx &c){
float r,im;
cout<<r<< " + "<<im;
//c.getreal();
//c.getimg();

}
};

int main() {
complexx c ;
cin>>c;
cout<< c;
c.print();
complexx c1(5 , 3);
c1.print();
complexx c2;
c2.setreal(8);
c2.setimg(1);
c2.print();
//complexx c3;
//c2.add(c1);
c1+c2;
c2.print();
!c1;
c1.print();
cout<<endl;
c1["real"];
c1["img"];
complexx c3;
cin>>c3;
cout<< c3;
return 0;

}
