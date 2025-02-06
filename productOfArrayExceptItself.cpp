#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans(nums.size(),1);
        int pre=1,suff=1;
        for (int i=1;i<nums.size();i++){
            pre=pre*(nums[i-1]);
            ans[i]=pre;
        }
        for (int j= (nums.size()-2);j>=0;j--){
            suff*=nums[j+1];
            ans[j]=ans[j]*suff;
        }
        return ans;
    }

int main(){
    vector <int> vv;
    vector <int> v1={1,2,3,4};
    vv = productExceptSelf(v1);
    for (int i=0;i<vv.size();i++){
        cout<< vv.at(i) <<" ";
    }
}