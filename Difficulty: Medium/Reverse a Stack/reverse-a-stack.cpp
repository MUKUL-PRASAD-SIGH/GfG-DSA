class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        
        int top=st.top();
        st.pop();
        reverseStack(st);
        insertSort(st,top);
    }
    void insertSort(stack<int> &st,int elem){
        //if(st.empty() || elem>=st.top() ){
        //    st.push(elem);
        //    return;
        //}
        //int top=st.top();
       // st.pop();
        if (st.empty()) {
        st.push(elem);
        return;
    }

    int top = st.top();
    st.pop();

    insertSort(st, elem);

    st.push(top);
        //insertSort(st,elem);
        
        
        
    }
};