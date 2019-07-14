#include<bits/stdc++.h>
#include<queue>
using namespace std;

int minCost(int *arr,int size){
    priority_queue<int,vector<int>, greater<int> > pq;
    priority_queue<int,vector<int>, greater<int> > pq1;
    static int cost = 0;

    for(int i = 0 ; i < size ; i++){
        pq.push(arr[i]);
    }

    int min = pq.top();
    pq.pop();
    int secMin = pq.top();
    pq.pop();
    cost = min + secMin;
    //cout<<"Cost is "<<cost;
    pq1.push(cost);

    while(!pq.empty()){
        min = pq.top();
        cost += min;
        //cout<<"The present cost is"<<cost;
        pq1.push(cost);
        pq.pop();
    }
        cost = 0;
    while(!pq1.empty()){
        cost += pq1.top();
        pq1.pop();
    }
    return cost;
}

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];

    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    int res = minCost(arr,size);
    cout<<res;
}