// Epsilon ver.01 (alpha)
#pragma once
#include <iostream>
#include <string>

using namespace std;

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

void silentMessage(string message, bool newStroke) // [without sender] ex - Type help for command list
{
	cout << message << returnBoolChar(newStroke);
}

void sendMessage(string sender, string message,bool newStroke) // ex - [Epsilon] Epsilon initialized
{
	cout << "[" << sender << "]" << " " << message << returnBoolChar(newStroke);
}