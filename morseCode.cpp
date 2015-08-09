///Traductor a codigo morse
///Morse Code translator

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <ctype.h>

using namespace std;
string phraseToCode, phraseToDecode;
int phraseSize=0;
char phraseIteration[200];
stringstream phraseCoded, phraseDecoded;

void Morse()
{
	strcpy(phraseIteration,phraseToCode.c_str());
	for (int i = 0; i < phraseSize; ++i)///Iterations for the Morse convertion
	{
		if(phraseIteration[i]=='A' or phraseIteration[i]=='a')
			phraseCoded<<".-";
		else if(phraseIteration[i]=='B' or phraseIteration[i]=='b')
			phraseCoded<<"-...";
		else if(phraseIteration[i]=='C' or phraseIteration[i]=='c')
			phraseCoded<<"-.-.";
		else if(phraseIteration[i]=='D' or phraseIteration[i]=='d')
			phraseCoded<<"-..";
		else if(phraseIteration[i]=='E' or phraseIteration[i]=='e')
			phraseCoded<<".";
		else if(phraseIteration[i]=='F' or phraseIteration[i]=='f')
			phraseCoded<<"..-.";
		else if(phraseIteration[i]=='G' or phraseIteration[i]=='g')
			phraseCoded<<"--.";
		else if(phraseIteration[i]=='H' or phraseIteration[i]=='h')
			phraseCoded<<"....";
		else if(phraseIteration[i]=='I' or phraseIteration[i]=='i')
			phraseCoded<<"..";
		else if(phraseIteration[i]=='J' or phraseIteration[i]=='j')
			phraseCoded<<".---";
		else if(phraseIteration[i]=='K' or phraseIteration[i]=='k')
			phraseCoded<<"-.-";
		else if(phraseIteration[i]=='L' or phraseIteration[i]=='l')
			phraseCoded<<".-..";
		else if(phraseIteration[i]=='M' or phraseIteration[i]=='m')
			phraseCoded<<"--";
		else if(phraseIteration[i]=='N' or phraseIteration[i]=='n')
			phraseCoded<<"-.";
		else if(phraseIteration[i]=='O' or phraseIteration[i]=='o')
			phraseCoded<<"---";
		else if(phraseIteration[i]=='P' or phraseIteration[i]=='p')
			phraseCoded<<".--.";
		else if(phraseIteration[i]=='Q' or phraseIteration[i]=='q')
			phraseCoded<<"--.-";
		else if(phraseIteration[i]=='R' or phraseIteration[i]=='q')
			phraseCoded<<".-.";
		else if(phraseIteration[i]=='S' or phraseIteration[i]=='s')
			phraseCoded<<"...";
		else if(phraseIteration[i]=='T' or phraseIteration[i]=='t')
			phraseCoded<<"-";
		else if(phraseIteration[i]=='U' or phraseIteration[i]=='u')
			phraseCoded<<"..-";
		else if(phraseIteration[i]=='V' or phraseIteration[i]=='v')
			phraseCoded<<"...-";
		else if(phraseIteration[i]=='W' or phraseIteration[i]=='w')
			phraseCoded<<".--";
		else if(phraseIteration[i]=='X' or phraseIteration[i]=='x')
			phraseCoded<<"-..-";
		else if(phraseIteration[i]=='Y' or phraseIteration[i]=='y')
			phraseCoded<<"-.--";
		else if(phraseIteration[i]=='Z' or phraseIteration[i]=='z')
			phraseCoded<<"--..";
		else if(phraseIteration[i]=='1')
			phraseCoded<<".----";
		else if(phraseIteration[i]=='2')
			phraseCoded<<"..---";
		else if(phraseIteration[i]=='3')
			phraseCoded<<"...--";
		else if(phraseIteration[i]=='4')
			phraseCoded<<"....-";
		else if(phraseIteration[i]=='5')
			phraseCoded<<".....";
		else if(phraseIteration[i]=='6')
			phraseCoded<<"-....";
		else if(phraseIteration[i]=='7')
			phraseCoded<<"--...";
		else if(phraseIteration[i]=='8')
			phraseCoded<<"---..";
		else if(phraseIteration[i]=='9')
			phraseCoded<<"----.";
		else if(phraseIteration[i]=='0')
			phraseCoded<<"-----";
		else if(phraseIteration[i]==' ')
			phraseCoded<<" ";
	}
}

void Normal()
{
	strcpy(phraseIteration," ");
	strcpy(phraseIteration,phraseToDecode.c_str());
	/*Complete code*/
}

int main()
{
	int opc;
	do
	{
		cout<<"\n... --- ... Morse Code Translator ... --- ...";
		cout<<"\nOptions \n\t1-Enter phrase \n\t2-See original phrase \n\t3-See phrase size \n\t4-Phrase in Morse \n\t5-Morse to normal \n\t6-Exit \nEnter the desired option: ";
		cin>>opc;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(1024,'\n');
		}
		switch (opc)
		{
			case 1:
				cout<<"\nEnter the phrase to code. Only from A-Z and 0-9: ";
				phraseCoded.str("");
				cin.ignore();
				getline(cin,phraseToCode);
				break;

			case 2:
				cout<<"\nOriginal phrase: "<<phraseToCode;
				break;

			case 3:
				phraseSize=phraseToCode.length();
				cout<<"\nPhrase size: "<<phraseSize;
				break;

			case 4:
				Morse();
				cout<<"\nPhrase in Morse Code: "<<phraseCoded.str();
				break;

			case 5:
				cout<<"\nNot available right now";
			/*
				cout<<"\nEnter the Morse code to translate it: ";
				phraseDecoded.str("");
				cin.ignore();
				getline(cin,phraseToDecode);
				Normal();
				cout<<"\nNormal phrase: "<<phraseDecoded.str();
			*/

			case 6:
				cout<<"\nPress any key to continue...\n";
				getchar();
				break;

			default:
				cout<<"\nIncorrect option";
		}
	} while (opc!=6);	
}
