#include <iostream>
#include <cstring>
using namespace std;

#define INF 9999999

// number of vertices in grapj
#define V 8

// create a 2d array of size 5x5
//for adjacency matrix to represent graph

int G[V][V] =
{
    {0,4,0,10,2,0,0,0},
    {4,0,18,8,0,0,0,0},
    {0,0,0,11,0,0,0,0},
    {10,8,11,0,5,0,11,9},
    {2,0,0,5,0,0,0,0},
    {0,0,0,0,0,0,1,2},
    {0,0,0,11,0,1,0,0},
    {0,0,0,9,0,2,0,0},


};

int main ()
{

    int no_edge;
    int selected[V]={false};


    no_edge = 0;

    selected[0] = true;

    int x;            //  row number
    int y;            //  col number


    cout << "Edge" << " : " << "Weight";
    cout << endl;
    while (no_edge < V - 1)
    {

        //For every vertex in the set S, find the all adjacent vertices
        // , calculate the distance from the vertex selected at step 1.
        // if the vertex is already in the set S, discard it otherwise
        //choose another vertex nearest to selected vertex  at step 1.

        int min = INF;
        x = 0;
        y = 0;

        for (int i = 0; i < V; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < V; j++)
                {
                    if (!selected[j] && G[i][j])   // not in selected and there is an edge
                    {
                        if (min > G[i][j])
                        {
                            min = G[i][j];
                            x = i;
                            y = j;
                        }

                    }
                }
            }
        }
        cout << x <<  " - " << y << " :  " << G[x][y];
        cout << endl;
        selected[y] = true;
        no_edge++;
    }

    return 0;
}
