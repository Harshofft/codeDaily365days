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


    int a  ;
    cin>>a;
    
    for(int i=1 ; i<=a;i++){
        int num ;
        if (i%2==1)
            {
                num =0;
            }
            else{
                num = 1;
            }
        for (int j = 1; j <=i; j++)
        {
            cout<<num;
          if(num==0){
            num=1;
          }
          else{
            num= 0;
          }
            
        }
        cout<<endl;
        
    }
    return 0;

}