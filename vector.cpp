#include<iostream>
#include <vector>
using namespace std;
int linear_search(vector <int> v,int target){
    int ind=0;
    for (int val: v){
        if (val==target){
            return ind;
        }else{
            ind+=1;
        }
    }
    return -1;
}

void reverse_it(vector <int> &v){
    int start=0;
    int ending=(v.size()-1);
    while (start<ending){
        swap(v.at(start),v.at(ending));
        start+=1;
        ending-=1;
    }
}

int main(){
    int t;
    vector <int> v1 = {1,2,3,6,8,9};
    // cout<< "Enter target: ";
    // cin >> t;
    // int result = linear_search(v1, t);
    // if (result == -1){
    //     cout << "Not Found";}
    // else{
    //     cout << result;}
    reverse_it(v1);
    for (int i=0;i<v1.size();i++){
        cout<< v1.at(i) <<" ";
    }

}