#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2){

    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> res(m + n);
    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            res[k]= arr2[j];
            j++;
        }
        k++;
    } 
    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            j++;
            k++;
        }}

       if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
            i++;
            k++;
        } 
    }
    return res;
}
int main(){

    vector<int> arr1;
    arr1.push_back(2);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(6);
    arr1.push_back(8);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    vector<int> arr2;
    arr1.push_back(5);
    arr1.push_back(3);
    arr1.push_back(12);
    arr1.push_back(66);
    arr1.push_back(88);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    vector<int> v= merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}