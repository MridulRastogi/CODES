class Solution {
public:
// Write your code here
vector<int> findDataLocations(vector<int> locations, vector<int> movedFrom, vector<int> movedTo) {
    set <int> ans;
    for(int x:locations) ans.insert(x);
    for(int i=0;i<movedFrom.size();i++){
        if(movedFrom[i]!=movedTo[i]){
            ans.erase((movedFrom[i]));
            ans.insert(movedTo[i]);
        }
    }
    vector<int> a;
    for(int i:ans){
        a.push_back(i);
    }
    return a;
}
