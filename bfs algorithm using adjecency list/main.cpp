#include <iostream>
#include <list>
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
    void add_adjecence(int v,int w)
    {
        adj[v].push_back(w);
    }
    void bfs(int s)
    {
        bool *visited;
        visited=new bool[v];
        for(int i=0; i<v; i++)
            visited[i]=false;
        list <int>queue;
        visited[s]=true;
        queue.push_back(s);
        list<int>::iterator it;
        while(!queue.empty())
        {
            s=queue.front();
            cout<<"-> "<<s<<" " ;
            queue.pop_front();
            for(it=adj[s].begin(); it!=adj[s].end(); it++)
            {
                if(!visited[*it])
                {
                    visited[*it]=true;
                    queue.push_back(*it);
                }
            }
        }

    }
};
int main()
{
    graph g(5);
    g.add_adjecence(4,1);
    g.add_adjecence(4,3);
    g.add_adjecence(3,3);
    g.add_adjecence(2,1);
    g.add_adjecence(1,2);
    g.add_adjecence(2,3);
    g.bfs(2);
    return 0;
}
