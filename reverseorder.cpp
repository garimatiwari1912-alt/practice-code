#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//     vector<int>v;
//     int size;
//     cout<<"enter the size of array";
//     cin>>size;
//     cout<<"enter the elements of array";
//     for(int i=0;i<size;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);

//     }
//     for(int i=0;i<size;i++){
//         cout<<v[i] <<" ";
       
//     }
//      cout<<endl;
// vector<int>v2 (v.size());
// for(int i=0;i<v.size();i++){
//     v2[i]=v[size-1-i];
// cout<<v2[i] <<" ";
// }

//or 


// void display(vector<int>&a) 
// {
//     for(int i=0;i<a;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     }

// vector<int>v1;
// v1.push_back(1);
// v1.push_back(7);
// v1.push_back(6);
// v1.push_back(44);
// v1.push_back(3);
// v1.push_back(5);
// display(v1);
// vector <int> v2(v1.size());
// for(int i=0;i<v2.size();i++){
//     v2[i]=v1[v1.size()-1-i]; //i+j=size-1
// }
// display(v2);

//reverse without using another array

// void display(vector<int>&a) 
// {
//     for(int i=0;i<a;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     }
// vector<int>v;
// v.push_back (1);
// v.push_back(7);
// v.push_back(6);
// v.push_back(44);
// v.push_back(3);
// v.push_back(5);
// display(v1);
// int i =0;
// int j =v.size()-1;
// // while(i<=j){
// //     //swap v[i]and v[j]
// //     int temp =v[i];
// //     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
// }
// display(v);
//by for loop
// for(int i=0,j=v.size()-1;i<=j;i++,j--){
//     int temp = v[i];
//     v[i]=v[j];
//     v[j]=temp;
// }
// display(v);

//reverse the part 

void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
}
void reversepart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp= v[i];
        v[i]=v[j];  
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main() {
    vector<int>v;
v.push_back(3);
v.push_back(5);
v.push_back(2);
v.push_back(1);
v.push_back(90);
display(v);
cout<<endl;
reversepart(1,4,v);//here index 1 to 4 is interchanged 
cout<<endl;
display(v);
}
 