// https://www.codechef.com/COOK128A/problems/OROFAND

// TLE - See Codechef solution after my solution

#include <iostream>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n, q;
	    cin >> n >> q;
	    
	    int a[n];
	    int ored = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        cin >> a[i];
	        ored |= a[i];
	    }
	    
	    cout << ored << endl;
	    
	    for (int i=0; i<q; i++)
	    {
	        int index, val;
	        cin >> index >> val;

	        a[index-1] = val;

            ored = 0;
    	    for (int j=0; j<n; j++)
    	    {
    	        ored |= a[j];
    	    }	        

    	    cout << ored << endl;
	    }
	}
	return 0;
}


// Solution-1

#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mxN=35;
int two[mxN];

void pre()
{
  two[0]=1;

  for(int i=1;i<mxN;i++)
    two[i]=two[i-1]*2;
}

void solve()
{
  int n,q;
  cin>>n>>q;

  int a[n];

  int cnt[mxN]={};

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    int x=a[i];

    int ind=0;

    while(x)
    {
      if(x%2)
        cnt[ind]++;
      x/=2;
      ind++;
    }
  }

  int ans=0;

  for(int i=0;i<mxN;i++)
  {
    if(cnt[i]!=0)
      ans+=two[i];
  }

  cout<<ans<<"\n";

  while(q--)
  {
    int x,v;
    cin>>x>>v;
    x--;

    int temp=a[x];
    int ind=0;

    while(temp)
    {
      if(temp%2!=0)
        cnt[ind]--;
      temp/=2;
      ind++;
    }

    a[x]=v;
    temp=v;
    ind=0;

    while(temp)
    {
      if(temp%2!=0)
        cnt[ind]++;
      temp/=2;
      ind++;
    }

    ans=0;

    for(int i=0;i<mxN;i++)
    {
      if(cnt[i]!=0)
        ans+=two[i];
    }

    cout<<ans<<"\n";
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  pre();

  int t;
  cin>>t;

  while(t--)
    solve();

return 0;
}

Solution-2

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, q;
    cin >> n >> q;
    int a[n], bitsCount[32] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 31; j++) {
            if ((a[i] >> j) & 1) {
                bitsCount[j]++;
            }
        }
    }

    int answer = 0;
    for (int j = 0; j < 31; j++)
        answer += (1 << j) * (bitsCount[j] >= 1);
    cout << answer << '\n';

    while (q--) {
        int index, value;
        cin >> index >> value;
        --index;

        // remove old value.
        for (int j = 0; j < 31; j++) {
            if ((a[index] >> j) & 1) {
                bitsCount[j]--;
            }
        }

        a[index] = value;

        // add new value.
        for (int j = 0; j < 31; j++) {
            if ((a[index] >> j) & 1) {
                bitsCount[j]++;
            }
        }

        answer = 0;
        for (int j = 0; j < 31; j++)
            answer += (1 << j) * (bitsCount[j] >= 1);
        cout << answer << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


