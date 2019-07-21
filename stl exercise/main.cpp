#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <utility>
#include <set>
#include <queue>
using namespace std;
int main()
{
    /*vector <int> vc;
    vc.push_back(4);
    vc.push_back(9);
    vc.push_back(1);
    vc.push_back(3);
    vc.push_back(9);
    for(int i=0; i<5; i++)
    {
      cout<<vc[i];
    }
    cout<<endl;
    cout<< vc.size();
    */
    /*vector<int>vcc(5,-2);
    vcc.push_back(11);
    vcc.push_back(6);
    vcc.pop_back();
    vcc.pop_back();
    vcc.pop_back();
    vcc.pop_back();
    for(int i=0; i<vcc.size(); i++)
        cout<< vcc[i]<< " ";
    cout<<endl;
    */
    /*vector<int>vcc;
    vector<int>::iterator it;
    for(int i=0; i<5; i++)
        vcc.push_back(i);
    for(int i=0; i<5; i++)
        cout<< vcc[i]<< " ";
    cout<<endl;
    */
    /*vector <int>vcc;
    vector<int>::iterator it;
    vcc.push_back(12);
    vcc.push_back(66);
    vcc.push_back(12);
    vcc.push_back(15);
    sort(vcc.begin(),vcc.end(),myfunc);
    for(it=vcc.begin();it !=vcc.end(); it++)
        cout<< *it<<endl;
        */
    /*list <float>mylist;
    list <float> :: iterator it;
    mylist.push_back(12);
    mylist.push_back(15);
    mylist.push_back(19);
    mylist.push_front(10);
    mylist.reverse();
    for(it=mylist.begin(); it !=mylist.end(); it++)
        cout<< *it<< " ";
    cout<<endl;
    */
   /* int ar[5]= {4,5,6,2,4};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    for(it=mylist.begin(); it !=mylist.end(); it++)
        cout<< *it;
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),6);
    cout<< *it<<endl;
    mylist.insert(it,7);
    for(it=mylist.begin(); it !=mylist.end(); it++)
        cout<< *it;
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),5);
    mylist.erase(it);
    for(it=mylist.begin(); it !=mylist.end(); it++)
        cout<< *it;
    cout<<endl;
*/

/*map <string,int>m;
map <string,int> ::iterator it;
m["hadi"]=2;
m["orpi"]=3;
m["fahima"]=12;
m["fariha"]=19;
m.insert(make_pair("jaman",99));
m.insert(make_pair("ashrafi",91));
for(it =m.begin(); it !=m.end(); it++)
cout<< it->first << " "<< it->second<<endl;
*/
/*vector <pair<string,int> >v;
vector <pair<string,int> >:: iterator it;
v.push_back(make_pair("jaman",7));
v.push_back(make_pair("asharafi",19));
v.push_back(make_pair("habib",32));
v.push_back(make_pair("hadi",45));
for(it=v.begin();it !=v.end();it++)
    cout<< it->first<< " "<< it->second<<endl;
*/
/*set <int> s;
set <int>:: iterator it;
s.insert(8);
s.insert(12);
s.insert(17);
s.insert(19);
s.insert(20);
for(it=s.begin(); it !=s.end(); it++)
    cout<< *it<<endl;
*/
/*set <string>s;
set<string>::iterator it;
s.insert("nabila");
s.insert("fariha");
s.insert("onnesha");
pair <set<string>::iterator,bool>p;
p=s.insert("jaman");
if(p.second==false)
{
    cout<< "can not insert"<<endl;
}
else
{
    cout<< "inserted"<<endl;
}
*/
priority_queue<int>q;
q.push(5);
q.push(8);
q.push(1);
q.push(18);
q.push(2);
while(!q.empty())
{
    int x;
    x=q.top();
    cout<< x<<endl;
    q.pop();
}
    return 0;
}
