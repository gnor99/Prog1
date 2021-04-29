#include "std_lib_facilities.h"


template<typename T>
struct S{

S (T t) :val(t){}

T& get();
const T& get() const;

S& operator=(const T& s);

private: 
	T val;

};

template<typename T>
S<T>& S<T>::operator=(const T& s){
	val=s;
	return *this;
}

template<typename T>
T& S<T>::get(){

	return val;
}

template<typename T>
const T& S<T>::get()const{return val;}

template<typename T>
void read_val(T& v){
	cin>>v;
}

int main() {
	S<int>sint = 7;
	S<char>schar = '.';
	S<double>sdouble = 7.5;
	S<string>sstring  ("csabi");
	S<vector<int>>svector = vector<int>{10, 5, 6};


	cout<<sint.get()<<' '<<schar.get()<<' '<<sdouble.get()<<' '<<sstring.get()<<' ';
	for (int j =0; j< svector.get().size(); ++j)
        cout << svector.get()[j] << ' ';
    cout<<endl;

	int i;
	cout<<"change sint:"<<endl;
	read_val(i);
	sint=i;

	char c;
	cout<<"change schar:"<<endl;
	read_val(c);
	schar=c;

	double d;
	cout<<"change sdouble:"<<endl;
	read_val(d);
	sdouble=d;

	string s;
	cout<<"change sstring:"<<endl;
	read_val(s);
	sstring=s;

	int v;
	cout<<"change svector:"<<endl;
	for (int j =0; j< svector.get().size(); ++j){
		read_val(v);
		svector.get()[j]=v;}



	cout<<sint.get()<<' '<<schar.get()<<' '<<sdouble.get()<<' '<<sstring.get()<<' ';
	for (int j =0; j< svector.get().size(); ++j)
        cout << svector.get()[j] << ' ';
    cout<<endl;



	return 0;
}