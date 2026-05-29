class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2) return false;
        int s1count[26] = {0};
        int s2count[26] = {0};
        for(int i = 0; i < n1; i++){
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }
        if(matches(s1count, s2count)) return true;
        for(int i = n1; i < n2; i++){
            s2count[s2[i] - 'a']++;
            s2count[s2[i - n1] - 'a']--;
            if(matches(s1count, s2count)) return true;
        }
        return false;
    }
private:
    bool matches(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};
