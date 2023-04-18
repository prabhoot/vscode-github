#include <iostream>
using namespace std;
#include<boost/multiprecision/cpp_int.hpp>
#define ll long long
using namespace boost::multiprecision;
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int1024_t N;
	    cin>>N;
	    cout<<N%20<<endl;
	}
	return 0;
}