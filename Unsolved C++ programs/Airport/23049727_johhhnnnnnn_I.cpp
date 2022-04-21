 #include <bits/stdc++.h>
 using namespace std;

int main()
 {
    	long long c,d,e,f,g,w,x,y,z,m,n,a=0,b=0,j=0;
    	cin>>m>>n;
    	long long arr[n],arr1[n];
    	for(long long i=0;i<n;i++)
    	{
    	    cin>>arr[i];
    	    arr1[i]=arr[i];
    	}
    	sort(arr1,arr1+n);
    	while(m--)
    	{
    	    sort(arr,arr+n);
    	    a+=arr[n-1];
    	    arr[n-1]--;
    	     if(arr1[j]<=0)
    	    j++;
    	    b+=arr1[j];
    	    arr1[j]--;
    	}
    	cout<<a<<" "<<b;
    	return 0;
}
