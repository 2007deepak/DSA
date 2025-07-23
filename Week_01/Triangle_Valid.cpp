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

    if((a+b)>c && (b+c)>b && (a+c)>a){
        cout<< "The Triangle is valid."<<endl;

    }else{
        cout<< "The triangle is not valid."<<endl;
    }
    return 0;
}