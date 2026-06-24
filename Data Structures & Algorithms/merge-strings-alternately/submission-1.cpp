class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string result="";
        int n1=word1.length();
        int n2=word2.length();
        while(i<n1 && j<n2) { //merging alternate 
            result+=word1[i];
            i++;
            result+=word2[j];
            j++;
        }

        while(i<n1) {
            result+=word1[i];
            i++;
        }

        while(j<n2) {
           result+=word2[j];
           j++; 
        }
        return result;
    }
};