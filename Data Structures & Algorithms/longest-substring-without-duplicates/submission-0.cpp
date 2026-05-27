class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool seen[128] = {false};
        int left = 0;
        int maxlength = 0;
        for(int right = 0; right < s.length(); right++){
            while(seen[s[right]]){
                seen[s[left]] = false;
                left++;
            }
            seen[s[right]] = true;
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};
