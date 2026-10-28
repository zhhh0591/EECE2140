#include<iostream>

using namespace std;


const int NROW1 = 2;
const int NCOM = 4;
const int NCOL2 = 3;


int temp_Array[][NROW1] = {};

void matrix_multiplication(int array1[][NCOM],int array2[][NCOL2]);

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

void matrix_multiplication(int array1[][NCOM],int array2[][NCOL2], int temp_array[][NCOL2])
{
    for(int r = 0; r < NROW1; r++){
        for (int c = 0; c < NCOL2; c++){
            temp_array[r][c] = 0;
            for (int k = 0; k < NCOM; k++)
            {
                temp_array[r][c] += array1[r][k] * array2[k][c];
            }
        }
    }
//Important!! use the NCOL2 as the result array's second dimension,
// initialize eaxh result element to 0 before the inner loop, 
//and use += to accumulate product instead of =



}















void findMax(){

}
void findMin(){
    
}












// void matrix_multiplication(int array1[][4],int array2[][3])
// {
//     if(sizeof(array1[0]) / sizeof(array1[0][0]) != sizeof(array2) / sizeof(array2[0]))
//     {
//         cout << "Its a invaild matrix mutiplication" << endl;
//     }
//     int temp_array[][sizeof(array2) / sizeof(array2[0])] = {};
//     for(int r = 0; r < sizeof(array1) / sizeof(array1[0]); r++)
//     {
//         for(int c = 0; c < sizeof(array2[0]) / sizeof(array2[0][0]); c++){
//             temp_array[r][c];
//             for (int k = 0;k < sizeof(array2) / sizeof(array2[0]);k++){
//                 temp_array[r][c] = array1[r][k] * array2[k][c];
//             }

//         }
//     }
// }