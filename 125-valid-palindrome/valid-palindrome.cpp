class Solution {
public:
    bool isPalindrome(string s) {
        int k=0,j=0,n=s.size();
        char temp[n];
        for(int i=0;i<s.size();i++)
        {
            if(97<=s[i] && s[i]<=122 || 48<=s[i] && s[i]<=57 )
                temp[k++]=s[i];
            else if(65<=s[i] && s[i]<=90)
                temp[k++]='a'+(s[i]-'A');
            
        }
        // cout<<temp;
        for(int i=k-1;i>=k/2;i--)
        {
            if(temp[i]!= temp[j++])
                return false;
        }
        return true;
    }
};
