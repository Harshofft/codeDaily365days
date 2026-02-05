#include<iostream>
using namespace std;
int main(){
    // int a ,b ;
    // cin>>a>>b;
    // for(int i=1 ; i<=a;i++){
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
        
    // }
    // return 0;


    //********************binary no . trangle


    // int a  ;
    // cin>>a;
    
    // for(int i=1 ; i<=a;i++){
    //     int num ;
    //     if (i%2==1)
    //         {
    //             num =0;
    //         }
    //         else{
    //             num = 1;
    //         }
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<num;
    //       if(num==0){
    //         num=1;
    //       }
    //       else{
    //         num= 0;
    //       }
            
    //     }
    //     cout<<endl;
        
    // }
    // return 0;

    //********right aligned pyramid */
//     *
//    **
//   ***
//  ****
// *****
    //step 1  (a- i) this is for space 
    // step again loop for the star
    // int a;
    // cin>>a;
    // for(int i=a; i>=1; i--){
    //     for(int j = 1 ; j<=(a-i); j++){
    //         cout<<" ";
    //     }
    //     for (int j= 1;j<=i;j++){
    //         if(i==1|| i==a|| j==1 ||j==i){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
    //     }
    //     cout<<endl;
    // }



    //*******Diamond */

    // int a ;
    // cin >>a;
    // for (int i = 1; i <= a; i++)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = (a-1); i >= 1; i--)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //   int a ;
    // cin >>a;
    // for (int i = 1; i <= a; i++)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //        if(i==1||j==1||j==i){
    //         cout<<"* ";
    //        }
    //        else{
    //         cout<<"  ";
    //        }
    //     }
    //     cout<<endl;
    // }
    // for (int i = (a-1); i >= 1; i--)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //         if(i==1||j==i||j==1){
    //         cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    

    //*********inverted diamond  */


    // int a ;
    // cin >>a;
    // for (int i = 1; i <= a; i++)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //        if(i==1||j==1||j==a){
    //         cout<<" ";
    //        }
    //     }
    //     cout<<endl;
    // }
    // for (int i = (a-1); i >= 1; i--)
    // {
    //     for(int j =1 ; j<=(a-i);j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1 ; j<=i; j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    //**********crown */
// *        *
// **      **
// ***    ***
// ****  ****
// **********


    // int a ;
    // cin>>a;
    // for(int i =1 ;i<=a;i++){
            //***1 notes 1st i stars*****

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
            //********2 print 1st space  */
    //     for(int j= 1  ;j<=(a-i);j++){
    //         cout<<" ";
    //     }
            //**************# again spaces  */
    //      for(int j=1;j<=(a-i);j++){
    //         cout<<" ";
    //     }
            //******4 again stars */
    //     for(int j=1 ;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // for(int i =1 ;i<=a;i++){
    //     for(int j=1;j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //****butterfly */
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

    // int a ;
    // cin>>a;
    // for(int i =1 ;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j= 1  ;j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //      for(int j=1;j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // for(int i =(a-1) ;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j= 1  ;j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=(a-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1 ;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int a ;
    cin>>a;
    for(int i =a ;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j= 1  ;j<=(a-i);j++){
            cout<<" ";
        }
        cout<<" ";
         for(int j=1;j<=(a-i);j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i =2 ;i<=(a);i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j= 1  ;j<=(a-i);j++){
            cout<<" ";
        }
        cout<<" ";
        for(int j=1;j<=(a-i);j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

