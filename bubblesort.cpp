#include<iostream>
#include<vector>
using namespace std;
void bubble(vector<int>v){
    int size=v.size();
    for (int  i = 1; i < size; i++)
    {
        for (int j= 0; j < size-i; i++)
        {
            
        
        
        if(v[j]>v[j+1]){
       swap(v[j],v[j+1]);
        }
    }}
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    
    




}
int main(){
vector<int>v{9,8,7,6,5,4,3,2,1};
bubble(v);
}