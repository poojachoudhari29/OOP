#include<bits/stdc++.h>
using namespace std;
template<typename S>
void search(){
    int n;
    S k;
    cout<<endl<<endl<<typeid(k).name();
    cout<<"\nEnter size of array :";
    cin>>n;
    S arr[n];
    cout<<"\nEnter elements of array :";
    for(int i=0;i<n;i++) cin>>arr[i];

   
    cout<<"\nEnter element you want to search :";
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            cout<<"\nElement found at index :  "<<i;
            return;
        }
    }
    cout<<"\nElement not found.";
}

int main(){
        int index;
        search<int>();
        search<char>();
        search<float>();

}