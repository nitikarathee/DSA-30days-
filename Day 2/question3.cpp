// sum of first n numbers 
#include<iostream>
using namespace std ;
int main(){
    int n =5;
    int oddsum =0 ;
    // print odd numbers
    for(int i =1 ;i<=n ; i++){
        if (i%2 != 0){
            oddsum += i ; 
            
        }
        cout<<oddsum <<endl ;
    }
    return 0;
}