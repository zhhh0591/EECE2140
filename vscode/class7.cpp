#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

const int length = 5;

//write a function with array 
void print_array(int array[], int size){ //passing array into a function
    cout << "[";
    for(int k = 0; k < size; k++)
    {
        cout << array[k];
        if(k < size - 1)
            cout << ",";
    }
    cout << "]" << endl;

}

int main(){

    srand(time(0));

    int array[4] = {};
    float array2[2];//declear array 
    //bool array3[length] = {false, true, true };
    int array4[] = {-2,3,9,8,12};

    for (int k = 0; k < 4; k++) //array for int or float
        cout << array[k] << " | ";
    cout << endl;
    
    //
    
    int array5[length];
    for(int j = 0; j < length; j++){
        //cout << "Enter element" << j + 1 << ";" << endl;
        //cin >> array5[j];
        array5[j] = j*j;
    }

    for(int j = 0; j < length; j++)//print what you just input
        cout << array5[j] << " | " ;
        cout << endl;
    
    int total = 0;
    float average = 0.0;
    for (int i = 0; i < length; i++)
        total += array5[i];
        //find average 
        
    cout << total << " | " << total/1.0/length << endl;//why its not double ??
    
    print_array(array5,length);
    
    //two dimisional array
    int mat[3][5] = {
            {1,3,5,7,9},
            {2,4,6,8,10},
            {3,6,9,12,15}

    };
    for(int k = 0; k <3; k++)
    {
        for(int j = 0; j < 5; j++)
        
            cout << mat[k][j] << ",";
        cout << endl;
    }
    return 0;
    

    
}

