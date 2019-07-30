#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
using namespace std;

struct tempplayer
{
	bool PlayerisDead = false;
	int PlayerHP = 0;
	int PlayerArmor = 0;
	int PlayerHitChance = 0;
	int PlayerHitDamage = 0;
	int PlayerAddHitDamage = 0;
	int PlayerCritChance = 0;
	int PlayerCritDamage = 0;
	int PlayerAddCritDamage = 0;
	int PlayerDodge = 0;
	int PlayerSkillCharge = 0;
	string PlayerSkill1;
	string PlayerSkill2;
	string PlayerSkill3;
	int PlayerSkill1Damage = 0;
	int PlayerSkill2Damage = 0;
	int PlayerSkill3Damage = 0;
};

class PlayerManager
{
private:
	tempplayer* player;
	PlayerManager();
public:
	~PlayerManager();
	static PlayerManager GetPlayerManager();
	tempplayer GetPlayer();
	void SetPlayer(tempplayer newPlayer);
};