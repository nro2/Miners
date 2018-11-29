#include "magnesiumminer.h"

void magnesiumminer::start()
{
	miner::start();
}

void magnesiumminer::detect()
{
	cout << "Releasing oxygen..." << endl;
	cout << "Thermal detector activated." << endl;
	cout << "Flammable reaction detected." << endl;
}

void magnesiumminer::collect()
{
	miner::collect();
}

void magnesiumminer::stop()
{
	miner::stop();
}

