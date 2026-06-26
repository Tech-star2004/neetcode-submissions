class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l, r, i, mid;
        if(piles.size() == h) return *max_element(piles.begin(), piles.end());
        else{
            l = 1;
            r = *max_element(piles.begin(), piles.end());
            int ans = r;
            while(l <= r){
                mid = l + (r - l) / 2;
                long long total_hours = 0;
                for(i = 0; i < piles.size(); i++){
                    total_hours += (piles[i] + mid - 1) / mid;
                }
                if(total_hours <= h){
                    ans = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            return ans;
        }
        
    }
};
