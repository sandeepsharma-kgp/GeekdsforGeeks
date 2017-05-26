#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 1e18

int main()
{
    int n,result=0,sum,result1=0,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<sizeof(int);i++)
    {
        sum=0;
        x=(1<<i);
        for (int j=0; j< n; j++ )
          {
              if (arr[j] & x)
                sum++;
          }
        if (sum % 2)
            result |= x;
        if(sum % 3)
            result1|=x;
        printf("\nSum %d: %d",i,sum);
    }
    printf("\nResult: %d",result);
    printf("\nResult1: %d",result1);

    return 0;
}
