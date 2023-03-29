#include<iostream>
using namespace std;
int binarysearch(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    
    while (start<=end)
    {
        int mid=(start+end)/2;
    
        
        int element=arr[mid];
         if(element==target){
            return mid;

         }else if(element>target){
            end=mid-1;

         }else {
            start=mid+1;

         }
    }
    return -1;
    

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    int index=binarysearch(arr,target,size);
    if(index==-1){
        cout<<"target not found"<<endl;

    }else{
        cout<<"target found at "<<index+1<<endl;

    }
}