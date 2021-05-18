// displaychangercpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

#include <vector>
#include <string>


int main(int argc, char* argv[])
{

	std::string argument(argv[1]);

	if (argument == "/h") {
		std::cout << "DisplaySwitchFast.exe /internal. Use this command to switch to the primary display only." << std::endl;
		std::cout << "DisplaySwitchFast.exe /external. Use this command to switch to the external display only." << std::endl;
		std::cout << "DisplaySwitchFast.exe /clone. Duplicates the primary display." << std::endl;
		std::cout << "DisplaySwitchFast.exe /extend. Expands your Desktop to the secondary display." << std::endl;
	}



	if (argument == "/internal") { SetDisplayConfig(0, NULL, 0, NULL, SDC_TOPOLOGY_INTERNAL | SDC_APPLY); }
	if (argument == "/external") { SetDisplayConfig(0, NULL, 0, NULL, SDC_TOPOLOGY_EXTERNAL | SDC_APPLY); }
	if (argument == "/clone") { SetDisplayConfig(0, NULL, 0, NULL, SDC_TOPOLOGY_CLONE | SDC_APPLY); }
	if (argument == "/extend") { SetDisplayConfig(0, NULL, 0, NULL, SDC_TOPOLOGY_EXTEND | SDC_APPLY); }
   
}


