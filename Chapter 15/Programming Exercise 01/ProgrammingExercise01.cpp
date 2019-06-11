#include "tvfm.h"

int main()
{
	Tv tv;
	Remote remote;

	std::cout << "Is On: " << tv.ison() << std::endl;;
	remote.ShowIsInteractive();
	tv.ToggleIsInteractive(remote);
	remote.ShowIsInteractive();

	tv.onoff();
	std::cout << "Is On: " << tv.ison() << std::endl;;
	remote.ShowIsInteractive();
	tv.ToggleIsInteractive(remote);
	remote.ShowIsInteractive();
}