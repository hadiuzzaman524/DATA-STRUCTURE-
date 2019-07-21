#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
using namespace std;
class graph
{
    int v;
    list <int> *adj;
public:

    graph(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void add_adj(int v,int w)
    {
        adj[v].push_back(w);
    }
    void find_ind()
    {
        vector <int>indegree(v,0);
        vector<int>::iterator it2;
        list<int>::iterator it;
        for(int i=0; i<v; i++)
        {
            for(it=adj[i].begin(); it!=adj[i].end(); it++)
            {
                indegree[*it]++;
            }
        }
         queue<int>q;
         vector<int>vac;
        for(int i=0; i<v; i++)
            if(indegree[i]==0)
            q.push(i);
            while(!q.empty())
            {
                int x;
                x=q.front();
                vac.push_back(x);
                q.pop();
                for(it=adj[x].begin(); it !=adj[x].end(); it++)
                {
                    if(--indegree[*it]==0)
                        q.push(*it);
                }
            }
            cout<< "topological sorting result is: "<<endl;
            for(int i=0; i<v; i++)
            {
                cout<< vac[i]<< " ";
            }
            cout<<endl;
    }


};
int main()
{
    graph g(7);
    g.add_adj(0, 2);
    g.add_adj(3, 2);
    g.add_adj(1, 3);
    g.add_adj(4, 2);
    g.add_adj(1, 5);
    g.add_adj(6, 5);
    g.add_adj(6,0);
    g.find_ind();

    return 0;
}
