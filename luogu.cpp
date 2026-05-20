#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> tem;
int n, cnt = 0;

// 深度优先搜索
void dfs(int c){

    tem.push_back(c);
    cnt += c;
    if(cnt == n){
        ans.push_back(tem);
        return;
    }else if(cnt > n){
        return;
    }else{
        for(int i = c; i < n; i++){
            dfs(i);
            cnt -= i;
            tem.pop_back();
        }
    }
}

int main(){
    
    cin >> n;

    for(int i = 1; i <= n / 2; i++){
        dfs(i);
        cnt -= i;
        tem.pop_back();
    }

    int len = ans.size();
    for(int i = 0; i < len; i++){
        int l = ans[i].size();
        cout << ans[i][0];
        for(int j = 1; j < l; j++){
            cout << "+" << ans[i][j];
        }
        cout << endl;
    }
    return 0;

}