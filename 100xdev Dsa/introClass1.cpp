#include<iostream>
using namespace std;
int main(){

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

    //******calculator ***** */

    // int a , b;
    // cin>>a>>b;
    // cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    // cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    // cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    // cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    // cout<<a<<" % "<<b<<" = "<<a%b<<endl;
    // return 0;

    // add the 2 last digit of 2 no

    int a ,b ;
    cin>>a>>b;
    a=a%10;
    b=b%10;
    cout<<a+b;
}