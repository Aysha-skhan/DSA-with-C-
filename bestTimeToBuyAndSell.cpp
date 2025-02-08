#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minn=INT_MAX, profit=0, maxx=0,pr;
    for (int k=0; k< prices.size();k++){
        minn=min(minn,prices[k]);
        pr=prices[k]-minn;
        if (pr > profit){
            profit=pr;
        }else{
            maxx+=profit;
            minn=prices[k];
            profit=0;
        }
    }
    if (profit > 0){
        maxx+=profit;
    }
return maxx;        
}
int main(){
    vector <int> v1={7,6,4,3,1};
    cout << maxProfit(v1);
}
