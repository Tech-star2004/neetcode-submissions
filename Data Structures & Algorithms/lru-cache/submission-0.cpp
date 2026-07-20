class LRUCache {
private:
    int cap;
    list<pair<int, int>> cachelist;
    unordered_map<int, decltype(cachelist)::iterator> cachemap;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(cachemap.find(key) == cachemap.end()) return -1;
        auto nodeit = cachemap[key];
        cachelist.splice(cachelist.begin(), cachelist, nodeit);
        return nodeit->second;
    }
    
    void put(int key, int value) {
        if(cachemap.find(key) != cachemap.end()){
            auto nodeit = cachemap[key];
            nodeit->second = value;
            cachelist.splice(cachelist.begin(), cachelist, nodeit);
            return;
        }
        if(cachelist.size() == cap){
            int lru = cachelist.back().first;
            cachemap.erase(lru);
            cachelist.pop_back();
        }
        cachelist.push_front({key, value});
        cachemap[key] = cachelist.begin();
    }
};
