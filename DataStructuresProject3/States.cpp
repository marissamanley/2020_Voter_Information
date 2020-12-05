#include "States.h"

unordered_map<int, Districts> States::districtMap;

//created so you can instantiate a states object to call the readCSV function
//Might move readCSV and maps elsewhere for modularity and separation of tasks
States::States() {};

States::States(string state, int voterCapacity, int numDistricts, string demSenator, string repSenator, int electoralVotes) {
	this->state = state;
	this->voterCapacity = voterCapacity;
	this->numDistricts = numDistricts;
	this->demSenator = demSenator;
	this->repSenator = repSenator;
	this->electoralVotes = electoralVotes;
}

States::States(const States& s)
{
	this->state = s.state;
	this->voterCapacity = s.voterCapacity;
	this->numDistricts = s.numDistricts;
	this->demSenator = s.demSenator;
	this->repSenator = s.repSenator;
	this->electoralVotes = s.electoralVotes;
	this->democratPresVotes = s.democratPresVotes;
	this->republicanPresVotes = s.republicanPresVotes;
	this->otherPresVotes = s.otherPresVotes;
	this->democratSenVotes = s.democratSenVotes;
	this->republicanSenVotes = s.republicanSenVotes;
	this->otherSenVotes = s.otherSenVotes;
}

//A bunch of get and set functions for variables in this class
string States::getState() {
	return this->state;
}

string States::getDemSenator() {
	return this->demSenator;
}

string States::getRepSenator() {
	return this->repSenator;
}

int States::getNumDistricts() {
	return this->numDistricts;
}

int States::getVoterCapacity() {
	return this->voterCapacity;
}

int States::getElectoralVotes() {
	return this->electoralVotes;
}

int States::getDemPresVotes()
{
	return democratPresVotes;
}
int States::getRepPresVotes()
{
	return republicanPresVotes;
}
int States::getOtherPresVotes()
{
	return otherPresVotes;
}
int States::getDemSenVotes()
{
	return democratSenVotes;
}
int States::getRepSenVotes()
{
	return republicanSenVotes;
}
int States::getOtherSenVotes()
{
	return otherSenVotes;
}

void States::setDemPresVotes(int v)
{
	this->democratPresVotes += v;
}

void States::setRepPresVotes(int v)
{
	this->republicanPresVotes += v;
}

void States::setOtherPresVotes(int v)
{
	this->otherPresVotes += v;
}

void States::setDemSenVotes(int v)
{
	this->democratSenVotes += v;
}

void States::setRepSenVotes(int v)
{
	this->republicanSenVotes += v;
}

void States::setOtherSenVotes(int v)
{
	this->otherSenVotes += v;
}

void States::addDemVotes(int voteCount, int districtNumber)
{
	setDemPresVotes(voteCount);
	setDemSenVotes(voteCount);
	this->districtMap[districtNumber].addVotersDem(voteCount);
}

void States::addRepVotes(int voteCount, int districtNumber)
{
	setRepPresVotes(voteCount);
	setRepSenVotes(voteCount);
	this->districtMap[districtNumber].addVotersRep(voteCount);
}

void States::addOtherVotes(int voteCount, int districtNumber)
{
	setOtherPresVotes(voteCount);
	setOtherSenVotes(voteCount);
	this->districtMap[districtNumber].addVotersOther(voteCount);
}



float States::getPercent(int num)
{
	if (num == 0)
	{
		return (float)democratPresVotes / (float)voterCapacity;
	}
	else if (num == 1)
	{
		return (float)republicanPresVotes / (float)voterCapacity;
	}
	else if (num == 2)
	{
		return (float)otherPresVotes / (float)voterCapacity;
	}
	else if (num == 3)
	{
		return (float)democratSenVotes / (float)voterCapacity;
	}
	else if (num == 4)
	{
		return (float)republicanSenVotes / (float)voterCapacity;
	}
	else if (num == 5)
	{
		return (float)otherSenVotes / (float)voterCapacity;
	}
}

void States::districtInfo()
{
	for (int i = 0; i < this->numDistricts; i++)
	{
		cout << "\nRepresentative Election Data for district " << i << " in " << this->state << ": " << endl;
		cout << "Candidate Name: " << districtMap[i].getDemocrat() << " | Vote Count: " << districtMap[i].getVotersDem() << "   | Vote Percentage: " << districtMap[i].getPercent(6) << "%" << endl;
		cout << "Candidate Name: " << districtMap[i].getRepublican() << " | Vote Count: " << districtMap[i].getVotersRep() << "   | Vote Percentage: " << districtMap[i].getPercent(7) << "%" << endl;
		cout << "Candidate Name: Other      | Vote Count: " << districtMap[i].getVotersOther() << " | Vote Percentage: " << districtMap[i].getPercent(8) << "%" << endl;
	}
}

//float States::getPerDemPres()
//{
//	return percentDemPres;
//}
//
//float States::getPerRepPres()
//{
//	return percentRepPres;
//}
//
//float States::getPerOtherPres()
//{
//	return percentOtherPres;
//}
//
//float States::getPerDemSen()
//{
//	return percentDemSen;
//}
//
//float States::getPerRepSen()
//{
//	return percentRepSen;
//}
//
//float States::getPerOtherSen()
//{
//	return percentOtherSen;
//}
//
//void States::setPerDemPres(float f)
//{
//	percentDemPres = f;
//}
//
//void States::setPerRepPres(float f)
//{
//	percentRepPres = f;
//}
//
//void States::setPerOtherPres(float f)
//{
//	percentOtherPres = f;
//}
//
//void States::setPerDemSen(float f)
//{
//	percentDemSen = f;
//}
//
//void States::setPerRepSen(float f)
//{
//	percentRepSen = f;
//}
//
//void States::setPerOtherSen(float f)
//{
//	percentOtherSen = f;
//}




