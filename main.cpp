#include "h/Interpreter.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "+ Welcome to BiomarkerSQL! This is a Database Management System for Biomarker. +" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << endl;
	Interpreter ip;
	while (1) {
		ip.getcmd();
	}
	cout << "EXIT SUCCESSFULLY!" << endl;
	return 0;
}