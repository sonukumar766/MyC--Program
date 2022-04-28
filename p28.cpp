// c++ program to find the maximum sum such that no two elements are adjacent
#include<bits/stdc++.h>
using namespace std;
// function to find the maximum of sum
int findMaxSum(vector<int> arr, int N){

    // declare dp array
    int dp[N][2];
    if(N==1){
        return arr[0];
    }

    // initailizing the values in dp
    dp[0][0]=0;
    dp[0][1]=arr[0];
    
    //Loops to find the maximum possible sum
    for(int i=0;i<N; i++){
        dp[i][1]=dp[i-1][0]+arr[i];
        dp[i][0]=max(dp[i-1][1], dp[i-1][0]);
    }
    // return the maximum sum
    return max(dp[N-1][0], dp[N-1][1]);

}
// drive code
int main(void){
    // Creating the array
    vector<int> arr={5,5,10,100, 10,5};
    int N=arr.size();
    cout<<findMaxSum(arr,N)<<endl;


}