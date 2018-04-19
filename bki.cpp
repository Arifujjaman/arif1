#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[20],ar1[3][3];
    int i,j,k=0,l,m,n;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>ar1[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<ar1[i][j]<<" ";
        }
        cout<<endl;
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ar[k++]=ar1[i][j];
        }

    }
    for(i=0;i<9;i++){
        cout<<ar[i]<<" "<<endl;;
    }
    j=-1;
    for(i=0;i<3;i++){
        j=j+3;
        cout<<ar[j]<<" ";
        }
    return 0;

}
