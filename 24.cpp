#include <boost/progress.hpp>
#include <vector>
#include <iostream>
#include <fstream>
using namespace boost;
using namespace std;

int main () {
	vector<std::string> v(100);
	ofstream fs("./test");

	progress_display pd(v.size());

	vector<string>::iterator pos;
	for(pos=v.begin(); pos != v.end(); ++pos){
		fs << *pos << endl;
		++pd;
	}
	
	return 0;
}






