#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
	set<char>s;
	char c;
	for(int i=0;i<=1000;i++)
	{
	  cin>>c;
	  if(c!=',' && c!=' ' && c!='{' && c!='}')
	  s.insert(c);
	}
    cout<<s.size();
	return 0;
}