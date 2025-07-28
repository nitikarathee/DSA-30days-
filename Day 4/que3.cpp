// You are given an integer n. You need to check whether the number is a palindrome number or not. 
// Return true if it's a palindrome number, otherwise return false.
class Solution {
public:
    bool isPalindrome(int n) {
        int revNum = 0;
        int dup = n ;
        while(n>0){
            int ld = n % 10 ;
            revNum = (revNum*10) + ld;
            n = n/10;
        } 
    if (dup == revNum)
    return true;
    else 
    return false ;
