// Epsilon version 0.02 (alpha)
// Libraries
#pragma once
#include <iostream>
#include <string>

// Additional libraries
#include <chrono>
#include <thread>

// Namespaces
using namespace std;

// Global variables

// Additional functions

char returnBoolChar(bool boolean) // for sendMessage to return /n or break
{
	switch (boolean)
	{
	case 0:
		break; // nothing to return
	case 1:
		return '\n';
		break;
	}
}

// Message functions
// 1-st thread

void silentMessage(string message, bool newStroke) // [without sender] ex - Type help for command list
{
	cout << message << returnBoolChar(newStroke);
}

void sendMessage(string sender, string message,bool newStroke) // ex - [Epsilon] Epsilon initialized
{
	cout << "[" << sender << "]" << " " << message << returnBoolChar(newStroke);
}

// 2-nd thread

void recvMessage(string userName,string noteMessage)
{
	string recievedMsg;
	cout << "[" << userName << "]" << " " << noteMessage; cin >> recievedMsg;
}