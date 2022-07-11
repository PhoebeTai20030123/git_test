#include<iostream>
using namespace std;
int main(){
    int i, j;
    while(cin>>i>>j){
//        if(i>10000 || j>10000)
//            cout<<i<<" "<<j<<" Invalid input"<<endl;
        int a=i;
        int b=j;
        if(i>j)
            swap(i,j);
        int ii=i;
        int big=1;
        while(ii<=j){
            int x=ii;
            int counter=1;
            while(x!=1){
                if(x%2==0){
                    x=x/2;
                }
                else if(x%2!=0){
                    x=x*3+1;
                }
                counter++;
            }
            if(counter>big)
                big=counter;
            ii++;
        }
        cout<<a<<" "<<b<<" "<<big<<endl;
    }
}
