class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>visted(n,-1);
        queue<int>q;
        q.push(0);
        visted[0]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : rooms[node]){
                if(visted[it]==-1){
                visted[it]=1;
                q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(visted[i]==-1) return false;
        }
        return true;
    }
};