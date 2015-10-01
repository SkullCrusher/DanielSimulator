/*
	Written by David Harkins (back in 2008), https://github.com/SkullCrusher/DanielSimulator
	
*/

#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>

using namespace std;

void ask_press(char looking);

char looking2 = '0';

	//Change to set a new starting beer amount.
int current_beer = 100; 

	//Buffer for the 
string beer_song = "";

	//The delay on the enter key.
int time = 1;

string out_of_beer = "~aww no more beer~";

bool kill = 0;


int main(){

	ShowWindow(GetConsoleWindow(), SW_HIDE);
	Sleep(5000);

	for (;;){

		if (GetAsyncKeyState(VK_END)){
			break;
		}

		// make the beer topic
		beer_song = "";

		if (kill == 1){
			return 0;
		}

		if (current_beer == 0){
			beer_song = out_of_beer;
			kill = 1;

		}

		if (current_beer > 0){

			stringstream ss(stringstream::in | stringstream::out);

			ss << current_beer;
			ss << " bottles of beer on the wall~";
			ss << current_beer;
			ss << " bottles of beer~";
			ss << "take one down pass it around~";

			current_beer--;

			beer_song = ss.str();
		}

		int size = beer_song.size();
		int current_size = 0;

		for (;;){
			if (current_size > size - 1){
				break;
			}

			ask_press(beer_song[current_size]);

			current_size++;
		}

	}


	return 0;
}


void ask_press(char looking){

	switch (looking){

	case 'a': keybd_event('A', NULL, NULL, NULL);
		keybd_event('A', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'b': keybd_event('B', NULL, NULL, NULL);
		keybd_event('B', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'c': keybd_event('C', NULL, NULL, NULL);
		keybd_event('C', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'd': keybd_event('D', NULL, NULL, NULL);
		keybd_event('D', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'e': keybd_event('E', NULL, NULL, NULL);
		keybd_event('E', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'f': keybd_event('F', NULL, NULL, NULL);
		keybd_event('F', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'g': keybd_event('G', NULL, NULL, NULL);
		keybd_event('G', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'h': keybd_event('H', NULL, NULL, NULL);
		keybd_event('H', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'i': keybd_event('I', NULL, NULL, NULL);
		keybd_event('I', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'j': keybd_event('J', NULL, NULL, NULL);
		keybd_event('J', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'k': keybd_event('K', NULL, NULL, NULL);
		keybd_event('K', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'l': keybd_event('L', NULL, NULL, NULL);
		keybd_event('L', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'm': keybd_event('M', NULL, NULL, NULL);
		keybd_event('M', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'n': keybd_event('N', NULL, NULL, NULL);
		keybd_event('N', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'o': keybd_event('O', NULL, NULL, NULL);
		keybd_event('O', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'p': keybd_event('P', NULL, NULL, NULL);
		keybd_event('P', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'q': keybd_event('Q', NULL, NULL, NULL);
		keybd_event('Q', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'r': keybd_event('R', NULL, NULL, NULL);
		keybd_event('R', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 's': keybd_event('S', NULL, NULL, NULL);
		keybd_event('S', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 't': keybd_event('T', NULL, NULL, NULL);
		keybd_event('T', NULL, KEYEVENTF_KEYUP, NULL);


		break;

	case 'u': keybd_event('U', NULL, NULL, NULL);
		keybd_event('U', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'v': keybd_event('V', NULL, NULL, NULL);
		keybd_event('V', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'w': keybd_event('W', NULL, NULL, NULL);
		keybd_event('W', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'x': keybd_event('X', NULL, NULL, NULL);
		keybd_event('X', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'y': keybd_event('Y', NULL, NULL, NULL);
		keybd_event('Y', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case 'z': keybd_event('Z', NULL, NULL, NULL);
		keybd_event('Z', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '1': keybd_event('1', NULL, NULL, NULL);
		keybd_event('1', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '2': keybd_event('2', NULL, NULL, NULL);
		keybd_event('2', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '3': keybd_event('3', NULL, NULL, NULL);
		keybd_event('3', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '4': keybd_event('4', NULL, NULL, NULL);
		keybd_event('4', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '5': keybd_event('5', NULL, NULL, NULL);
		keybd_event('5', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '6': keybd_event('6', NULL, NULL, NULL);
		keybd_event('6', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '7': keybd_event('7', NULL, NULL, NULL);
		keybd_event('7', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '8': keybd_event('8', NULL, NULL, NULL);
		keybd_event('8', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '9': keybd_event('9', NULL, NULL, NULL);
		keybd_event('9', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case '0': keybd_event('0', NULL, NULL, NULL);
		keybd_event('0', NULL, KEYEVENTF_KEYUP, NULL);

		break;

	case ' ': keybd_event(' ', NULL, NULL, NULL);
		keybd_event(' ', NULL, KEYEVENTF_KEYUP, NULL);

		Sleep(2);

		break;

	case '/': keybd_event(VK_DIVIDE, NULL, NULL, NULL);
		keybd_event(VK_DIVIDE, NULL, KEYEVENTF_KEYUP, NULL);
		
		Sleep(2);

		break;

	case '>': keybd_event('>', NULL, NULL, NULL);
		keybd_event('>', NULL, KEYEVENTF_KEYUP, NULL);


		Sleep(2);

		break;

	case '<': keybd_event('<', NULL, NULL, NULL);
		keybd_event('<', NULL, KEYEVENTF_KEYUP, NULL);
		
		Sleep(2);

		break;

	case '_': keybd_event('_', NULL, NULL, NULL);
		keybd_event('_', NULL, KEYEVENTF_KEYUP, NULL);
		
		Sleep(2);

		break;

	case '~': keybd_event(VK_RETURN, NULL, NULL, NULL);
		keybd_event(VK_RETURN, NULL, KEYEVENTF_KEYUP, NULL);
		Sleep(time);
		break;
	}




}