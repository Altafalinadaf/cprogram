#include<iostream>
using namespace std;

int main(){
	
	string str1[]={"Hi","this","is","the","world","of","c++"};
	string str2="world";
	
	int i,j,min,count;
	int length=str2.length();
	int size=sizeof(str1)/sizeof(str1[0]);
	for(i=0;i<size;i++){
		
		string str3=str1[i];
	//	cout<<str3;
		
		for(j=0;str2[j]!='\0';j++){
			if(str3.at(j)==str2.at(i)){
				min=j;
			}
		}
		for(j=0;str2[j]!='\0';j++){
			if(str3.at(j)==str2.at(i)){
				count++;
			}
		}
		
	}
	if(length==count){
		cout<<"str2 is found in "<<"index of "<<i;
	}
	return 0;
}
