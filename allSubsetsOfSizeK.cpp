#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void printSubset(vector<int> selection)
{
	for(int i=0;i<selection.size();i++)
	{
		cout<<selection[i]<<" ";
	}
	cout<<endl;
}

void allSubsets(int a[],int index,vector<int> selection, int k, int n)
{
	if(index>=n) return;
	selection.push_back(a[index]);
	if(selection.size()<k)
	{
		allSubsets(a,index+1,selection,k, n);
	}
	else if(selection.size()==k)
	{
		printSubset(selection);
	}
	selection.pop_back();
	allSubsets(a,index+1,selection,k, n);
}


int main()
{
	int a[5] = {1,2,3,4,5};
	int k = 2;
	vector<int> selection;
	allSubsets(a,0,selection,k, 5);
}