#include <iostream>

using namespace std;
void prims(int ar[4][4])
{
    int n=0;
    bool selected[4]={false};
    //selected[0]=0;
    selected[0]=true;
    int x,y;
    while(n<4-1)
    {
        int min=9999999;
        x=0,y=0;
        for(int i=0; i<4; i++)
        {
            if(selected[i])
            {
                for(int j=0; j<4; j++)
                {
                    if(!selected[j]&&ar[i][j])
                    {
                        if(min>ar[i][j])
                        {
                            min=ar[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }

            }
        }
        cout<< x+1<< "-"<< y+1<< " " << ar[x][y]<<endl;
        selected[y]=true;
        n++;

    }
}

int main()
{
   /*int G[8][8] =
{
    {0,4,0,10,2,0,0,0},
    {4,0,18,8,0,0,0,0},
    {0,0,0,11,0,0,0,0},
    {10,8,11,0,5,0,11,9},
    {2,0,0,5,0,0,0,0},
    {0,0,0,0,0,0,1,2},
    {0,0,0,11,0,1,0,0},
    {0,0,0,9,0,2,0,0},
*/
int G[4][4]={
{0,2,4,0},
{2,0,6,4},
{4,6,1,0},
{0,4,1,0},
};
prims(G);
    return 0;
}
