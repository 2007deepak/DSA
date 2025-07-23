// Print maximum of three numbers

#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<< "Enter the first Number:";
    cin >> a;
    cout<< "Enter the second number: ";
    cin >> b;
    cout<< "Enter the third number: ";
    cin >> c;
 
    if(a>b && a>c){
        cout << "The maximum number is : "<< a << endl;
    }
    else if(b>a && b>c ){
        cout << "The maximum nuber is " << b << endl;
    }
    else {
        cout << "The maximum number is : " << c << endl;
    }
    return 0;

}