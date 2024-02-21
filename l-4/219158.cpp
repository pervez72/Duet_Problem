#include<bits/stdc++.h>
using namespace std;

int main(){
   long long a[4],mul=1;

   for(int i=0; i<4; i++)
   {cin>>a[i];}
    
   for(int i=0; i<4; i++){
      mul=mul*(a[i]%100);}
   int x=mul%100;
   if(x==0)cout<<"00";
   else if(x<10)cout<<"0"<<x;
   else cout<<x;
return 0;
}
 