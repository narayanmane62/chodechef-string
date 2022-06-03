#include <iostream>
using namespace std;
int main() {
    int t;         cin>>t;
	while(t--)
	{
	    int n ;     cin>>n;       int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        int c=0;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]==a[i+1])
	             {
	                 c++;
	             }
	        }
	        cout<<n-c<<endl;
	    }
	}
	return 0;
}
