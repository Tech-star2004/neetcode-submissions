class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0);
        stack<int> index;
        for(int i = 0; i < n; i++){
            while(!index.empty() && temperatures[i] > temperatures[index.top()]){
                int prevday  = index.top();
                index.pop();
                res[prevday] = i - prevday;
            }
            index.push(i);
        }
        return res;
    }
};
