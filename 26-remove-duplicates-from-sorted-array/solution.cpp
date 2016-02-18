#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.size() < 2) return nums.size();
            int p=1; // index of current unique number
            for(int i=1; i<nums.size(); i++) {
                if(nums[i] != nums[i-1]) {
		    // place the next unique number at p
		    // note p value will increase one after no p is used.
		    // so nums[p++] = nums[i] is equal to
		    // nums[p] = nums[i];
		    // p = p+1;
                    nums[p++] = nums[i];
		    //cout << "p " << p << " i " << i << endl;
		    //for(int i=0; i<nums.size(); i++){
		    //    cout << nums[i] << endl;
		    //}
		    //cout << "-----------" << endl;
                }
            }
        return p;
        }
};

int main(void) {
    int arr[] = {1,2,3,3,4,5,5,5,6,7};
    vector<int> vv(arr, arr+10);
    Solution ss;
    int rtnp = ss.removeDuplicates(vv);
    //cout << rtnp << endl;
    //for(int i=0; i<vv.size(); i++){
    //    cout << vv[i] << endl;
    //}
    return 0;
}
