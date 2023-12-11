

Hashing: Means-->pre-compute & fetch

NOTE: we can declare hash array size based on max element in an array.
	* max array size is 10^6 inside main & outside main 10^7.
	* number hashing & character hashing  using arrays.


Eg:Finding frequency of a number in an array using normal method and hashing?

#include <iostream>
using namespace std;
int count_freq(int *a,int num,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)count++;
    }
    return count;
}
int main()
{
  
   int a[]={1,2,3,4,2,5};
   int num=3;
   cout<<count_freq(a,num,6);

    return 0;
}

o/p: 1


	                                                          using Hashing:


#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of an array:";
    cin>>size;
    int a[size];
    cout<<"Enter elements of an array:\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
      //pre-compute
      int hash[13]={0};
      for(int i=0;i<size;i++)
      {
          hash[a[i]]+=1;
      }
  
  int quires;
  cout<<"Enter no.of quires:";
  cin>>quires;
  while(quires--)
  {
      int num;
      cout<<"Enter number:";
      cin>>num;
      //fetch
      cout<<hash[num]<<endl;
      }
   
    return 0;
}

o/p:

	Enter elements of an array:5
	11
	2
	3
	2
	4
	Enter no.of quires:3
	Enter number:11
	1
	Enter number:2
	2
	Enter number:4
	1


	


	Eg: finding occurences of a number in an array using map.
	#include <bits/stdc++.h>
using namespace std;

int main()
{
   
 int n;
 cout<<"Enter n value:";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 map<int,int>mpp;
 for(int i=0;i<n;i++)
 {
     mpp[a[i]]+=1;
 }
 for(auto it:mpp)
 {
     cout<<it.first<<"->"<<it.second<<endl;
 }
 int q;
 cout<<"Enter no of quires:";
 cin>>q;
 while(q--)
 {
     int num;
     cout<<"Enter num:";
     cin>>num;
     cout<<mpp[num]<<endl;
 }
   
    return 0;
}
o/p:
	Enter n value:5
	11
	12
	12
	12
	11
	11->2
	12->3
	Enter no of quires:3
	Enter num:12
	3
	Enter num:11
	2
	Enter num:10
	0



-----------------------------------------------
Eg:Finding occurens of a string using Hashing.

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
	cin>>q;
	while(q--)
	{
		char c;
		cin>>c;
		//fetch
		cout<<hash[c]<<endl;
	}
	return 0;
}




