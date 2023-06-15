#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//using 2 XOR we will find the missing number in the array
//Time Complexity: O(N)
//Space Complexity: O(1)
//N= 10^5

    int missingNum(vector<int>& nums) {
        //using Xor 
        int x1 = 0, x2 = 0;
        int N = nums.size();
        //cout << N << endl;
        sort(nums.begin(), nums.end());     
        //x1 = 1 2 3 4 5 
        //x2 = 1 2 4 5
        for(int i = 0; i<N;i++){
            //cout << nums[i];
            x2 = x2^ nums[i];
            x1 = x1 ^ (i);
        }
        x1 = x1 ^ N;
        return (x1^x2);
    }


int main(){
    //cout << "Hello2"  << endl;
    vector <int> a;
    int n;
    cin >> n;
    int k;
    for(int i = 0; i< n;i++){
        cin >> k;
        a.push_back(k);
    }
    //cout << "Hello3" <<endl;
    cout << "The missing number is " << missingNum(a);
    //cout << "Hello4";
    return 0;
}