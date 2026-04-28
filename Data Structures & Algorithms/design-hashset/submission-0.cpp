class MyHashSet {
    set<int> myhash;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        myhash.insert(key);
    }
    
    void remove(int key) {
        myhash.erase(key);
    }
    
    bool contains(int key) {
        if(myhash.find(key)!=myhash.end())
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */