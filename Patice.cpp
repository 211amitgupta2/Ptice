# include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   string ans;
   cin>>ans;
   int a=0,b=0,c=0,g=0;
   string A="ABCABCABCABC";
   string B= "BABCBABCBABC";
   string G= "CCAABBCCAABB";
   for(int i=0;i<ans.length();i++){
       if(c==12)
       c=0;
       if(ans[i]==A[c])
       a++;
       if(ans[i]==B[c])
       b++;
       if(ans[i]==G[c])
       g++;
       c++;
   }
   int maxi=max(a,max(b,g));
   cout<<maxi<<endl;
   if(maxi==a)
   cout<<"Adrian"<<endl;
   if(maxi==b)
   cout<<"Bruno"<<endl;
   if(maxi==g)
   cout<<"Goran"<<endl;
   
    return 0;
}