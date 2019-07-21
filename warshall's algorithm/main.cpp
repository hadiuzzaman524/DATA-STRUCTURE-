#include <iostream>
#include <iomanip>
#define n 4
using namespace std;
int mat2[4][4];
/*void printpath(int path[][n],int v,int u)
{
    if(path[v][u]==v)
        return ;
    printpath(path,v,path[v][u]);
    cout<< path[v][u]<< " ";
}
void printsolution(int cost[n][n],int path[n][n])
{
    for(int v=0; v<n; v++)
    {
        for(int u=0; u<n; u++)
        {
            if(cost[v][u]==99999)
            {
                cout<< setw(5)<< "inf";

            }
            else
            {
                cout<< setw(5)<< cost[v][u];
            }
            //cout<<endl;
        }
    }
    cout<<endl;
    for(int v=0; v<n; v++)
    {
        for(int u=0;u<n; u++)
        {
            if(u!=v&&path[v][u] !=-1)
            {
                cout<< "shortest path from: "<<v<< "->"<< u<< "is("<<v<< " ";

                printpath(path,v,u);
                cout<<u<< ")"<<endl;
            }
        }
    }
}

void warshal(int mat[][4])
{
int p[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            mat2[i][j]=mat[i][j];
           // p[i][j]=mat[i][j];
            if(i==j)
            {
                p[i][j]=0;
            }
            else if(mat2[i][j]==99999)
            {
                p[i][j]=i;
            }
            else
                p[i][j]=-1;
        }
    }
    for(int k=0; k<4; k++)
    {
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(mat[i][j]>mat[i][k]+mat[k][j])
                {
                    mat[i][j]=mat[i][k]+mat[k][j];
                    mat2[i][j]=mat[i][j];


                }
            }
        }
    }

  printsolution(mat2,p);
}
*/
int main()
{
    int mat[4][4]=
    {
        {7,5,99999,99999},
        {7,99999,99999,2},
        {99999,3,99999,99999},
        {4,99999,1,99999},
    };
    warshal(mat);
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<< mat2[i][j]<< " ";
        }
        cout<<endl;
    }


    return 0;
}
