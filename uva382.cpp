#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string


//reguler Bracket sequence function
/*bool RBC(string s)
{
    stack<char>st;
    char x;

    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') 
            {
                st.push(s[i]);
                continue;
            }
        if(st.empty()) return false;

        if(s[i]==')')
        {
            x=st.top();
            st.pop();
            if(x=='{' || x=='[') return false;
        }
        if(s[i]=='}')
        {
            x=st.top();
            st.pop();
            if(x=='(' || x=='[') return false;
        }
        if(s[i]==']')
        {
            x=st.top();
            st.pop();
            if(x=='(' || x=='{') return false;
        }
    }
    return (st.empty());


}*/



//prime_seive_algorithm
/*ll p[1000005]={0};
void prime_seive()
{
       for(ll i=3;i<1000005;i+=2) p[i]=1;

       for(ll i=3;i<1000005;i+=2)
       {
           if(p[i]==1)
           {
               for(ll j=i*i;j<1000005;j+=i) p[j]=0;
           }
       }
       p[2]=1;
       p[1]=p[0]=0;

}*/



//pelindrom number
/*bool pelindrom_number(ll x)
{
  ll tt=x,t,ttt=0;
  while(tt!=0)
  {
    t=tt%10;
    ttt=ttt*10+t;
    tt/=10;
  }
  if(x==ttt) return true;
  else return false;

}*/

//Bigmod algorithm
/*ll BigMod(ll a,ll b,ll p)
{ 
     ll ans = 1;
     a%=p;
     if(a==0) return 0;
   
       while(b>0)
          {
              if(b & 1)  ans=(ans*a)%p;

               b/=2;

               a=(a*a)%p;
  
          }

  return ans;

}*/

int main()
{
    cout<<"PERFECTION OUTPUT"<<"\n";

    while(1)
    {
      nn x;
      cin>>x;
      if(x==0) break;
      nn sum=1;
      for(nn i=2;i<=sqrt(x);i++)
      {
        if(x%i==0)
        {
          if(i==x/i) sum+=i;
          else sum+=i,sum+=x/i;
        }
      }
      printf("%5d",x);
      cout<<"  ";   
       if(sum<x || sum==1) cout<<"DEFICIENT"<<"\n";
      else if(sum==x) cout<<"PERFECT"<<"\n";
      else cout<<"ABUNDANT"<<"\n";

    }

    cout<<"END OF OUTPUT"<<"\n";
    
}
