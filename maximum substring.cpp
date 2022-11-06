#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll t, n, i, count0, count1;
cin>>t;
while(t--){
	cin>>n;
	string ch;
	cin>>ch;
	count0 = 0;
	count1 = 0;
	ll count = 1;
	ll mx = 0;

		if(ch[0]=='1')
			count1++;
		 else
		     count0++;

	for(i=1; i<n; i++){
		if(ch[i] == ch[i-1])
			count++;
		else{
			mx = max(mx, count);
			count = 1;
		}

		if(ch[i] == '1')
			count1++;
		else
		     count0++;
	}

	mx = max(mx, count);

	if(mx*mx>count1*count0){
		cout<<mx*mx<<endl;
	} else{
	  cout<<count0*count1<<endl;
	}
}


}
