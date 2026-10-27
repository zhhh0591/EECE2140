#include<iostream>

using namespace std;

void matrix_multiplication(int array1[][4],int array2[][3]);

int main()
{

    

    int initialized_matrix1[2][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8}
};
    int initialized_matrix2[4][3] = {
    {1, 2, 3},
    {5, 6, 7},
    {9, 10, 11},
    {4, -3, 0}
};


}

void matrix_multiplication(int array1[][4],int array2[][3])
{
    if(sizeof(array1[0]) / sizeof(array1[0][0]) != sizeof(array2) / sizeof(array2[0]))
    {
        cout << "Its a invaild matrix mutiplication" << endl;
    }
    int temp_array[][sizeof(array2) / sizeof(array2[0])] = {};
    for(int r = 0; r < sizeof(array1) / sizeof(array1[0]); r++)
    {
        for(int c = 0; c < sizeof(array2[0]) / sizeof(array2[0][0]); c++){
            temp_array[r][c];
            for (int k = 0;k < sizeof(array2) / sizeof(array2[0]);k++){
                temp_array[r][c] = array1[r][k] * array2[k][c];
            }

        }
    }
}

void findMax(){

}
void findMin(){
    
}