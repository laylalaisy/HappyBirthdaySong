#include<iostream>
#include<windows.h>?
#include<string>

using namespace std;

void Birthday();

int main()
{
	string name;
	int age;
	cout << "Please enter your name:" << endl;
	cin >> name;
	cout << "Please enter your age:" << endl;
	cin >> age;
	cout << "Please put on your headphone now." << endl << endl;
	
	Birthday();

	cout << "Emmmmm...Actually, it's a ³¬¼òÂª°æ±¾µöÓã³ÌÐò£¡" << endl << endl;
	
	cout << "HAPPY " << age << "'s BIRTHDAY TO " << name << endl;
	cout << "ALL BEST WISHES" << endl;
	cout << "Êý×Ö¸ç¸çÉúÈÕ¿ìÀÖÀ²~~" << endl;

	while (true)
	{
		Birthday();
	}
	return 0;
}

void Birthday()
{
	unsigned frequency[] = { 392,392,440,392,523,494,

		392,392,440,392,587,523,

		392,392,784,659,523,494,440,

		698,698,659,523,587,523 };

	unsigned delay[] = { 375,125,500,500,500,1000,

		375,125,500,500,500,1000,

		375,125,500,500,500,500,1000,

		375,125,500,500,500,1000, };
	for (int i = 0; i<25; i++)
	{
		Beep(frequency[i], delay[i]);
	}
}