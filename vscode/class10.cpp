#include<iostream>
#include <string>

using namespace std;

const int max_sides = 20;

struct Polygon{            
  int numsides;         
    float sides[max_sides];
    float perimeter;
};       


void displayPolygon(const Polygon& p){
    cout << "The polygon with" << p.numsides << "sides have perimeter of" << p.perimeter << "." << endl;
    
}

int main(){
cout << "Input your sides for the polygon here we can calculate the perimeter for you" << endl;
 Polygon p1;



}


void setSides(Polygon & p){
    for(int k = 0; k < 12; k++){
        cout << "input your" << k << "side of your polygon" << endl;
        cin >> p.sides[k];
    }

}//how many the sides 

void findPerimeter(Polygon & p){
    p.perimeter = 0;
    for(int k = 0; k < p.numsides; k++)
    {
        p.perimeter += p.sides[k];
    }

}

float finaAverage(Polygon p[], int size){
    float total = 0;
    for(int k = 0; k < size ;k ++)
    {
        findPerimeter(p[k]);
        total += p[k].perimeter;
    }
    return total/size;
}