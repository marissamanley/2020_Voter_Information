#include "States.h"



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

float States::getPerDemPres()
{
	return percentDemPres;
}

float States::getPerRepPres()
{
	return percentRepPres;
}

float States::getPerOtherPres()
{
	return percentOtherPres;
}

float States::getPerDemSen()
{
	return percentDemSen;
}

float States::getPerRepSen()
{
	return percentRepSen;
}

float States::getPerOtherSen()
{
	return percentOtherSen;
}

void States::setPerDemPres(float f)
{
	percentDemPres = f;
}

void States::setPerRepPres(float f)
{
	percentRepPres = f;
}

void States::setPerOtherPres(float f)
{
	percentOtherPres = f;
}

void States::setPerDemSen(float f)
{
	percentDemSen = f;
}

void States::setPerRepSen(float f)
{
	percentRepSen = f;
}

void States::setPerOtherSen(float f)
{
	percentOtherSen = f;
}




