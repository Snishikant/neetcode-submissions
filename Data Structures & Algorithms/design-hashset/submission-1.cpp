class MyHashSet {
    uint hashset[31251]={};

    uint hash(int key) {
        return 1u<<(key%32);
    }


public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashset[key/32]|=hash(key);
    }
    
    void remove(int key) {
        if(contains(key))
            hashset[key/32]&=~hash(key);
    }
    
    bool contains(int key) {
        if(hashset[key/32] & hash(key))
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