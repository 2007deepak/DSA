#include<iostream>
using namespace std;

int main(){

    int a,b;
    float c;

    float Perimeter;

    cout<< "enter the three sides of triangle: ";

    cin>> a >> b >>c;

    Perimeter = a+b+c;
    cout<< "The perimeter of triangle is: "<< Perimeter << endl;

    return 0;

}