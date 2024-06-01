#include <iostream>
#include <vector>
using namespace std;

void queryResults(int limit, vector<vector<int>>& queries, vector<int>& result) {
        vector<int> balls;
        for(int i=0; i<limit+1; i++){
            balls.push_back(0);
        }
        // for(int i=0; i<balls.size(); i++){
        //     cout << balls[i] << " ";
        // }cout << endl;
        
        // vector<int> result;
        
        int n = queries.size();
        // cout << n << endl;
        for(int i=0; i<n; i++){
            balls[queries[i][0]] = queries[i][1];
            int count = 0;
            vector<int> temp;
            for(int j=0; j<balls.size(); j++){
                temp.push_back(0);
            }
            for(int j=0; j<balls.size(); j++){
                temp[balls[j]-1] = 1;
            }
            for(int j=0; j<temp.size(); j++){
                if(temp[j]>0) count++;
            }
            result.push_back(count);            
        }
    }

int main(){
    int limit = 4;
    vector<vector<int>> queries = {{0,1},{1,2},{2,2},{3,4},{4,5}};
    // vector<vector<int>> queries = {{1,4},{2,5},{1,3},{3,4}};
    vector<int> result;
    queryResults(limit,queries,result);
    int n = result.size();
    for(int i=0; i<n; i++){
        cout << result[i] << " ";
    }
    return 0;
}