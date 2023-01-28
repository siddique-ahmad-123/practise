#include <bits/stdc++.h>
using namespace std;


int main(){

unordered_map<string,int> m;

pair<string,int> p=make_pair("siddique",3);
m.insert(p);

pair<string,int> pair2("love",2);

m["ahmad"] = 4;
m["ahmad"] = 5;
m["love"] = 3;
cout<<m.at("siddique")<<endl;
cout<<m["ahmad"]<<endl;
cout<<m["unknown"]<<endl;
//cout<<m.at("unknown")<<endl;

//size

cout<<m.size()<<endl;

cout<<m.count("siddique")<<endl;

m.erase("siddique");

cout<<m.count("siddique")<<endl;



unordered_map<string,int> :: iterator it = m.begin();

while(it != m.end()){
    cout<<it->first<< " "<<it->second<< endl;
    it++;
}




















    return 0;
}



























