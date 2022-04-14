#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

void addEdge(vector<int> x[], int u, int v){
    x[u].push_back(v);
    x[v].push_back(u);
}

int main(){

    int n;
    cout<<"Enter the number of Nodes\n";
    cin>>n;

    vector<int> ar[n+1];
    queue<int> q;
    bool visited[n+1];
    memset(visited, false, sizeof(visited));

    addEdge(ar, 1, 2);
    addEdge(ar, 1, 3);
    addEdge(ar, 2, 4);
    addEdge(ar, 5, 2);
    addEdge(ar, 5, 3);
    addEdge(ar, 4, 5);
    addEdge(ar, 5, 6);
    addEdge(ar, 6, 4);

    // value i defines on which node the BFS algo should begin!
    int i = 3;
    visited[i] = true;
    q.push(i);

    while(!q.empty()){
        int s = q.front();
        cout<<s<<" ";
        q.pop();
        for(auto j: ar[s]){
            if(visited[j] == false){
                visited[j] = true;
                q.push(j);
            }
        }
    }




    return 0;
}