#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<int> > v(6);
    for (int i = 0; i < 6; i++) {
        v[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> v[i][j];
        }
        }
int max=-999,sum;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
        sum=v[i][j]+v[i][j+1]+v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2];
        if(max<sum)
        max=sum;
        }
    }
    cout<<max;
    return 0;
}
