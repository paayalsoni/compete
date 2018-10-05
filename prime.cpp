<iostream>
using namespace std;
int main()
{
    int x,count=0;
	cin>>x;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{cout<<"prime number";}
    else{cout<<"not a prime no";}
	return 0;
}