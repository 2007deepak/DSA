#include<iostream>
using namespace std;

int main(){

   int principle_amount, rate, time;
    int Sipmle_interest;

    cout<< "Enter the principle amount: ";
    cin>> principle_amount;
    cout<< "Enter the rate of interest: ";
    cin>> rate;
    cout<< "Enter the time in years: ";
    cin>> time;
  
    Sipmle_interest = (principle_amount * rate * time)/100;
    cout<<"The Simple Interest is: "<<  
    Sipmle_interest << endl;

    return 0;
   

}