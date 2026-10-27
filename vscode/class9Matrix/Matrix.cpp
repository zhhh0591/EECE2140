#include"Matrix.h"

void print_array(const int array[],int size)
{
    cout << "[]";
    for(int k = 0; k < size; k++){
        cout << array[k];
        if(k < size - 1)
            cout << ",";//just put the semicolin in between
    }
    cout << "]";
}

void gen_rand_array(int array2[],int size, int upper, int lower)
{
    for(int k = 0; k < size; k++)
    {
        array2[k] = rand()%(upper - lower + 1) + lower;
    }
}