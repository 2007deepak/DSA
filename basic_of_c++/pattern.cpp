// patern printing in c++

#include <iostream>
using namespace std;

int main() {

        // patern 1
        //outer loop
        // for(int i=0; i<3; i++)
        // {
        //     //inner loop
        //     for(int j=1; j<6; j++)
        //     {
        //         cout<< "*";
        //     }
        //     cout << endl;
        // }
        
        // parttern 2

        // for(int i=0; i<5; i++ ) {

        //     //inner loop
        //     for(int j=0; j<5; j++){
        //         if(i == 0 || i == 4){
        //             cout<< "*";
        //         }else{
        //             if(j ==0 || j == 4){
        //                 cout<< "*";
        //             }
        //             else{
        //                 cout<< " ";
        //             }
                    
        //         }
              
        //     }
        //      cout<<endl;
        // }
         
        //pattern 3

        // for(int i = 0; i< 5; i++){

        //     for(int j = 0; j<i+1; j++)
        //     {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }

        // pattern 4
            // 1 
            // 12
            // 123
            // 1234
            // 12345
            
        // for(int i = 0; i< 5; i++){
        //     for(int j = 0; j< i+1; j++)
        //     {
        //         cout<<j+1;
        //     }
        //     cout << endl;
        // }

        // pattern 5
            // 1
            // 22
            // 333
            // 4444
            // 55555

            // for(int i= 0; i< 5; i++){
            //     for(int j =0; j<i+1; j++)
            //     {
            //         cout<< i+1;
            //     }
            //     cout << endl;
            // }
        
          //  Inverted Half pyrmid
          //patern 6
            // 12345
            // 1234
            // 123
            // 12
            // 1

            // for(int i = 5; i>0; i--){
            //     for(int j = 1; j<=i; j++){
            //         cout << j;
            //     }
            //        cout << endl;
                
            // }
            
          // pattern 7
            // *  *  *  * 
            // *      *
            // *    *
            // *  *
            // *
            for(int i =0; i<5; i++){

            for( int j=0 ; j<5-1; j++){
                if(i==0 || j==0 || j== 5-i-1 ){
                    cout << " * ";
                }
                else{
                    cout << "  ";              
                }
                
            }
             cout << endl; 
          }
         
           
         
}