#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    //input block
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    //sum of subarrays
    int sum = 0;
    for(int i =0; i<n;i++){
        sum = 0;
        for(int j = i; j<n;j++){
            sum += a[j];
            cout << sum << endl;
        }
    }   


    return 0;
}