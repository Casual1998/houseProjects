#include <iostream>
#include <string>
#include "client.h"
using namespace std;


Client::Client(string name){

	this->name = name;

}

void Client::printClient(){
	cout << "Nome e: " << name << endl;
}
