//Function Overloading

#include<iostream>
#include<cmath>


float area(float side)
{
    return side * side;
}
//int area(float side); not allow 
float area(float length, float width)// area of 
{
    length * width;
}


float area(float radius, char shape)//area of circle
{
    if(shape == 'c' || shape == 'C')
    {
        return acos(-1) * radius * radius;// acos(-1) means pi
    }
    else 
    {
        return -1.0;
    }
}

using namespace std;

int main()
{
    float side1 = 4.7, side2 = 3.6;
    cout << "The area of circle is" << area(5.0, 'c') << endl;
    cout << "The area of rectangle is"<< area(3.0f,4.0f) << endl; // you need t specify those are floating point numbers
    cout << "The area of rectangle is"<< area(side1,side2) << endl;
    cout << "Square" << area(5) << endl;

}


