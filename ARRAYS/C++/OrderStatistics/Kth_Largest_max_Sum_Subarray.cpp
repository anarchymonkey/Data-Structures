#include<bits/stdc++>
#include<queue>
using namespace std;

/*

    INPUT : 20 -5 -1
    SUM SUBARRAYS: 20 15 14 -5 -6 -1
        => 20 15 14 -1 -5 -6
    K = 4

    OUTPUT : -1



*/

void KthLargestMaxSumSubarray(int *arr,int size,int k){

    priority_queue<int> pq;

   

}
int main(){

    int size,k;
    cin>>size;
    int *arr = new int[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cin>>k;

    KthLargestMaxSumSubarray(arr,size,k);
    return 0;
}