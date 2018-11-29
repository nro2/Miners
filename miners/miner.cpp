#include "miner.h" 

miner::miner(int num, string rsc)
{
	number = num;
	resource = rsc;
}


int miner::getNumber()
{
	return number;
}

string miner::getResource()
{
	return resource;
}

void miner::start()
{
	cout << "Miner #" << getNumber() << " (" << getResource() << ") is starting." << endl;
}

void miner::detect()
{
	cout << "Steam blasting..." << endl;
	cout << "Salinity detector activated." << endl;
	cout << "Concentration vector of NaCl detected." << endl;

}

void miner::collect()
{
	cout << "Impact hammer positioned." << endl;
	cout << "Impact hammer activated for 15 seconds." << endl;
	cout << "Debris scoop activated." << endl;
	cout << "Debris elevator activated." << endl;
	cout << "Debris collection complete." << endl;
}

void miner::stop()
{
	cout << "Miner #" << getNumber() << " (" << getResource() << ") is going to standby." << endl;
}

