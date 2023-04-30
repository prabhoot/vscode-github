
    stack<char>st;
    for(int i:s){
        if(!st.empty()&&st.top()!=i){
            st.pop();
            count++;
        }