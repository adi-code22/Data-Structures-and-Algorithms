#include <iostream>
#include <vector>
using namespace std;
// number of vertices = 3; edges = 1-2, 2-3, 3-1;

void addEdge(vector<int> x[], int u, int v){
    x[u].push_back(v);
    
}


int main(){
    int n;
    cin>>n;
    vector<int> ar[n+1];
    addEdge(ar, 1, 2);
    addEdge(ar, 2, 3);
    addEdge(ar, 3, 1);

    for(int i=1; i<=n; i++){
        cout<<"A. List for "<<i<<" head-->";
        for(auto jj: ar[i]){
            cout<<jj;
        }
        cout<<endl;
    }


    return 0;
}


