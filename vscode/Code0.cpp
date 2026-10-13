#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    //previous works
    //int num1 = 5,num2 = 10;
    //cout << "Number 1: " << num1 << "| Number 2: " << num2 << endl;
    //cout << "Addition: " << num1 + num2 << endl;
    //int num3, num4;
    //cin >> num3 >> num4;
    //cout << "Number3: " << num3 << "| Number4:" << num4 << endl;

    float grade;
    cout << "Please enter your grade here;" << endl;
    cin >> grade;
    char LetterGrade;

    if(grade > 100 || grade < 0)
    LetterGrade = 'U';
    else if(grade >= 90 && grade <= 100)
    LetterGrade = 'A';
    else if(grade >= 80 && grade < 90)
    LetterGrade = 'B';
    else if(grade >= 70 && grade < 80)
    LetterGrade = 'C';
    else if(grade >= 60 && grade < 70)
    LetterGrade = 'D';
    else
    {
        LetterGrade ='F';
        cout << "U R Failed" << endl;
    }
    cout << "The letter grade corrsponding to the numerical number " << grade  << " is " << LetterGrade << "." << endl;
    //short-circuit evaluation
    //int x = 5, y = 0;
    //if(x > 2 || 10/y < 5) still pass cause its an OR ||
    //cout << "phase 1" << endl; 
    //if(x > 2 && y++ < 9)
    //y++ is a post-increment: it first uses the original value of y for comparison, 
    //then increments y by 1 after the comparison. 
    //So the actual process is: it first compares with y = 0, 
    //and 0 < 9 is true; after the comparison, y becomes 1. 
    //The entire condition is true, and the value of y has been changed to 1.
    return 0;










}


