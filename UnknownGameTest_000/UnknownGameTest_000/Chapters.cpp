#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include "Chapters.h"
#include "Story.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;

LevelManager::LevelManager()
{
	level = new templevel;
}

LevelManager::~LevelManager()
{
	if (level != nullptr)
	{
		//delete level;
	}
}

LevelManager LevelManager::GetLevelManager()
{
	static LevelManager manager;
	return manager;
}

templevel LevelManager::GetLevel()
{
	return *level;
}

void LevelManager::SetLevel(templevel newLevel)
{
	if (level != nullptr)
	{
		level->CurrentChapterLevel = newLevel.CurrentChapterLevel;
	}
}

void ChapterChoice()
{
	cout << "Which chapter would you like to go to?" << endl;
	cout << "Chapter 1: Starter Village" << endl;
	cout << "Chapter 2: Goblin's Cave" << endl;
	cout << "Chapter 3: Spider's Den" << endl;
	cout << "Chapter 4: Bird's Nest" << endl;
	cout << "Chapter 5: " << endl;
	cout << "Chapter 6: " << endl;
	cout << "Chapter 7: " << endl;
	cout << "Chapter 8: " << endl;
	cout << "Chapter 9: " << endl;
	cout << "Chapter 10: " << endl;
	cout << "Chapter 666: HELL MODE" << endl << endl;

	int chapterchoice, levelchoice, i = 0;
	while (i == 0)
	{
		cin >> chapterchoice;
		if (chapterchoice == 1)
		{
			cout << "Which level would you like to go to?" << endl;
			int i;
			for (i = 1; i < 11; i++)
			{
				cout << "Level " << i << "." << endl;
			}
			cout << "Level: BOSS." << endl;
			cout << "Level: 0 (Go Back)" << endl;
			i = 0;
				while (i == 0)
				{
					cin >> levelchoice;
					if (levelchoice == 1)
					{
						cout << "You have picked level 1." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
					}
					else if (levelchoice == 2)
					{

					}
					else if (levelchoice == 3)
					{

					}
					else if (levelchoice == 4)
					{

					}
					else if (levelchoice == 5)
					{

					}
					else if (levelchoice == 6)
					{

					}
					else if (levelchoice == 7)
					{

					}
					else if (levelchoice == 8)
					{

					}
					else if (levelchoice == 9)
					{

					}
					else if (levelchoice == 10)
					{

					}
					else if (levelchoice == 0)
					{
						break;
					}
				}
				break;
		}
		else if (chapterchoice == 2)
		{

		}
		else if (chapterchoice == 3)
		{

		}
		else if (chapterchoice == 4)
		{

		}
		else if (chapterchoice == 5)
		{

		}
		else if (chapterchoice == 6)
		{

		}
		else if (chapterchoice == 7)
		{

		}
		else if (chapterchoice == 8)
		{

		}
		else if (chapterchoice == 9)
		{

		}
		else if (chapterchoice == 10)
		{

		}
		else if (chapterchoice == 666)
		{

		}
		else
		{
			cout << "Pick again, this is not a choice." << endl;
			i = 0;
		}
	}
}