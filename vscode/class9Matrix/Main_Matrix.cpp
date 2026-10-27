#include"Matrix.h"

int NROWS = 5;

int main(){
    int array1[]= {-3,4,7};
    print_array(array1,3);

    int array2[NROWS];
    gen_rand_array(array2 , NROWS , -50 , 50);
    print_array(array2,NROWS);
}