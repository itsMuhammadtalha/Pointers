#include<iostream>
using namespace std;

int sumofelements(int a[],int size)   //a[] is interpreted as int *a by the compiler                                     //
{                                     //storing the address of 1st elemnt of a[] 
    int i , sum = 0;

    cout<<"size of array in sumofelements : "<<sizeof(a)<<endl;

    for(i=0 ; i<size ; i++)
    {

        sum+=a[i];    // ==*(a+i)

    }

    return sum;
}

int main(){

    int a[]={1,2,3,4,5};  

    int size =sizeof(a)/sizeof(a[0]);   //size of array/size of an element 

    int total=sumofelements(a,size);

    cout<<"size of array in main function : "<<sizeof(a)<<endl;

    cout<<"sum of array elements : "<<total;

    return 0;
}