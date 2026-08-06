class KthLargest {
private:
    int n;
    vector<int> nu;
public:
    KthLargest(int k, vector<int>& nums) {
        n = k;
        nu = nums;
    }
    
    int add(int val) {
        nu.push_back(val);
        sort(nu.begin(), nu.end());
        return nu[nu.size() - n];
    }
};
