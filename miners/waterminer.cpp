#include "waterminer.h"



void waterminer::start()
{
	miner::start();
}

void waterminer::stop()
{
	miner::stop();
}

void waterminer::collect()
{
	cout << "Water vacuums and hoses deployed." << endl;
	cout << "Heater turned on. Waiting for the ice to melt." << endl;
	cout << "Liquid water moved to collection chamber." << endl;
	cout << "Surface pump activated." << endl;
}


void waterminer::detect()
{
	cout << "Initiating heat blast." << endl;
	cout << "Directional humidity detector activated." << endl;
	cout << "Ice located." << endl;
}


