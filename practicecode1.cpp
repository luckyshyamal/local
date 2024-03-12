
//? return a array of square of each number

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#include<math.h>


void  absoluteValue(vector <int> &v){
	for(int i=0;i<v.size();i++){
		v[i]=abs(v[i]);
	}
}

void shorting(vector <int> &v){
	for(int i=0;i<v.size()-1;i++){
		int flag=0;
		for(int j=0;j<v.size()-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
		
	}
}
void squaring(vector <int> &v){
	for(int i=0;i<v.size();i++){
		v[i]=pow(v[i],2);
	}
}
	

int main(){
  vector <int> v;

  int n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  for(int i=0;i<v.size();i++){
  	cout<<v[i]<<" ";
  }
 

  absoluteValue(v);
	
  cout<<endl<<"after finding  absolute value: ";
  for(int i=0;i<v.size();i++){
  	cout<<v[i]<<" ";
  }
  
  shorting(v);
  cout<<endl<<"after shorting: ";
   for(int i=0;i<v.size();i++){
  	cout<<v[i]<<" ";
  }
  
  squaring(v);
  cout<<endl<<"after squaring: ";
  for(int i=0;i<v.size();i++){
  	cout<<v[i]<<" ";
  }
}