#include "std_lib_facilities.h"

void fill(map<string, int>& msi){

	msi["alk"]=7;
    msi["alo"]=3;
    msi["alt"]=0;
    msi["atz"]=4;
    msi["aoi"]=1;
    msi["art"]=9;
    msi["apo"]=2;
    msi["anu"]=6;
    msi["aty"]=8;
    msi["aua"]=5;

}

void fill_from_input(map<string, int>& msi)
{
    string stemp;
    int itemp;
    while(msi.size() < 10)
    {
    	getline(cin, stemp, ',');
        cin>>itemp;
        msi.insert(make_pair(stemp,itemp));
        getline(cin,stemp);
    }
}

void msi_to_mis(map<string,int> msi, map<int,string>& mis)
{
    for(auto m : msi)
    {
        mis.insert(make_pair(m.second, m.first));
    }
}

int main(){

	map <string, int> msi;

	cout<<"original:"<<endl;
	fill(msi);
	for(auto m : msi)
    {
        cout<<m.first<< " " <<m.second<<endl;
    }


    cout<<"erased:"<<endl;
    msi.erase(msi.begin(), msi.end());

    for(auto m : msi)
    {
        cout<<m.first<< " " <<m.second<<endl;
    }

    cout<<"type new elements: string, int"<<endl;
    fill_from_input(msi);
    for(auto m : msi)
    {
        cout<<m.first<< " " <<m.second<<endl;
    }

    int sum= 0;


    for(auto m : msi)
    {
        sum+=m.second;
    }
    cout<<"sum of ints"<<endl;
    cout<<sum<<endl;

    map<int, string> mis;
    msi_to_mis(msi,mis);
    cout<<"string,int to int,string"<<endl;
    for(auto m : mis)
    {
        cout<<m.first<< " " <<m.second<<endl;
    }

}