
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
	 return  b==0 ? a : gcd(b,a%b);
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n1,n2;
	cin>>n1>>n2;
	cout<<gcd(n1,n2);
return 0;
}
