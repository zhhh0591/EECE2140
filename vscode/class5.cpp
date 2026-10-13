#include<iostream>
#include<cmath>
using namespace std;


double getArea(char shape, double a, double b = 0){ //default 0
    if (shape == 's'){
        return a * a;
    }
    else if (shape == 'c'){
        return M_PI * a * a;
    }
    else if (shape == 'r'){
        return a * b;
    }
    return 0;
}

// total length of the boundary (perimeter / circumference)
double getTotlength(char shape, double a, double b = 0){
    if (shape == 's'){
        return 4 * a;
    }
    else if (shape == 'c'){
        return 2 * M_PI * a;
    }
    else if (shape == 'r'){
        return 2 * (a + b);
    }
    return 0;
}

int main(){
    char input;
    char shape;
    double a = 0, b = 0;

    cout << "Hi there what shape do you want :" << endl;
    cout << "type the first letter of the shape you want" << endl;
    cin >> input;

    switch(input){
    case 's':
    case 'S'://square
        shape = 's';
        cout << "please type how long the side of square is " << endl;
        cin >> a;
        break;

    case 'c':
    case 'C'://circle
        shape = 'c';
        cout << "please type the radius of the circle " << endl;
        cin >> a;
        break;

    case 'r':
    case 'R'://rectangle
        shape = 'r';
        cout << "please type the length of the rectangle " << endl;
        cin >> a;
        cout << "please type the width of the rectangle " << endl;
        cin >> b;
        break;

    default:
        cout << "Your input is invalid" << endl;
        return 1;
    }

    cout << "Area = " << getArea(shape, a, b) << endl;
    cout << "Total length = " << getTotlength(shape, a, b) << endl;

    return 0;
}
