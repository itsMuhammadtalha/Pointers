#include <iostream>

using namespace std;

int main()
{
    int a[2][3]={{2,4,8},   // initializing 2d array
                 {1,3,5}    //a[2][3] means two 2d arrays each having 3 elements
                };

   /* int *p = a; // error : b/c  the pointer is 
   pointing to the first 1d array inside a; */

    int (*p)[3]=a;

    cout<<"Address of [0][0] element : "<<a<<endl;
    cout<<"Address of [0][0] element : "<<&a[0][0]<<endl;

    cout<<"address of [1][0] : "<< a+1 <<endl;
    cout<<"address of [1][0] : "<< &a[1][0] <<endl;
    cout<<"address of [1][0] : "<< *(a+1) <<endl;
    cout<<"address of [1][0] : "<< a[1] <<endl;

    /* NOTE : by incrementing the pointer by 1 -> it moves to the second 1d array
         *(a+1) simply returns the pointer to the second array */

    //...............QUIZ..............

    cout<<*(a[0]+1)<<endl;
    cout<<*(*a+1)<<endl;   
    cout<<*(*(a+1))<<endl;    
    
    return 0;
}