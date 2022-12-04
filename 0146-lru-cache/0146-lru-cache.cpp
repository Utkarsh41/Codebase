/*class LRUCacheut {
public:
    class node{
        public:
        int key;
        int val;
        node*next;
        node*prev;
        node(int key_,int val_){
            val=val_;
            key=key_;
            
        }
    };
    
    node*head=new node(-1,-1);
    node*tail=new node(-1,-1);
    
    unordered_map<int,node*>m;
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    void addNode(node*nNode){
        node*fw=head->next;
        nNode->next=fw;
        nNode->prev=head;
        head->next=nNode;
        fw->prev=nNode;
    }
    void deleteNode(node*dnode){
        node*dnprev=dnode->prev;
        node*dnext=dnode->next;
        dnprev->next=dnext;
        dnext->prev=dnprev;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            node*resnode=m[key];
            int res=resnode->val;
            m.erase(key);
            deleteNode(resnode);
            addNode(resnode);
            m[key]=head->next;
            return res;
        }
        return -1;        
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            node*extnode=m[key];
            m.erase(key);
            deleteNode(extnode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(key,value));
        m[key]=head->next;
    }
};


 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 *
*/
class LRUCache {
  public:
    class node {
      public:
        int key;
      int val;
      node * next;
      node * prev;
      node(int _key, int _val) {
        key = _key;
        val = _val;
      }
    };

  node * head = new node(-1, -1);
  node * tail = new node(-1, -1);

  int cap;
  unordered_map < int, node * > m;

  LRUCache(int capacity) {
    cap = capacity;
    head -> next = tail;
    tail -> prev = head;
  }

  void addnode(node * newnode) {
    node * temp = head -> next;
    newnode -> next = temp;
    newnode -> prev = head;
    head -> next = newnode;
    temp -> prev = newnode;
  }

  void deletenode(node * delnode) {
    node * delprev = delnode -> prev;
    node * delnext = delnode -> next;
    delprev -> next = delnext;
    delnext -> prev = delprev;
  }

  int get(int key_) {
    if (m.find(key_) != m.end()) {
      node * resnode = m[key_];
      int res = resnode -> val;
      m.erase(key_);
      deletenode(resnode);
      addnode(resnode);
      m[key_] = head -> next;
      return res;
    }

    return -1;
  }

  void put(int key_, int value) {
    if (m.find(key_) != m.end()) {
      node * existingnode = m[key_];
      m.erase(key_);
      deletenode(existingnode);
    }
    if (m.size() == cap) {
      m.erase(tail -> prev -> key);
      deletenode(tail -> prev);
    }

    addnode(new node(key_, value));
    m[key_] = head -> next;
  }
};