#include <iostream>
#include "../src/fileDES.hpp"
#include "../src/DES.hpp"

#include <cstring>
#include <fstream>
#include <bitset>
using namespace std;

void start(){
	FileDES des;
	string fileIn;
	string fileOut;
	int keyIn;
	cerr<<"-----------------------------------------------"<<endl;
	cerr<<"\nEnter Input text file path/name :"<<"\t"<<endl;
	cin>>fileIn;
	cerr<<"\nEnter encrypted file path"<<"\t"<<endl;
	cin>>fileOut;
	cout<<"\nEnter Key :"<<"\t";
	cin>>keyIn;
	des.setInput(fileIn);	//input file
	des.setOutput(fileOut,0); //encrypted file path
	des.setKey(keyIn);  //key for encryption
	des.encryptFile();
	cerr<<"\n\tEncryption Success"<<endl;
	cerr<<"-----------------------------------------------"<<endl;
}
void restart(){
	FileDES des;
        string fileIn;
        string fileOut;
        int keyIn;
        cerr<<"-----------------------------------------------"<<endl;
	cerr<<"\nEnter encrypted text file path/name :"<<"\t"<<endl;
        cin>>fileIn;
        cerr<<"\nEnter decrypted file path"<<"\t"<<endl;
        cin>>fileOut;
        cout<<"\nEnter Key :"<<"\t"<<endl;
        cin>>keyIn;
	des.setInput(fileIn); //encrypted text is taken for decryption
	des.setOutput(fileOut,1);  //decrypted text/message is given
	des.setKey(keyIn);  //key same as used in encryption
	des.decryptFile();  //function call for descryption
	cerr<<"\n\tDecryption of text file success"<<endl;
	cerr<<"----------------------------------------------"<<endl;
}

int main(){
	int choice;
	cerr<<"--------------------------------------------------"<<endl;
	cerr<<"|	Data Encryption Standard Project         |"<<endl;
	cerr<<"|------------------------------------------------|"<<endl;
	cerr<<"|        Enter Your Choice(1 or 2)                |"<<endl;
	cerr<<"|------------------------------------------------|"<<endl;
	cerr<<"|	Choice 1 for file encryption             |"<<endl;
	cerr<<"|------------------------------------------------|"<<endl;
	cerr<<"|        Choice 2 for file decryption             |"<<endl;
	cerr<<"--------------------------------------------------"<<endl;
	cerr<<"Choice: ";
	cin>>choice;
	cerr<<endl;
	switch(choice){
	case 1: start();
	break;
	case 2: restart();
	break;
	default: cerr<<"Wrong Argument";
	break;
	}

return 0;
}
