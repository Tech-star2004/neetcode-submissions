class KthLargest {
private:
    int n;
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        n = k;
        for(int num : nums) add(num);
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > n) pq.pop();
        return pq.top();
    }
};
