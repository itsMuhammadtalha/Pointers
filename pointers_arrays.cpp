#include <iostream>

using namespace std;

int main(){

    int a[4] = {1,4,8,2} ;

    int i ;

    int *p = a ;

    cout<<"the address of first element af array : "<<a<<endl;
    cout<<"the address of first element af array : "<<&a[0]<<endl;
    cout<<"address of second element : "<<&a[1]<<endl;
    cout<<"address of second element : "<<a+1<<endl;
    cout<<"value of 2nd address : "<<a[1]<<endl;
    cout<<"value of 2nd address : "<<*(a+1)<<endl;
    cout<<"\n"<<endl;

    // a++ ; // invalid
    //p++ ; //valid

    for(int i=0 ; i<4 ;i++)
    {
        cout<<"address : "<<&a[i]<<endl;
        cout<<"address : "<<a+i<<endl;
        cout<<"value : "<<a[i]<<endl;
        cout<<"value : "<<*(a+i)<<endl;
    }

    return 0;
}