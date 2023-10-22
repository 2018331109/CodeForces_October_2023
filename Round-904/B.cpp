#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back
int mod = 1e9+7;

const int INF = 1e18;
vector<int> ans(100009, -1);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    int now = n - 1;

    int i=n-1;
    int counted=0;
    /*
    for(int i=0; i<n; i++)
    {
        if(now>0 && s[now]=='1')
        {
            while(now>0 && s[now]=='1')
            {
                now--;
                cnt++;
            }
            if(now==0)
            {
                if(s[now]=='0')
                {
                    ans[i]=cnt;
                    //cout<<cnt<<" ";
                }
                else
                {
                    s[now]='1';
                }
            }
            else
            {
                s[now]='1';
            }
        }
        else
        {
            ans[i]=-1;
            //cout<<-1<<" ";
        }

    }

    */
    //ans.resize(n, -1);
    vector<int>v;

    int it=0;

    while(i>=0)
    {
        if(s[i]=='0')
        {
            now=n-i-1;
            cnt+=now-counted;
            counted++;
            v.pb(cnt);
        }
        i-=1;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    int rm=n-v.size();

    while(rm)
    {
        cout<<-1<<" ";
        rm--;
    }
    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    for (int tc = 0; tc < test; tc++)
    {
        solve();
    }

    return 0;
}

