#include<iostream>

using namespace std ;

int main(){

    int x=5;

    int *p;  //pointer variable

    p=&x;    //pointer pointing to the address of x

    int **q =&p ;  // pointer to pointer

    cout<<"the value of x : "<<x<<endl;
    cout<<"the address of x : "<<p<<endl;
    cout<<"the address of x (&x) : "<<&x<<endl;
    cout<<"the value at address p : "<<*p<<endl;
    cout<<"the address of pointer p : "<<q<<endl;
    cout<<"the value at pointer q : "<<*q<<endl;
    cout<<"the value at pointer p (accessing through pointer q) : "<<**q<<endl;

    cout<<"---------------------------------------------------------"<<endl;

    

    return 0;
}
