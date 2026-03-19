#include <iostream>
using namespace std;

int solve(){
    int v;
    cin>>v;
    int a[v];
    for (int i = 0; i < v; i++)
    {
        cin>>a[i];
    }
    int c0=0 , c1=1;
    for (int i = 0; i < v; i++)
    {
        if(a[i]==0){
            c0++;
        }
        else{
            c1++;
        }
    }
    for (int i = 0; i <c0; i++)
    {
        cout<<"0 ";
    }
    for (int  i = 0; i < c1; i++)
    {
        cout<<" 1";
    }
    
    
    
}
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
    // int n ;
    // long long e;
    // cin>>n>>e;

    // long long a[n] ;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // bool flage = false;
    // for(int i =0;i<n;i++ ){
    //     if(a[i]==e){
    //         flage= true;
    //         break;
    //     }
        
    // }
    // if(flage){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }

    //****To count the same no in arry */

    // int n ;
    // long long x;
    // cin>>n>>x;
    // long long e[n];
    // for(int i = 0;i<n;i++){
    //     cin>>e[i];
    // }
    // int count=0;
    // for(int i =0 ;i<n;i++){
    //     if(e[i]==x){
    //         count++;
    //     }
    // }
    // cout<<count;
    

//*********************sorted or not array */

    // int a ;
    // cin>>a;
    // long long e[a];
    // for(int i =0; i<a;i++){
    //     cin>>e[i];
    // }    
    // bool flag = false;
    
    // for(int i=1;i<a;i++ ){
    //     if(e[i]>=e[i-1]){
    //        flag= false;
    //     }
    //     else{
    //         flag = true;
    //         break;
    //     }
        
    // }
    // if(flag){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }


    //******for soting out */
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n ; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<a[n];
    // int cO,c1;
    // for (int i=0;i<n;i++){
    //     if(a[i]==0){
    //         cO++;
    //     }
    //     else{
    //         c1++;
    //     }
    // }
    // cout<<c1<<endl<<cO;
    // for (int i = 0; i < cO; i++)
    // {
    //     cout<<"0";
    // }
    // for (int i = 0; i < c1; i++)
    // {
    //    cout<<"1";
    // }



     //***************** h sort

    // int a ;

    // cin>>a;
    // while(a--){
    //     int n;
    //     cin>>n;
    //     int x[n];
    //     for(int i=0;i<n;i++){
    //         cin>>x[i];
    //     }
        
    //     int c0=0;
    //     int c1 =0;
    //     for (int i= 0;i<n;i++){
    //         if(x[i]==0){
    //             c0++;
    //         }
    //         else{
    //             c1++;
    //         }
    //     }
    //     for (int i = 0; i < c0; i++)
    //     {
    //         cout<<" 0";
    //     }
    //     for (int i = 0; i < c1; i++)
    //     {
    //         cout<<"v 1";
    //     }
    //     cout<<endl;
        
        
    // }

    
    //*****************h sort

    // int n;
    // cin>>n;

    // for(int i =0; i<n;i++){
    //     solve();
    // }
    

    //***************reverse array */

    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // int s=0; 
    // int l =n-1;
    
    // while(l>=s){
    //     swap(a[s],a[l]);
    //     s++;
    //     l--;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    

    //**********J. Arrange the Numbers */

    // int a;
    // cin>>a;
    // while (a--)
    // {
    //     int n;
    //     cin>>n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //       if(i%2==1){
    //         cout<<i<<" ";
    //       }
    //     }
    //     for(int i=n; i>=1;i--){
    //         if(i%2==0){
    //             cout<<i<<" ";
    //         }
    //     }
    //     cout<<endl;
       
    // }
    
    // ****************** swap alternate

    // int a;
    // cin>>a;
    // while (a--)
    // {
    //    int n;
    //    cin>>n;
    //    int v[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }

    
    // int count=0;
    // int count2 =1;

    // while(count2 <n){
    //     swap(v[count], v[count2]);
    //     count = count +2;
    //     count2= count2+2;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // }
    
   
    //********missing  no && *duplicate*/
    // int a;
    // cin>>a;
    // while (a--)
    // {
    //     int n;
    //     cin>>n;
    //     int ans=0;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         int target =a[i];
    //         int count =0;
    //         for(int j = 0; j<n; j++){
    //             if(a[j]==target){
    //                 count++;
    //             }
    //         }
    //         if (count==2)
    //         {
    //             ans=a[i];
    //             break;
    //         }
            
    //     }
    //     cout<<ans<<endl;
        
        
    // }
    

    ///////////////***********intersection in 2 array */
    // int a;
    // cin>>a;
    // while (a--)
    // {
    //     //taking input from 1st element
    //     int n;
    //     cin>>n;
    //     int v[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>v[i];
    //     }
    //     //taking inpiut from 2nd element
    //     int k;
    //     cin>>k;
    //     int g[k];
    //     for (int i = 0; i < k; i++)
    //     {
    //         cin>>g[i];
    //     }

    //     //taking loop for 1st element
    //     for (int i = 0; i < n; i++)
    //     {
    //         int current = v[i];
    //         // for second element
    //         for (int j = 0; j < k; j++)
    //         {
    //             if(g[j]==current){
    //                 cout<<current<<" ";
    //             }
    //         }
            
    //     }
        
    //     cout<<endl;
    // }

    

}
