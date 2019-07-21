#include <iostream>
#define inf 9999999
#define v 8
using namespace std;
  int mat[8][8]=
       {{0,0,0,0,0,0,0,0},
        {0,0,1,1,1,0,0,0},
        {0,1,0,1,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,1,0,1,0,1,0,0},
        {0,0,0,1,1,0,1,1},
        {0,0,0,0,0,1,0,0},
        {0,0,0,0,0,1,0,0},
    };
int main()
{
   int n;
   int selected[v]={false};
   n=0;
   selected[0]=true;
   int x,y;
   cout<< "edge  :   weight"<<endl;
   while(n<v-1)
   {
       int min=inf;
       x=0,y=0;
       for(int i=0; i<v; i++)
       {
           if(selected[i])
           {
               for(int j=0; j<v; j++)
               {
                   if(!selected[j]&&mat[i][j])
                   {
                       if(min>mat[i][j])
                       {
                            min=mat[i][j];
                            x=i;
                            y=j;
                       }

                   }
               }
           }
       }
       cout<< x<<y<< mat[x][y]<<endl;
       selected[y]=true;
       n++;

   }

    return 0;
}
