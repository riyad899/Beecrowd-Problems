#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution s;
    vector<int>nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        nums.push_back(value);
    }
    int newSize = s.removeDuplicates(nums);
    cout << "After removing duplicates: ";
    for(int i = 0; i < newSize; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}