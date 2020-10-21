#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T,i, len;
  char s[100];
  cin>>T;

  while(T--)
  {
     cin>>s;
     len=strlen(s);
     
     for(i=len-1;i>=0;i--)
      {
        cout<<s[i]<<endl;
      }
    
  };
	
  return 0;
}
