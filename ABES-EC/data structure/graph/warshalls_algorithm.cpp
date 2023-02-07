#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;
void apsp_fllyd_warshall(int v,int war[][4]){
    int d[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(war[i][j]==0){
                if(i!=j){
                    d[i][j]=INT16_MAX/2-1000;
                }
                else {
                d[i][j]=0;
                }
            }
            else{
                d[i][j]=war[i][j];
            }
        }

    }
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                int x=d[i][j];
                int y=d[i][k]+d[k][j];
                d[i][j]=min(x,y);
            }
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int v=0;
    v=4;
    int war[4][4]={{0,5,0,0},{0,0,1,0},{8,0,0,3},{2,0,0,0}};
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<war[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    apsp_fllyd_warshall(v, war);
    return 0;
}