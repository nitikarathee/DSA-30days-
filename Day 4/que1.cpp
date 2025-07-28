// You are given an integer n. You need to return the number of digits in the number.
// ex 12 = 2 ; 
class Solution {
public:
    int countDigit(int n) {
int cnt = 0;
while(n>0){
    int lastDigit = n%10;
    cnt = cnt +1;
    n = n/10;
}
return cnt ;
    }
};
// I did this question on takeuforward.org