/** 
 * Ram makes a plan for the new year. He decides to sell the
 *  products and writes down the price for N days. The prices 
 * are denoted by an array V[] of N elements. Looking at the 
 * sequence he decides that for the ith product, he is going 
 * to get a profit that equals to (Vj - Vi), where j is the lowest 
 * index just greater than i and Vj >= Vi. If there is no such j, 
 * then his profit will be equal to Vi. Find the total profit of Ram.
 * */ 

#include<iostream>
#include<vector> 
#include<stack> 
using namespace std;
int profit(vector<int>v){
    stack<int>s; 
    for(int i=0;i<(int)v.size();i++){
        s.push(v[i]); 
    }
    int maxYet{INT_MIN}; 
    int profit(0); 
    while(!s.empty()){
        if(s.top()<)
    }
}
int main()
{
 vector<int>v = { 5 ,4, 6, 2 ,1}; 
 cout<<profit(v)<<endl;    
}