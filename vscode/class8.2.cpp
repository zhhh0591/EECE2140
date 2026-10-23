#include<iostream>
//have to put the number of columns

using namespace std;

void print_matrix(int array[][5], int rows, int cols)
{
    cout << "[";
    for(int r = 0; r < 3; r++)
    {
        cout << "[";
        for(int c = 0; c < 3; c++){
            cout << array[r][c];
            if(c < cols - 1)//cause the cols - 1 is the last values
                cout << ",";
        }
        if(r < rows - 1)
            cout << "],";
        else
        cout << "]" << endl;
    }

}

const int ncols = 5;

void gen_random_matrix(int array[][5], int rows, int cols, int low, int high)
{
    cout << "[[";
    for(int r = 0; r < rows; r++)
        for(int c = 0; c < cols; c++)
        array[r][c] = rand()%(high - low + 1) + low;
        cout << ",";
    cout << "]]" << endl;
}










int main(){


srand(time(0));








int array2[3][5] ={{0},{-1,3},{1,-3, 5, 7, 12}};

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++){
            cout << array2[r][c] << " | ";
        }
        cout << endl;
    return 0;
}
}