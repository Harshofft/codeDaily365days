#include <iostream>
using namespace std;
int main()
{

    //********* */ reverse array

    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i <= n-1; i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=n-1 ; i>=0;i--){
    //     cout<<a[i]<<" ";
    // }

    // int n;
    // cin >> n;
    // long long a[n];
   
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     cin >> a[i];
    // }
    //  long long sum =a[0];
    // for (int i = 1; i<n; i++)
    // {
    //     sum= sum+a[i];

    // }
    // cout<<sum;


    //*********max and min with position in arry */
    //note if(a[i]<ans) change thios condition for max and min

    // int n;
    // cin>>n;
    // long long a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int ans =a[0] ,location =1;
    // for(int i=1;i<n;i++){
    //     if(a[i]<ans){
    //         ans=a[i];
    //         location=i+1;
    //     }
    // }
    // cout<<ans<<" "<<location;


    //**********search element in arry
    int n ;
    long long e;
    cin>>n>>e;
    
    long long a[n] ;
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool flage = false;
    for(int i =0;i<n;i++ ){
        if(a[i]==e){
            flage= true;
            break;
        }
        
    }
    if(flage){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}
