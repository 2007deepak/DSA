// Find factorial of a number

    #include<iostream>
    using namespace std;

    int main() {
    int n;
    cout<< "Enter a number: ";
    cin >> n;

    int factorial = 1;

    while(n>=1){
        factorial = factorial * n;
        n--;
    }
    cout << "The Factorial is: " << factorial << endl;

 }

