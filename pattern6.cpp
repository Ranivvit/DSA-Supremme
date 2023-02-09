//Inverted numeric pyramid
//Manish kumar
/*

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


return 0;
}