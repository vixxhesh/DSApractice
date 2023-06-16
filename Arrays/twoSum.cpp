#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        //[2,7,11,15]
        //target = 9

        int n = nums.size();

        map<int,int> mpp;
        for(int i = 0; i<n;i++){
            int a = nums[i];
            int required = target - a;

            if(mpp.find(required)!=mpp.end()){
                return {mpp[required], i};
            }


            mpp[a] = i;//this line is storing in the map [{2,0}, {6,1}..until we
            //find the element and if no element is found as per required then 
            //we simply return [-1,-1]
        }
        return {-1,-1};

        
    }
};