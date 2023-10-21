////#include <iostream>
////#include <string>
////using namespace std;
////
////int main_1()
////{
////	string s1,s2;
////
////	cout<<"Enter string s1:";
////	getline(cin,s1);
////
////	s2 = s1;
////
////	cout<<"s1 ="<<s1<<endl;
////	cout<<"s2="<<s2;
////
////	return 0;
////}
//// string append
//int main_append()
//{
//	string s1 = "fam";
//	string s2 = "ily";
//
//	s1.append(s2);
//	//s1=s1+s2;
//	cout<<s1<<endl;
//	return 0;
//}
////string clear
//int main_clear()
//{
//	string s1 = "ldfjpodfjpdnfposdjfdf dofijdpojsdf";
//	string s2= "orhgpmcao asohtcpfo";
//	s2.clear();
//	cout<<s1<<s2;
//	return 0;
//}
////string compare
//int main_cmp()
//{
//	string s1 = "abc";
//	string s2 = "abc";
//	cout<<s2.compare(s1)<<endl;
//	return 0;
//}
////or
//int main_compare()
//{
//  std::string str1 ("green apple");
//  std::string str2 ("red apple");
//
//  if (str1.compare(str2) != 0)
//    std::cout << str1 << " is not " << str2 << '\n';
//
//  if (str1.compare(6,5,"apple") == 0)
//    std::cout << "still, " << str1 << " is an apple\n";
//
//  if (str2.compare(str2.size()-5,5,"apple") == 0)
//    std::cout << "and " << str2 << " is also an apple\n";
//
//  if (str1.compare(6,5,str2,4,5) == 0)
//    std::cout << "therefore, both are apples\n";
//
//  return 0;
//}
////string empty
//int main_empty()
//{
//	string s1 = "abc";
//	//cout<<s1<<endl;
//
//	s1.clear();
//
//	if(s1.empty())
//		cout<<"string is empty";
//	return 0;
//}
////string erase
//int main_erase(){
//	string s1="khaleel";
//	s1.erase(2,3);
//	cout<<s1<<endl;
//	return 0;
//}
////string find
//int main_find()
//{
//	string s1="khaleelahmed";
//	cout<<s1.find("a")<<endl;
//	return 0;
//}
////string begin
//int main_begin()
//{
//	string s1="kcmiojdfdnlampokpczieofn";
//
//}
//// string::at
//
//int main_at()
//{
//  std::string str ("Test string");
//  for (unsigned i=0; i<str.length(); ++i)
//  {
//    std::cout << str.at(i);
//  }
//  return 0;
//}
////string back
//int main_back()
//{
//	string s1 = "Hello world!";
//
//	//cout<<s1.back()<<endl;
//	return 0;
//}//this program will work on online compiler
//
////string capacity
//int main_capacity()
//{
//	string s1 = "khaleel";
//
//	cout<<"capacity: "<<s1.capacity()<<endl;
//	return 0;
//}
////string c-begin
////int main()
////{
////	string s1= "Lorem ";
////
////	cout<<s1.cbegin()<<endl;
////	return 0;
////}
////string copy
//int main_copy()
//{
//	char str1[20];
//    string str2="Hi  how are you";
//    size_t length=str2.copy(str1,9,5); // we are copying string from str2 to str1 //it will go with last index value
//    str1[length]='\0';
//    cout<<"The copy string is : "<<str1<<endl;
//
//}
//
////This is the Example of Assign Function
//int main(){
//	string str1;
//	string str2="Hello World";
//
//	str1.assign(str2);
//	cout<<"The values of assign str1 is : "<<str1<<endl;
//	// it wil assign the values the char index start with 6 and add till 5 charater of 6 index to 5 character
//	str1.assign(str2,6,5);
//	cout<<"The values of assign str1 is only Strating with 6 values : "<<str1<<endl;
//}

