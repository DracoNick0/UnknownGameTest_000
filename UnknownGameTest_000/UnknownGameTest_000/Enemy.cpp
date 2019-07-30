#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include "Enemy.h"
#include "Story.h"
#include "RewardSystem.h"
using namespace std;
string choice2;

EnemyManager::EnemyManager()
{
	enemy = new tempenemy;
}

EnemyManager::~EnemyManager()
{
	if (enemy != nullptr)
	{
		//delete enemy;
	}
}

EnemyManager EnemyManager::GetEnemyManager()
{
	static EnemyManager manager;
	return manager;
}

tempenemy EnemyManager::GetEnemy()
{
	return *enemy;
}

void EnemyManager::SetEnemy(tempenemy newEnemy)
{
	if (enemy != nullptr)
	{
		enemy->EnemyHP = newEnemy.EnemyHP;
		enemy->EnemyArmor = newEnemy.EnemyArmor;
		enemy->EnemyHitChance = newEnemy.EnemyHitChance;
		enemy->EnemyHitDamage = newEnemy.EnemyHitDamage;
		enemy->EnemyAddHitDamage = newEnemy.EnemyAddHitDamage;
		enemy->EnemyCritChance = newEnemy.EnemyCritChance;
		enemy->EnemyCritDamage = newEnemy.EnemyCritDamage;
		enemy->EnemyAddCritDamage = newEnemy.EnemyAddCritDamage;
		enemy->EnemyDodge = newEnemy.EnemyDodge;
		enemy->EnemyisDead = newEnemy.EnemyisDead;
	}
}