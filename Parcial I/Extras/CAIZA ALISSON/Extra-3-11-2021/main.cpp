int main()
{
 vector<int> a(5),b,c;
 lee_vector(a);
 cout<<maximo(a)<<endl;
 lee_vector(b,a.size());
 suma(a,b,c);
 muestra_vector(c);
 cout<<endl;
 vector<float>x,y;

 lee_vector(x,3);
 lee_vector(y,3);
 muestra_vector(suma(x,y));
 cout<<endl<<maximo(x)<<endl;
}

#include<vector>
#include<iostream>
using namespace std;
template <class T> vector<T> unicos(const vector<T>&a)
{

 vector<bool> b(a.size(),true);
for (int i=0;i<a.size()-1;i++)
for (int j=i+1;j<a.size();j++)
if (a[i]==a[j])
 b[j]=false;
 vector<T> unicos;

for (int i=0;i<a.size();i++)
if (b[i])
 unicos.push_back(a[i]);
return unicos;
}
