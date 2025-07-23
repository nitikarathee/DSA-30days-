check for prime number

#include<iostream>
using namespace std ;
int main(){
    int n = 4;
    bool isPrime = true ;
    for(int i=2 ; i<= n-1 ; i++){  //also we can do i*i<=n(like this way hume sirf n tak jane ki zarurat hogi)
        if(n%i==0)  //non prime
        isPrime = false ;
        break;

    }
    if(isPrime==true){
        cout<<"prime number";
    } 
    else {
        cout<<"non prime";
    }
return 0;
} 
