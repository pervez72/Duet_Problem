#include<bits/stdc++.h>
using namespace std;
int main(){

  float n, k;
  cin>>n>>k;
float ans=n/k;
cout<<"floor "<<n<<" / "<<k<<" = "<<floor(ans)<<endl;
cout<<"ceil "<<n<<" / "<<k<<" = "<<ceil(ans)<<endl;
cout<<"round "<<n<<" / "<<k<<" = "<<round(ans)<<endl;


}
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(c>b||d<a)cout<<"-1";
else{
  cout<<max(a,c)<<" "<<min(b,d);
}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,n,m;
cin>>a>>b>>n>>m;

   if( b* log(a)> m * log(n))cout<<"YES";
   else cout<<"NO";
}
this is mostt