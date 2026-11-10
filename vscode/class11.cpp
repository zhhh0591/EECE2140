// pointers if we add * before the variables then it will shows the address 
//of the variables

//pointer refer a address of the variables
/*
In C++, dereferencing a pointer means using the indirection operator * 
to access or modify the actual value stored at the memory address the pointer is holding
*/

#include<iostream>

using namespace std;
float d[] = {};
const int LEN = 5;

void change_Value1(int value1){
    value1 *=2;
}
void change_Value2(int& value2){
    value2 *= 2;
}

void change_Value3(int* value)
{
    if(value != nullptr){
        (*value) *= 2;
    }
    else
    {
        cout << "please put something into your pointers" << endl;
    }
        
}


int main(){

    float d[LEN] = {-1,4,6,-8,12};
    cout << d << " | " << *d << " | " << *(d + 1) << " | " << d + 1 << endl;


    // float a = 2.1;
    // float *b = &a;//address
    // int *c;
    // int d = 12;// only makes one star will only shows one
    //         // pointer and then if you want to shows more then just tyoe more stars 
    // int* e = nullptr; // means nothing in this address
    // e = &d;
    // cout << d <<" | " << e << " | " << *e << " | " << *e + 1 << " | " << *(e + 1) << endl;
    // cout << "\n" << endl;
    // int k = -100;
    // cout << "Before value is " << k << endl;
    // change_Value1(k);
    // cout << "After value is" << k << endl;

    // change_Value3(&k);//pass by pointers 

    return 0;
}