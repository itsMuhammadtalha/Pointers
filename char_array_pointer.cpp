#include <iostream>

using namespace std;

void print(char* a){       //pointer pointing to the first element of char a[] 

    // a[0]='A';            // modifying the value at a specific address
                            // to avoid changes we can use print(const char* a)

    int i=0;
    
    while(a[i] != '\0'){

        cout<<*a;

        a++ ;

    }
}

int main(){

    char a[20] = "hello";   // in string null character is assigned itself

    print(a);

    return 0;
}