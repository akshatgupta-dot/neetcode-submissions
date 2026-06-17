class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length();

        while(left<right) {
            while(left<right && !isalnum(s[left])) { // if not alnum,i.e.,spaces etc
                left++; //incrementing for next char
            }

            while(left<right && !isalnum(s[right])) {
                right--; // decrementing for next char
            }
            if(tolower(s[left])!=tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }    
        return true;
    }
};
