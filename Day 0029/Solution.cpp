class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

    int countAllAplles = accumulate(apple.begin(), apple.end(), 0);

    sort(capacity.begin(), capacity.end(), greater<int>());

    for(int i = 1; i < capacity.size(); ++i){
        capacity[i] += capacity[i - 1];
    }
    int answer = lower_bound(capacity.begin(), capacity.end(), countAllAplles) - capacity.begin() + 1;

    return answer;

        
    }
};