template <class T> vector<T> unicos(const vector<T>&a)
{
//se marcan las repeticiones con false
//en un vector de booleanos auxiliar
 vector<bool> b(a.size(),true);
for (int i=0;i<a.size()-1;i++)
for (int j=i+1;j<a.size();j++)
if (a[i]==a[j])
 b[j]=false;
 vector<T> unicos;
//se recorren en paralelo el vector original
//y el de booleanos, si el booleano es true
//el elemento original es unico y se anade a unicos
for (int i=0;i<a.size();i++)
if (b[i])
 unicos.push_back(a[i]);
return unicos;
}
