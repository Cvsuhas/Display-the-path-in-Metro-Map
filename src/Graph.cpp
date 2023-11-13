#include "Graph.hpp"
using namespace std;

void Graph::Display_stops() {
    cout<<GREEN<<"**GREEN LINE**"<<RESET<<endl;
    for(int i=0;i<=28;i++) {
        cout<<RED<<i<<RESET<<"  "<<GREEN<<Getgreen(i)<<RESET<<endl;
    }
    cout<<endl;
    cout<<PURPLE<<"**PURPLE LINE**"<<RESET<<endl;
    for(int i=0;i<=36;i++) {
        cout<<RED<<i<<RESET<<"  "<<PURPLE<<Getpurple(i)<<RESET<<endl;
    }

}

void Graph :: Print_parent(int dst,vector<int>&parent,string s) {
    if(dst == -1)
        return;
    Print_parent(parent[dst],parent,s);
    if(s == "Green")
        cout<<GREEN<<Getgreen(dst)<<RESET<<" -> ";
    else if (s == "Purple")
        cout<<PURPLE<<Getpurple(dst)<<RESET<<" -> ";
}

void Graph :: Print_platform(int src,int dst,string s) {
    cout<<endl;
    if(s=="Green") {
        if(src==13 && src>dst)
            cout<<RED<<"PLATFORM 3"<<RESET<<endl;
        else if(src ==13 && src<dst)
            cout<<RED<<"PLATFORM 4"<<RESET<<endl;
        else if(src>dst && src!=13)
            cout<<RED<<"PLATFORM 1"<<RESET<<endl;
        else
            cout<<RED<<"PLATFORM 2"<<RESET<<endl;
    }
    else {
        if(src>dst)
            cout<<RED<<"PLATFORM 1"<<RESET<<endl;
        else
            cout<<RED<<"PLATFORM 2"<<RESET<<endl;
    }
}

void Graph :: Shortest_path(int src,int dst,string s) {
    if(s=="Green") {
        p = ptr;
    }
    else if(s=="Purple") {
        p = ptr1;
    }
    vector<int>dist(N,INF);
    vector<int>parent(N,-1);
    priority_queue<pair<int,int>>pq;
    dist[src] = 0;
    pq.push({0,src});
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for(auto i : *(p+u)) {
            int v = i.first;
            int w = i.second;
            if(dist[v]> dist[u]+w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
                parent[v] = u;
            }
        }
    }

    Print_platform(src,dst,s);
    Print_parent(parent[dst],parent,s);
    if(s=="Green") {
        cout<<GREEN<<Getgreen(dst)<<RESET<<endl;
        cout<<GREEN<<"Total distance is : "<<dist[dst]<<"Km"<<RESET<<endl;
    }
    else {
        cout<<PURPLE<<Getpurple(dst)<<RESET<<endl;
        cout<<PURPLE<<"Total distance is : "<<dist[dst]<<"Km"<<RESET<<endl;
    }
}

Graph :: ~Graph() {
    delete[] p;
}
