#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
{
		//for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=2*n;j++)
		{
			if (i==n&&j<n+1)
			cout<<"* ";
			if (i==n&&j>=n+1)
			break;
			if (i<n)
            {
			if (j==n-i+1||j==n+i-1)
			cout<<"*";
			if (j!=n-i+1&&j!=n+i-1)
			cout<<" ";
		    }
		}
		cout<<endl;
	}
}
    return 0;
}
