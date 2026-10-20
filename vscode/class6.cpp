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

int gen_rand(int high)
{
    if(high <= 0)
    {
        return -1;
    }

    return rand() % (high +1);
}

int gen_rand(int low, int high)
{
    if(low > high)
    {
        cout << "The second input must be greater than the first one." << endl;
        return -2;
    }
    return rand() % (high - low + 1) + low;
}

void print_num(int num){
    cout << "The current number is " << num <<"." << endl;
    num++;
}

void process_rand(int low, int high, int& num_pos, int& num_neg, float )
{
    int cur_rand;
    float total = 0;
    bool verbose = true;
    for(int k = 0; k < 10; k++)
    {
        cur_rand = rand() % (high - low + 1) + low; //the range
    if(verbose)
    {
        cout << cur_rand << "|" << endl;
    }
    if(cur_rand >= 0)
    {
        num_pos++;
    }
    else
    {
        num_neg++;
    }
    total += cur_rand;
    }
    if(verbose){cout << endl;}
}

using namespace std;

int main()
{
    srand(time(0));


    float side1 = 4.7, side2 = 3.6;
    cout << "The area of circle is" << area(5.0, 'c') << endl;
    cout << "The area of rectangle is"<< area(3.0f,4.0f) << endl; // you need t specify those are floating point numbers
    cout << "The area of rectangle is"<< area(side1,side2) << endl;
    cout << "Square" << area(5) << endl;

}


