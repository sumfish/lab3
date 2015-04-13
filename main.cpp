#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
	fstream infile;
	infile.open("file.in",ios::in);
	if(!infile){
		exit(1);
	}
	int n,i;
	infile>>n;
	vector<int>wei(n);
	for(i=0;i<n;i++){
		infile>>wei.at(i);
	}
	infile.close();
	sort(wei.begin(),wei.end());
	/*for(i=0;i<n;i++){
                cout<<wei.at(i)<<endl;
        }*/
	int total=0;
	for(i=n-1;i>n-6;i--){
                total=total+wei.at(i);
        }
	cout<<total<<endl;
}


