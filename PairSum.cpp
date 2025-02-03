#include <iostream>
#include <vector>
using namespace std;

vector <int> Pair_Sum(vector <int> v, int targ){
    vector <int> ans;
    int st=0, endd=(v.size())-1;
    while (st<endd){
        int summ = v[st]+v[endd];
        if (summ>targ){
            endd-=1;
        }else if (summ<targ){
            st+=1;
        }else{
            ans.push_back(st);
            ans.push_back(endd);
            break;
        }
    }
    return ans;
}
int main(){
    int sz,itemm,targett;
    vector <int> vec,ans;
    cout<< "Enter size of array: ";
    cin >> sz;
    cout<< "Enter array(vector): ";
    for (int i=0;i<sz;i++){
        cin >> itemm;
        vec.push_back(itemm);
    }
    cout<< "Enter target: ";
    cin >> targett;
    ans=Pair_Sum(vec,targett);
    cout << ans.front()<< ", "<< ans.back();

}