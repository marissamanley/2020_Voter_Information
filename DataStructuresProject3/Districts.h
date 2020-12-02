#pragma once
#include <string>
using namespace std;

/*
 * This class holds information about each district. The information helds is:
 *	- District number
 *	- Number of voters
 *  - Names of the candidates for the US House of Representatives
 *	- Makeup of the party representation within the district
 *		- This is based off of the votes for the 2020 election
 * 
 * Districts are not meant to exist on their own. They exist within a list for each state.
 * All votes are cast at the district level, thus the senate and national election results will be 
 * by each districts party representation, rather than a representation existing for each state.
 * This is balanced by each district having its own number of voters, with its size related to the districts actual size
 */

class Districts
{
private:
	int district;
	int voterCapacity;
	int votersDem;
	int votersRep;
	int votersOther;
	int votersPresDem;
	int votersPresRep;
	int votersPresOther;
	float initPercentDem;
	float initPercentRep;
	float initPercentOther;
	string democrat;
	string republican;

public:
	Districts() {};
	Districts(int district, int voterCapacity, float percentDem, float percentRep, string democratRep, string republicanRep);

	//set functions there for potential modularity 
	int getDistrict();
	void setDistrict(int district);

	int getVoterCapacity();
	void setVoterCapacity(int voterCapacity);

	int getVotersDem();
	void setVotersDem(int v);

	int getVotersRep();
	void setVotersRep(int v);

	int getVotersOther();
	void setVotersOther(int v);

	int getVotersPresDem();
	void setVotersPresDem(int v);

	int getVotersPresRep();
	void setVotersPresRep(int v);

	int getVotersPresOther();
	void setVotersPresOther(int v);

	float getInitPercentDem();
	void setInitPercentDem(float percentDem);

	float getInitPercentRep();
	void setInitPercentRep(float percentRep);

	float getInitPercentOther();
	void setInitPercentOther(float percentOther);

	string getDemocrat();
	void setDemocrat(string dem);

	string getRepublican();
	void setRepublican(string rep);

	float getPercent(int num);
};

