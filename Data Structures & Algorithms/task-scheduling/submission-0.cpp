class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        for(char ch : tasks) mp[ch]++;
        priority_queue<int> maxhp;
        for(auto& pair : mp){
            maxhp.push(pair.second);
        }
        queue<pair<int, int>>cldnq;
        int time = 0;
        while(!maxhp.empty() || !cldnq.empty()){
            time++;
            if(!cldnq.empty() && cldnq.front().second == time){
                maxhp.push(cldnq.front().first);
                cldnq.pop();
            }
            if(!maxhp.empty()){
                int freq = maxhp.top();
                maxhp.pop();
                if(freq > 1) cldnq.push({freq - 1, time + n + 1});
            }
        }
        return time;
    }
};
