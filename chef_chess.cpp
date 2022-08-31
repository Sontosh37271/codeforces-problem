#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(ll x,ll y)
{
    ll i,j,mm;
  
   if(x==1&&y==1)
   {
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if(i==2&&j==2)
            cout<<2<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
   }
   else if(x==1&&y==8){
   for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if(i==2&&j==7)
            cout<<2<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
   }
    else if(x==8&&y==8){
   for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if(i==7&&j==7)
            cout<<2<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    }
    else if(x==8&&y==1){
   for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if(i==7&&j==2)
            cout<<2<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    }
   else if(x>1&&x<8)
   {
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if((i==x-1&&j==y+1)||(i==x+1&&j==y-1))
            cout<<2<<" ";
            else cout<<0<<" ";
        }}}
 
   else 
   {
    if(x==1&&(y>1&&y<8))
      mm=1;
      else if(x==8&&(y>1&&y<8))
      mm=2;
      else if((x>1&&x<8)&&(y==1))
      mm=3;
      else if((x>1&&x<8)&&(y==8))
      mm=4;
     for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==x&&j==y)
            cout<<1<<" ";
            else if(mm==1&&((i==x+1&&j==y+1)||(i==x+1&&j==y-1)))
            {
                
                cout<<2<<" ";
            }
            else if(mm==2&&((i==x-1&&j==y-1)||(i==x-1&&j==y+1)))
            {
               
                cout<<2<<" ";
            }
            else if(mm==3&&((i==x-1&&j==y+1)||(i==x+1&&j==y+1)))
            {
              
                cout<<2<<" ";
            }
            else if(mm==4&&((i==x-1&&j==y-1)||(i==x+1&&j==y-1)))
            {
               
                cout<<2<<" ";
            }
            else cout<<0<<" ";
            

        }
        cout<<endl;
    
   }

   }

   
   
}

  
int main()
{
   ll t,i;
   for(ll i=1;i<=8;i++){
    for(ll j=1;j<=8;j++){
        solve(i,j);
        cout<<i<<" "<<j<<endl;

    }
   }
    
    return 0;
}