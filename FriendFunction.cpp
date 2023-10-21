#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public :
    void add(int n){
        a=n;
    }
    friend void add1(A,B);
};

class B{
    int b;
    public:
    void add2(int n2){
        b=n2;
    }
    friend void add1(A,B);
};


void add1(A a1,B b1){
	int sum=a1.a+b1.b;
	cout<<"The sum of Result : "<<sum;
}


int main(){
    int n1,n2;
    cout<<"Enter the number 1 : ";
    cin>>n1;
    cout<<"Enter the number 2 : ";
    cin>>n2;

    A a1;
    a1.add(n1);
    B b1;
    b1.add2(n2);
    
    add1(a1,b1);
}
