#include<iostream>
using namespace std;

int main(){
    int num = 7;
    int even = 0 ;
    int odd = 0 ;
    
        while(num != 0){
            cout << "Enter an integer: ";
            cin >> num;
            if(num%2 == 0 && num != 0){
                even = even + 1 ; }
            else if(num%2 == 1){
                odd = odd + 1;}
            else if(num==0){
                even = even;
            }
        }
    
    
    cout << "#Even numbers = " << even << "\n" ;
    cout << "#Odd numbers = " << odd ;
    return 0;

}
