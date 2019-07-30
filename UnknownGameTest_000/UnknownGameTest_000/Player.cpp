#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include "Player.h"
#include "RewardSystem.h"
using namespace std;

PlayerManager::PlayerManager()
{
	player = new tempplayer;
}

PlayerManager::~PlayerManager()
{
	if (player != nullptr)
	{
		//delete player;
	}
}

PlayerManager PlayerManager::GetPlayerManager()
{
	static PlayerManager manager;
	return manager;
}

tempplayer PlayerManager::GetPlayer()
{
	return *player;
}

void PlayerManager::SetPlayer(tempplayer newPlayer)
{
	if (player != nullptr)
	{
		player->PlayerisDead = newPlayer.PlayerisDead;
		player->PlayerHP = newPlayer.PlayerHP;
		player->PlayerArmor = newPlayer.PlayerArmor;
		player->PlayerHitChance = newPlayer.PlayerHitChance;
		player->PlayerHitDamage = newPlayer.PlayerHitDamage;
		player->PlayerAddHitDamage = newPlayer.PlayerAddHitDamage;
		player->PlayerCritChance = newPlayer.PlayerCritChance;
		player->PlayerCritDamage = newPlayer.PlayerCritDamage;
		player->PlayerAddCritDamage = newPlayer.PlayerAddCritDamage;
		player->PlayerDodge = newPlayer.PlayerDodge;
		player->PlayerSkillCharge = newPlayer.PlayerSkillCharge;
		player->PlayerSkill1 = newPlayer.PlayerSkill1;
		player->PlayerSkill2 = newPlayer.PlayerSkill2;
		player->PlayerSkill3 = newPlayer.PlayerSkill3;
		player->PlayerSkill1Damage = newPlayer.PlayerSkill1Damage;
		player->PlayerSkill2Damage = newPlayer.PlayerSkill2Damage;
		player->PlayerSkill3Damage = newPlayer.PlayerSkill3Damage;
	}
}