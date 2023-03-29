#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>v,int target){
    int start=0,end=v.size()-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        int element=v[mid];
        if(element>target){
            end=mid-1;

        }else if(element==target){
            return mid;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>v{1,2,4,6,9,11,15,19,23};
    int target=10;
    int index=binary_search(v,target);
    if(index==-1){
        cout<<"target not found at any index"<<endl;

    }else{
        cout<<"target found at "<<index+1<<endl;
    }

}