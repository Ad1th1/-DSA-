//https://www.geeksforgeeks.org/traveling-salesman-problem-tsp-implementation/
// learnt about the next_permutation function
// Naive approach

#include<bits/stdc++.h>
using namespace std;

#define V 4

int travellingsalesman(int graph[][V],int s){
    vector<int> vertex;
    for(int i=0;i<V;i++){
        if(i!=s)
            vertex.push_back(i);
    }
    int minp = INT_MAX;
    do{
        int k = s;
        int curr = 0;
        for(int i=0;i<V;i++){
            curr += graph[k][vertex[i]];
            k = vertex[i];
        }
        curr += graph[k][s];
        minp = min(minp,curr);


    }while(next_permutation(vertex.begin(),vertex.end()));
    return minp;
}

int main(){
    int graph[][V] = {{0,10,15,20},{5,0,35,25},{15,35,0,30},{20,25,30,0}};
    int s = 0;
    cout<<travellingsalesman(graph,s);

}
