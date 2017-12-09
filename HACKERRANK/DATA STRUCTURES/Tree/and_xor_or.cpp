#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){	
  vector <long> arr;
	stack <long> stk;
	long tmp,num;
	long long max=0,max_i;
	cin >> num;
	for(long i = 0;i < num; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}
	for(long i = 0; i < num; i++)
	{
		while(!stk.empty())
		{
			max_i = arr[i] ^ stk.top();
			if(max_i > max)
			 max = max_i;
			if(arr[i] < stk.top())
			 stk.pop();
			else
			 break;
		}
		stk.push(arr[i]);
	}
	cout<<max<<endl;
}
