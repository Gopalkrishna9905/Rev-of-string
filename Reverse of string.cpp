#include<bits/stdc++.h>
using namespace std;

int reverseString(char ch[],int n){

	int s =0;
	int e = n-1;
	while(s<e)
	{
		swap(ch[s++],ch[e--]);
	}
}

int main()
{
	int count =0;
	char ch[10];
	cout<<"Enter the string : ";
	cin>>ch;
	cout<<"Your string is : "<<ch<<endl;
	for(int i =0;ch[i]!='\0';i++){
    	count++;
	}
	cout<<"Length of  String is : " << count<<endl;
	reverseString(ch,count);
	cout<<"Reverse String is :" << ch;
    
	
}
