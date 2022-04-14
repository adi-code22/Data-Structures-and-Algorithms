#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> x[], int u, int v){
    x[u].push_back(v);
    x[v].push_back(u);

}

int main(){
    int n;
    cin>>n;

    vector<int> ar[n + 1];

    addEdge(ar, 1, 3);
    addEdge(ar, 3, 7);
    addEdge(ar, 3, 4);
    addEdge(ar, 4, 5);
    addEdge(ar, 4, 2);
    addEdge(ar, 4, 8);
    addEdge(ar, 6, 7);
    

    for(int i=1 ; i<=n; i++){
        cout<<"A. List for "<<i<<" head->>";

        for(auto jj : ar[i]){
            cout<<jj<<"-->";
        }
        cout<<endl;
    }

    



    

    return 0;

}