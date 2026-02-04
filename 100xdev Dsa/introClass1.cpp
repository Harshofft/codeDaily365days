#include <iostream>
using namespace std;
int main()
{

    //---for trangle ******

    // for (int i = 4; i >= 0; i--)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // ********creating z with cout

    // cout<<"*****"<<endl;
    // cout<<"   * "<<endl;
    // cout<<"  *  "<<endl;
    // cout<<" *   "<<endl;
    // cout<<"*****"<<endl;
    // return 0;

    //*****************table  */

    // int table =5;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<table<<" * "<<i<<" = "<<table*i<<endl;
    // }
    // return 0;

    // *********area calculate*****

    // int length , breath;
    // cout<<"enter length and breath"<<endl;
    // cin>>length;
    // cin>>breath;
    // int area = length*breath;
    // int Perimeter= 2*(length+breath);

    // cout<<"Area = "<<area<<endl;
    // cout<<"Perimeter = "<<Perimeter;

    // ******calculator ***** */

    // int a , b;
    // cin>>a>>b;
    // cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    // cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    // cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    // cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    // cout<<a<<" % "<<b<<" = "<<a%b<<endl;
    // return 0;

    // add the 2 last digit of 2 no

    // int a ,b ;
    // cin>>a>>b;
    // a=a%10;
    // b=b%10;
    // cout<<a+b;

    //*****even or odd no

    // long long a;
    // cin >>a;

    // if(a%2==0){
    //     cout<<"Even"<<endl;
    // }
    // else {
    //     cout<<"Odd"<<endl;
    // }
    // return 0;

    //************factor */

    // long long a , b;
    // cin>>a>>b;
    // if(a%b==0){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }
    // return 0;


    //***********max and min in 3 digit  */

    // long long a, b, c;
    // cin >>a>>b>>c;
    // int max = a;
    // int  min = a;
    // if (b < min)
    // {
    //     min = b;
    // }
    // if (b > max)
    // {
    //     max =b;
    // }

    // if (c <min )
    // {
    //     min = c;
    // }
    // if (c > max)
    // {
    //     max = c;
    // }
    // cout << "Min = " << min << endl;
    // cout << "Max = " << max << endl;
    // return 0;

    // long long A, B, C;
    // if (!(cin >> A >> B >> C)) return 0;

    // long long mn = A, mx = A;

    // if (B < mn) mn = B;
    // if (C < mn) mn = C;

    // if (B > mx) mx = B;
    // if (C > mx) mx = C;

    // cout << "Min = " << mn << '\n';
    // cout << "Max = " << mx;
    // return 0;



    // int a ,b;
    // cin>>a;
    // for (int i= 1 ; i<=a ; i++){
    //     for(int j = 1 ; j<=a ;j++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;


    //*********************hellow square

    // int a;
    // cin>>a;
    // for(int i = 1 ;i<=a;i++){
    //     for(int j = 1; j<=a; j++){
    //         if(i==1||i==a){
    //             cout<<"*";
    //         }
    //         if(i>1&&i<a){
    //             if(j==1||j==a){
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<' ';
    //             }
    //         }
           
    //     }
    //      cout<<endl;
    // }
    // return 0;

    //pyramide of trangle

    // int a;
    // cin>>a;
    // for (int i = 1; i <= a; i++)
    // {
    //     for(int j= 1 ; j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //  int a;
    // cin>>a;
    // for (int i = a; i>=1; i--)
    // {
    //     for(int j= 1 ; j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // ***************hallow rectrangle

    //   int a,b;
    // cin>>a>>b;
    // for(int i = 1 ;i<=a;i++){
    //     for(int j = 1; j<=b; j++){
    //         if(i==1||i==a ||j==1|| j==b){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            // if(i==1||i==a){
            //     cout<<"*";
            // }
            // if(i>1&&i<a){
            //     if(j==1||j==b){
            //         cout<<"*";
            //     }
            //     else{
            //         cout<<' ';
            //     }
            // }
           
    //     }
    //      cout<<endl;
    // }
    // return 0;

    
    //J. Vertical Traingle
// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * * 
// * 

int a ;
cin>>a;
for (int i = 1; i <= a; i++)
{
    for(int j =1 ; j<=i ; j++){
        // cout<<"* ";
        if(i==1||j==1||j==i){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
for(int i = a-1 ; i>=1;i--){
    for(int j=1 ; j<=i;j++ ){
       if(i==1||j==1||j==i){
        cout<<"* ";
       } 
       else{
        cout<<"  ";
       }
    }
    cout<<endl;
}


}