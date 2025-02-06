#include <iostream>
#include <vector>
using namespace std;


int maxArea(vector<int>& height) {
    int st=0, endd=(height.size()-1), maxx=0, area;
    while (st<endd){
        area = (endd-st) * (min(height[st],height[endd]));
        cout<< area<<" area -"<< height[st]<< " start -"<< height[endd]<< " end\n";
        if (height[st]<=height[endd]){
            st+=1;
        }else{
            endd-=1;
        }
        maxx=max(maxx,area);
    }
    return maxx;    
    }
int main(){
    vector <int> v1={1,1};
    cout << maxArea(v1);
}