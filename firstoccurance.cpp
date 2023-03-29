#include<iostream>
#include<vector>
using namespace std;
int first_occurance(vector<int>v ,int target){
    int start=0;
    int ans=-1;
    int end=v.size()-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        int element=v[mid];
        if(element==target){
            ans=mid;
            start=mid+1;



        }else if(element>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
    

}
int main(){
    vector<int> v{1,3,3,3,3,4,4,4,4,4,5,6};
    int target=4;
    int index=first_occurance(v,target);
    if(index==-1){
        cout<<"target not found "<<endl;

    }else{
        cout<<"target found at "<<index<<endl;
    }

}