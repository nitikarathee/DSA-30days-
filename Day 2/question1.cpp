// find character lowercase or uppercase 
#include<iostream>
using namespace std ;
int main(){
    char letter;
    cout<<"enter a letter" <<endl;
    cin>>letter;
    if('a'<= letter && letter <= 'z' ){
        cout<<"lowercase";
    }
    else if ('A' <= letter && letter <= 'Z' ){
        cout<<"uppercase";
    }
    return 0;
}

