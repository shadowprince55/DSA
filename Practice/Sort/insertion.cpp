#include<bits/stdc++.h>

using namespace std;

void insertionsort(vector<int>& arr){
    for(int i=1;i<arr.size();++i){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main(){

    vector<int>arr = {4,2,1,3,6, 8, 1 ,5, 7,2};
    cout<<arr.size();
    insertionsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
}
