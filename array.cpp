#include <iostream>
using namespace std;
void changeArray(int array1[],int sz){
    for (int i=0;i<sz;i++){
        array1[i]*=2;
    }

}
int prodAndSum(int arr1[], int siz, int &summ, int &prod){
    summ=0;
    prod=1;
    for (int i=0;i < siz;i++){
        prod*=arr1[i];
        summ+=arr1[i];
    }
    return 0;
}
void swap_min_max(int arr1[], int siz){
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int ind1,ind2=-1;
    for (int j=0;j<siz;j++){
        if (smallest>arr1[j]){
            smallest=arr1[j];
            ind1=j;
        }
        if (largest<arr1[j]){
            largest=arr1[j];
            ind2=j;
        }
    }
    swap(arr1[ind1],arr1[ind2]);
}

void intersection(int arr1[],int size1, int arr2[], int size2){
    for (int i=0;i < size1;i++){
        for (int j=0;j < size2;j++){
            if (arr1[i]==arr2[j]){
                cout << arr1[i]<< " ";
            }
        }
    }
}
int main(){
    int sizee,s,p,sizee2;
    cout << "Enter the size of array 1: ";
    cin >> sizee;
    int arr1[sizee];
    cout << "Enter "<< sizee << " elements: ";
    for (int i=0;i<sizee;i++){
        cin >> arr1[i];
    }
    cout << "Enter the size of array 2: ";
    cin >> sizee2;
    int arr2[sizee2];
    cout << "Enter "<< sizee2 << " elements: ";
    for (int i=0;i<sizee2;i++){
        cin >> arr2[i];
    }
    // changeArray(arr,sizee);
    // cout<< "Array is: ";
    // for (int i=0;i<sizee;i++){
    //     cout << arr[i] << " ";
    // }
    // prodAndSum(arr,sizee,s,p);
    // cout<< "\nsum is: "<< s << " & product is: "<< p;
    // swap_min_max(arr,sizee);
    // cout<< "Array is: ";
    // for (int i=0;i<sizee;i++){
    //     cout << arr[i] << " ";
    // }
    intersection(arr1, sizee, arr2, sizee2);
}
