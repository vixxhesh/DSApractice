#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//find consecutive ones in an array
//TC - 0[N]
//SC- 0[1]
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max= 0, counter= 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 1){
                counter++;
            }
            if(nums[i]==0){
                counter = 0;
            }
            
            if(counter>max){
                max = counter;
            }
        }
        return max;
        
    }
//Inputline1 - N
//InputLine2 - array 
//Output - Number of ones
    int main(){
        vector <int> a;
        int n;
        cin >> n;
        int k;
        for(int i =0; i<n;i++){
            cin >> k;
            a.push_back(k);
        }
        cout << findMaxConsecutiveOnes(a);
    }
