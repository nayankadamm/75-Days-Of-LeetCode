// 1768. Merge Strings Alternately

// You are given two strings word1 and word2. Merge the strings by adding letters in
//  alternating order, starting with word1. If a string is longer than the other,
//   append the additional letters onto the end of the merged string.

// Return the merged string.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();
        int l;
        string str ="";
        if(l1>l2){
            l = l1;
        }
        else{
            l=l2;
        }
        for(int i=0;i<l;i++){
            if(i<l1){
                str = str+word1[i];
            }
            if(i<l2){
                str= str+word2[i];
            }
        }
        return str;
    
}
};