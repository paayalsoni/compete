<iostream>
using namespace std;
int main()
{
    int x,product;
	product=1;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		product=product*x;
	}
	cout<<product;
}