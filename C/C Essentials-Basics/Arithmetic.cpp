//
// Created by Varzil Thakkar on 16/08/22.
//
#include <iostream>
using namespace std;
template <class T>
class Arithmetic{
private:
    int a;
    int b;
public:
    Arithmetic(T a,T b){
        this->a=a;
        this->b=b;
    }
    T add(){
        T c=a+b;
        return c;
    }
    T sub(){
        T c=a-b;
        return c;
    }
};
int main(void){
    Arithmetic<int> a(5,10);
    cout<<"Addition is "<<a.add()<<endl;
    cout<<"Subtraction is "<<a.sub()<<endl;

    Arithmetic<int> b('A','B');
    cout<<"Addition is "<<(int)b.add()<<endl;
    cout<<"Subtraction is "<<(int)b.sub()<<endl;
}