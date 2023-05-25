
/*Finding occurens of a string using Hashing.
Hashing: Means-->pre-compute & fetch
*/


/*
#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter your string:";
	cin>>s;
		//pre-compute
	int hash[26]={0};
	for(int i=0;i<s.size();i++)
	{
		hash[s[i]-'a']++;
	}
	int q;
	cout<<"Enter no of quires:";
	cin>>q;
	while(q--)
	{
		 char c;
		cout<<"Enter character:";
		cin>>c;
		//fetch
		cout<<hash[c-'a']<<endl;
	}
	return 0;
}
*/


#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter your string:";
	cin>>s;
		//pre-compute
	int hash[256]={0};
	for(int i=0;i<s.size();i++)
	{
		hash[s[i]]++;
	}
	int q;
	cout<<"Enter no of quires:";
