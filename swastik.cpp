#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
int n;
cin>>n;

//first
cout<<"*";
for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";

}
for(int i=1;i<=(n+1)/2;i++)
{
	cout<<"*";
}
cout<<endl;

//second
for(int rows=1;rows<=(n-3)/2;rows++){
	cout<<"*";
	for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";
}
cout<<"*"<<endl;
}
//third
for(int i=1;i<=n;i++){
	cout<<"*";
}
cout<<endl;
//fourth
for(int rows=1;rows<=(n-3)/2;rows++){
	for(int i=1;i<=(n-1)/2;i++){
	cout<<" ";
}
 cout<<"*";
 for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";
}
cout<<"*"<<endl;
}

//fifth
for(int i=1;i<=(n+1)/2;i++)
{
	cout<<"*";
}
for(int i=1;i<=(n-3)/2;i++){
	cout<<" ";


}cout<<"*";
return 0;
}
