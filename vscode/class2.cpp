#include <iostream>
#include <iomanip>
//Calculate the different shape area and unique case in C++
using namespace std;
const float PI = 3.14;
float radius;
float length;
float Area;
char shape;
int main(void){
    cout << "whats the shape of this figure only type the first initial" << endl;
    cin >> shape;
if(shape == 'c' || shape =='C'){
    cout << "How long is the radius of the circle" << endl;
    cin >> radius;
    Area =  radius * radius * PI ;
    cout << "The area of this circle is " << Area << "." << endl;
}
else if(shape == 's' || shape == 'S'){
    cout << "How long is the Square" << endl;
    cin >> length;
    Area = length * length;
    cout << "The area of this square is " << Area << "." << endl;
}
else
{
    cout <<"This shape is invaild"<<endl;
}
    
    return 0;
}
// Unquie case in C++
//int result,x = 10;
//if(x > 0){
//result = 1;
//}
//else
//{
// result = -1;
//}
//
//It can be present like this :
//result = (x > 0)? 1 : -1;
//the ":" can be represent the else 
//mutation:
//int result,x = 10;
//if(x > 0){
//result = 1;
//}
//else if(x < 0)
//{
// result = -1;
//}
//else
//{
//result = 0;
//}
//It can be present like this :
//result = (x > 0)? 1 :((x < 0)? -1 : 0);