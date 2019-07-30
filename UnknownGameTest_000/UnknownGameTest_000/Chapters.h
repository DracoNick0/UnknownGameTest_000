#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
using namespace std;

struct templevel
{
	int CurrentChapterLevel = 0;
};

class LevelManager
{
private:
	templevel* level;
	LevelManager();
public:
	~LevelManager();
	static LevelManager GetLevelManager();
	templevel GetLevel();
	void SetLevel(templevel newLevel);
};

struct levelcompletion
{

};

void ChapterChoice();