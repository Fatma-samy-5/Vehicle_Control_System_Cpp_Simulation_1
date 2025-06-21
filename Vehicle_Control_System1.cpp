// Vehicle_Control_System.cpp
//

#include <iostream>
#include <string>
using namespace std;

class vehicle_control_system {
public:
	float Vehicle_Speed = 60;
	float Room_Temperature = 25.0;
	float Engine_Temperature = 120.0;
	string AC_Stat = "OFF";
	string Engine_Controller_State = "OFF";
};

string engine_state;
vehicle_control_system x;

void menu1();
void menu2();
void quit();
void traffic_light();
void speed();
void room_temp();
void engine_temp();
void system_state();


int main()
{
	cout << "WELCOME! ^_^ \n\n";
	menu1();
}

//quit or run
void menu1() {
	cout << "a. Turn on the vehicle engine\n";
	cout << "b. Quit the system\n\n";

	char x;
	cin >> x;
	cout << "------------------------------------------------------------------------\n";

	if (x == 'a') {
		engine_state = "ON";
		menu2();
	}

	else if (x == 'b')
		quit();

}

void quit() {
	cout << "Are you sure you want to quit the system?\n";
	cout << "a. Yes\n";
	cout << "b. No\n\n";

	char y;
	cin >> y;
	cout << "------------------------------------------------------------------------\n";

	if (y == 'a') {
		cout << "The program will be locked\n\n";
	}

	else if (y == 'b')
		menu1();

}

//sensor set menu
void menu2() {
	cout << "a. Turn off the engine\n";
	cout << "b. Set the traffic light color\n";
	cout << "c. Set the room temperature\n";
	cout << "d. Set the engine temperature\n\n";

	char z;
	cin >> z;
	cout << "------------------------------------------------------------------------\n";

	if (z == 'a') {
		engine_state = "OFF";
		menu1();
	}
	else if (z == 'b')
		traffic_light();
	else if (z == 'c')
		room_temp();
	else if (z == 'd')
		engine_temp();
}

void traffic_light() {
	cout << "Enter the traffic light color (G-O-R)\n";

	char t;
	cin >> t;
	cout << "------------------------------------------------------------------------\n";

	if (t == 'G')
		x.Vehicle_Speed = 100;
	else if (t == 'O') {
		x.Vehicle_Speed = 30;
		speed();
	}
	else if (t == 'R')
		x.Vehicle_Speed = 0;

	system_state();
	cout << "------------------------------------------------------------------------\n";
	menu2();
}

//speed = 30
void speed() {

	x.AC_Stat = "ON";
	x.Room_Temperature = x.Room_Temperature*(5.0 / 4) + 1;
	x.Engine_Controller_State = "ON";
	x.Engine_Temperature = x.Engine_Temperature*(5.0 / 4) + 1;

}

void room_temp() {

	cout << "Enter the room temperature\n\n";
	float temp;
	cin >> temp;

	if ((temp<10) || (temp>30))
	{
		x.AC_Stat = "ON";
		x.Room_Temperature = 20;
	}
	else {
		x.AC_Stat = "OFF";
		x.Room_Temperature = temp;
	}

	system_state();
	cout << "------------------------------------------------------------------------\n";
	menu2();

}

void engine_temp() {

	cout << "Enter the engine temperature\n\n";
	float s;
	cin >> s;
	if ((s<100) || (s>150))
	{
		x.Engine_Controller_State = "ON";
		x.Engine_Temperature = 125;
	}
	else {
		x.Engine_Controller_State = "OFF";
		x.Engine_Temperature = s;
	}

	system_state();
	cout << "------------------------------------------------------------------------\n";
	menu2();

}

void system_state() {

	cout << "i.   Engine state: " << engine_state << "\n";
	cout << "ii.  AC: " << x.AC_Stat << "\n";
	cout << "iii. Vehicle speed: " << x.Vehicle_Speed << " km/hr" << "\n";
	cout << "iv.  Room temperature: " << x.Room_Temperature << " degree celsius" << "\n";
	cout << "v.   Engine temperature controller state: " << x.Engine_Controller_State << "\n";
	cout << "vi.  Engine temperature: " << x.Engine_Temperature << " degree celsius" << "\n";

}
