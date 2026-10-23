#include<iostream>
#include <array>
#include <iterator>

using namespace std;
//those const really important we need to
// // Total bytes divided by bytes of one element
//size_t length = sizeof(arr) / sizeof(arr[0]); 

int arrayConverter(const int array1[], int array2[],int size, int sum_array[], int product)
{
    product = 0;
    for (int k = 0; k < size; k++){
        sum_array[k] = array1[k] + array2[k];
        product += array1[k]  * array2[k];
    }
    return product;
}
void print_array(int array[], int size)
{
    for(int k = 0; k < size; k++)
        cout << array[k] << " | " << endl;
}

void gen_rand_array(int out_array[], int size, int lower = 0, int upper = 10)
{
    for(int k = 0; k < size; k ++)
        out_array[k] = rand() % (upper - lower + 1) + lower; // find the random number fro 0 to 10
}

int main(){
    srand(time(0));

    int array1[] = {1,2,3,4};
    int array2[] = {1,2,3,4};
    int sum[4], product;
    arrayConverter(array1,array2,4, sum, product);
    
    print_array(array1,4);
    print_array(array2,4);
    print_array(sum,4);
}