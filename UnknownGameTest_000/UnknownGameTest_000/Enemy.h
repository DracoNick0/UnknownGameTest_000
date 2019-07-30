#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
using namespace std;

struct tempenemy
{
	bool EnemyisDead = false;
	int EnemyLv = 0;
	int EnemyHP = 0;
	int EnemyArmor = 0;
	int EnemyHitChance = 0;
	int EnemyHitDamage = 0;
	int EnemyAddHitDamage = 0;
	int EnemyCritChance = 0;
	int EnemyCritDamage = 0;
	int EnemyAddCritDamage = 0;
	int EnemyDodge = 0;
};

class EnemyManager
{
private:
	tempenemy* enemy;
	EnemyManager();
public:
	~EnemyManager();
	static EnemyManager GetEnemyManager();
	tempenemy GetEnemy();
	void SetEnemy(tempenemy newEnemy);
};