#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//to find the longest subarray length which has same differences
// 10 7 4 6 8 10 11
// -3 -3 2 2 2 2 1 
// so 4 is the max


int main(){

    // previous diff pd
    // current arithmetic subarray length (curr)
    // max arithmetic subarray lenght (ans)
    int n;
    cin >>n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }

    int ans = 2;
    int pd = a[1]-a[0];
    int j = 2; //while loop iterator
    int curr = 2;

    while(j < n){

        if(pd == a[j] - a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;


    

}