#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*

	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };

	for (int i = 0; i < 6; i++) {
		cout << word[i];
	}
	cout << endl;

	char myStr[] = "String";
	cout << myStr << " has " << sizeof(myStr) << " characters" << endl;

	for (int i = 0; i < sizeof(myStr); i++) {
		cout << static_cast<int>(myStr[i]) << " ";
	}


	myStr[1] = 'g';
	cout << myStr << endl;


	char name[15] = "max";
	cout << "My name is: " << name << endl;

	char userName[255];
	cout << "Enter your name: "; cin >> userName;


	char text[] = "Print this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << text << endl;
	cout << copy << endl;
	


	char arr[255] = "Returns";
	cout << arr << endl;




	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;



	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "copy arrays: " << endl;
	char arr2[255];
	strcpy_s(arr2, arr);
	cout << "Copy : " << arr2 << endl;
	arr2[4] = '\0';
	cout << "Copy : " << arr2 << endl;


	for (int i = 0; i < 255; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "Add to arr : " << endl;
	cout << arr << endl;
	strcat_s(arr, ".....");
	cout << arr << endl;
	cout << "enter any text: "; cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;

	*/

	/*
	
	char any_word[] = "Whitujle";
	// letter or num
	cout << any_word[0] << " ---> " << (bool)isalnum(any_word[0]) << endl;
	cout << any_word[5] << " ---> " << (bool)isalnum(any_word[5]) << endl;
	// letter
	cout << any_word[0] << " ---> " << (bool)isalpha(any_word[0]) << endl;
	cout << any_word[5] << " ---> " << (bool)isalpha(any_word[5]) << endl;
	// num
	cout << any_word[0] << " ---> " << (bool)isdigit(any_word[0]) << endl;
	cout << any_word[5] << " ---> " << (bool)isdigit(any_word[5]) << endl;
	// is big letter
	cout << any_word[0] << " ---> " << (bool)isupper(any_word[0]) << endl;
	cout << any_word[5] << " ---> " << (bool)isupper(any_word[5]) << endl;
	// is little letter
	cout << any_word[0] << " ---> " << (bool)islower(any_word[0]) << endl;
	cout << any_word[5] << " ---> " << (bool)islower(any_word[5]) << endl;
	// 
	*/
	for (int i = 0; i < 255; i++) {
		cout << i << " --> " << (char)i << endl;
	}







}