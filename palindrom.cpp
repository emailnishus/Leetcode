class Solution {
public:
    bool isPalindrome(int x) {
        int rev_num =0,rem;

        do{
           rem = x % 10;
           rev_num = rev_num * 10 + rem;
           x /= 10; 
        }
        while(x!=0);
        if(x == rev_num){
            return true;
        }
        else{
            return false;
        }
        }
    
    };