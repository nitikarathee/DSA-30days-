// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
class Solution {
public:
    int reverseNumber(int n) {
        int revNum =0;
        while(n>0){
            int ld =  n %10;
            revNum = (revNum *10) + ld ;
            n = n/10;
        }return revNum;

    }
};