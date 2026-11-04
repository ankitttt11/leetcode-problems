class Solution {
public:
    bool isPalindrome(int x) {
    long long int rev=0;
    long long int dup=x;
    int digit;
    while(x>0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    
    if(rev==dup)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};