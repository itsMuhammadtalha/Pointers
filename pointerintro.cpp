#include <iostream>

using namespace std;

int main(){
    
    int a[3]={1,2,3};

    cout<<"printing the address and actual value"<<endl;

    cout<<"address of first element of array "<<a<<endl;   //address of a actually prints the address of first element 

    int *p;                                  // pointer variable declaration

    p=a;

    cout<<"value in p : "<<p<<endl;         // the address of a

    cout<<"value at the first address : "<<*p<<endl;   
   
    cout<<"printing the values of an array "<<endl;

    for(int i=0 ; i<3 ; i++)
    {
    //  cout<<*p <<endl;                    // wrong because the loop runs 3 times but the pointer is at the same place 
                                             // the pointer is pointing to the same values  

        cout<<*p<<endl;
        p++;                     //incrementing the pointer to the next memory position

    }
    return 0;
}