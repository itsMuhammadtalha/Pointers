#include <iostream>

using namespace std;
/*
void increment(int a){

    a = a+1;

}

int main(){

    int a=10;

    increment(a);

    cout<<"the value of a is : "<<a<<endl;

    return 0;

}

*/

// in above code the value of a after increment will be 10
// thats because the value is passed as an actual value 
// while the stack memory vanishes after being executed at runtime

void increment(int *p){

    *p = *p + 1 ;

}

int main(){

    int a ;

    a=10;

    increment(&a);

    cout<<"the value of a is : "<<a<<endl;

    return 0;
}