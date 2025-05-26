//loops
#include<iostream>
using namespace std;
int main(){
    //while loop // print 1 to 5 num
     /*int i=1;
     int n,sum=0;
     cin>>n;
     while(i<=n){
        // cout<<i<<" ";
        sum+=i;
        i++;
        
     }
     cout<<sum;
     cout<<endl;*/

     //for loop
     /*for(initialisation;condition;update){
        //work
     }*/
   /* int n, sum=0; //sum of 1 to n num 
    cin>>n;
    for(int i=1; i<=n; i++){
        // cout<<i<<" ";
        sum+=i;
        if(i==3){
            break;
        }
    }
    cout<<sum;*/
    
   /* // print odd num
    int n, oddSum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            cout<<i<<" ";
            oddSum+=i;
        }
    }
    cout<<endl<<oddSum;*/
    int n = 10;
    int i = 1;
    do{
        cout << i <<" ";
        i++;
        } while(i<=n);

    cout<<endl;
    return 0;
}