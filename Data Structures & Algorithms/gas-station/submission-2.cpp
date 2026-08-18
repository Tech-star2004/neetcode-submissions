class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0;
        int tc = 0;
        for(int i = 0; i < gas.size(); i++){
            tg += gas[i];
            tc += cost[i];
        }
        if(tc > tg) return -1;
        int ccot = 0;
        int strtgidx = 0;
        for(int i = 0; i < gas.size(); i++){
            ccot += (gas[i] - cost[i]);
            if(ccot < 0){
                strtgidx = i + 1;
                ccot = 0;
            }
        }
        return strtgidx;
    }
};
