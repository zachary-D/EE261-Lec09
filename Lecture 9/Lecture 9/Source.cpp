#include <iostream>


int main()
{
	float taxRate;		//The tax rate (in decimal form)
	float income;		//The income

	bool condit1 = (taxRate > .25) && (income < 20000);


	int temperature;
	float humidity;		//Humidity (in decimal form)

	bool condit2 = (temperature <= 75) || (humidity < .70);


	int age;

	bool condit3 = (21 < age) && (age < 60);

	bool condit4 = (age == 21) || (age == 22);


	return 0;
}