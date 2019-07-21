#include  <iostream>
#include <stdio.h>
using namespace std;
  int main() {
  int matrix[6][6];
    for(int i = 0;i < 6;i++) {
        for(int j = 0;j < 6;j++) {
             scanf("%d",&matrix[i][j]);
        }
    }
    int maxsum = -1000,jj = 0;
    for(int i = 0;i < 4;i++) {
        int sum = 0;
        for(int j = jj;j < jj+3;j++) {
            sum += matrix[i][j];
            cout<<j<< " "<< jj<<endl;
            if(j==jj) sum += matrix[i+1][jj+1];
            sum += matrix[i+2][j];
        }
        jj = (jj < 3) ? jj+1 : 0;
        if(sum > maxsum) maxsum = sum;
        if(jj != 0) i--;
    }
    printf("%d",maxsum);
    return 0;
  }
