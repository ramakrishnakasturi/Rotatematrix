#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main() {

    int t,k;

    cin>>t;

    for(k=1;k<=t;k++){

        int n;

        cin>>n;

        int a[n][n],i,j;

        for(i=0;i<n;i++){

            for(j=0;j<n;j++){

                cin>>a[i][j];

            }

        }

for(i=0;i<n/2;i++){

            for(j=i;j<n-i-1;j++){

                int temp=a[i][j];

                a[i][j]=a[n-1-j][i];

                a[n-1-j][i]=a[n-1-i][n-1-j];

                a[n-1-i][n-1-j]=a[j][n-1-i];

                a[j][n-1-i]=temp;

            }

        }

         cout<<"Test Case #"<<k<<":"<<endl;

        for(i=0;i<n;i++){

            for(j=0;j<n;j++){

                //cout<<"Test Case #"<<k<<":";

                cout<<a[i][j]<<" ";

                //cout<<endl;

            }

            cout<<endl;

        }

    }

return 0;

}
