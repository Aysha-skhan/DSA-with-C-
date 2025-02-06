#include <iostream>
using namespace std;

double myPow(double x, int n) {
    double ans=1;
    long binForm=n;
    if (n==0){
        return ans;
    }
    if (n==1){
        return x;
    }
    if (n==-1){
        return 1/x;
    }
    if (n<0){
        x=1/x;
        binForm=-n;
        
    }
    // cout << x << "x" << endl;
    // cout << binForm <<"bin"<< endl;
    while (binForm>0){
        if (binForm%2==1){
            ans*=x;
            // cout << ans << " ans-if"<< endl;
        }
        x*=x;
        binForm/=2;
        // cout << ans << " ans"<< endl;
    }
    return ans;
}

int main(){
    int n; double x;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter Power n: ";
    cin >> n;
    cout << x << " to the power "<< n << " is: "<< myPow(x,n);
}