#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<string>
#include<algorithm>
#include <stdlib.h>
#include <sstream>
#include <set>
using namespace std;
//question 1
vector<int> coins(int total){
    vector<int> ans;
    vector<int> coin ={25,10,5,1};
    for(int i=0;i<4;i++){
        ans.push_back(total/coin[i]);
        total%=coin[i];
    }
    return ans;
}
//question 2
int maxProfit(vector<int>& prices) {
  int maxPro = 0;
  int minPrice = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;
}
int main(int argc, const char * argv[]) {
    for(auto a:coins(138)){
        cout<<a<<endl;
    }
    return 0;
}

