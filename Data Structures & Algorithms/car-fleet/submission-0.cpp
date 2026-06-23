class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 0) return 0;
        
        vector<pair<int, double>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};
        }
        
        sort(cars.begin(), cars.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
            return a.first > b.first;
        });
        
        stack<double> fleetTimes;
        
        for (int i = 0; i < n; i++) {
            double currentTime = cars[i].second;
            
            if (fleetTimes.empty() || currentTime > fleetTimes.top()) {
                fleetTimes.push(currentTime);
            }
        }
        
        return fleetTimes.size();
    }
};