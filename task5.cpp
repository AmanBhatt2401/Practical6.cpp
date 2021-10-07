//compare two string
#include<iostream>
#include<string>
using namespace std;
 
 int main()
{
 string s1="ABC";
 string s2="ABC";
int x=s1.compare(s2);
//cout<<x;


 if (x==0)(cout<<"equal");
 if (x>0)(cout<<"1");
 if (x<0)(cout<<"-1");

 

 return 0;
}
