#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include "Chapters.h"
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
	templevel Level = LevelManager::GetLevelManager().GetLevel();
	cout << "Which chapter would you like to go to?" << endl;
	cout << "Chapter 1: " << endl;
	cout << "Chapter 2: " << endl;
	cout << "Chapter 3: " << endl;
	cout << "Chapter 4: " << endl;
	cout << "Chapter 5: " << endl;
	cout << "Chapter 6: " << endl;
	cout << "Chapter 7: " << endl;
	cout << "Chapter 8: " << endl;
	cout << "Chapter 9: " << endl;
	cout << "Chapter 10: " << endl;
	cout << "Chapter 666: HELL MODE" << endl << endl;

	int chapterchoice, levelchoice, i = 0, ii = 0;
	while (ii == 0)
	{
		if (ii == 1) break;
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
			while (ii == 0)
			{
				cin >> levelchoice;
				if (levelchoice == 1)
				{
					cout << "You have picked level 1." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 1;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 2)
				{
					cout << "You have picked level 2." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 2;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 3)
				{
					cout << "You have picked level 3." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 3;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 4)
				{
					cout << "You have picked level 4." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 4;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 5)
				{
					cout << "You have picked level 5." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 5;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 6)
				{
					cout << "You have picked level 6." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 6;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 7)
				{
					cout << "You have picked level 7." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 7;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 8)
				{
					cout << "You have picked level 8." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 8;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 9)
				{
					cout << "You have picked level 9." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 9;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 10)
				{
					cout << "You have picked level 10." << endl;
					cout << "Transporting... Please wait." << endl;
					this_thread::sleep_for(std::chrono::milliseconds(3000));
					Level.CurrentChapterLevel = 10;
					LevelManager::GetLevelManager().SetLevel(Level);
					ii = 1;
				}
				else if (levelchoice == 0)
				{
					cout << "Which chapter would you like to go to?" << endl;
					cout << "Chapter 1: " << endl;
					cout << "Chapter 2: " << endl;
					cout << "Chapter 3: " << endl;
					cout << "Chapter 4: " << endl;
					cout << "Chapter 5: " << endl;
					cout << "Chapter 6: " << endl;
					cout << "Chapter 7: " << endl;
					cout << "Chapter 8: " << endl;
					cout << "Chapter 9: " << endl;
					cout << "Chapter 10: " << endl;
					cout << "Chapter 666: HELL MODE" << endl << endl;
					break;
				}
				if (ii == 1) break;
			}
		}
		else if (chapterchoice == 2)
		{

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
				while (ii == 0)
				{
					cin >> levelchoice;
					if (levelchoice == 1)
					{
						cout << "You have picked level 1." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 11;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 2)
					{
						cout << "You have picked level 2." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 12;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 3)
					{
						cout << "You have picked level 3." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 13;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 4)
					{
						cout << "You have picked level 4." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 14;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 5)
					{
						cout << "You have picked level 5." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 15;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 6)
					{
						cout << "You have picked level 6." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 16;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 7)
					{
						cout << "You have picked level 7." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 17;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 8)
					{
						cout << "You have picked level 8." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 18;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 9)
					{
						cout << "You have picked level 9." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 19;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 10)
					{
						cout << "You have picked level 10." << endl;
						cout << "Transporting... Please wait." << endl;
						this_thread::sleep_for(std::chrono::milliseconds(3000));
						Level.CurrentChapterLevel = 20;
						LevelManager::GetLevelManager().SetLevel(Level);
						ii = 1;
					}
					else if (levelchoice == 0)
					{
						cout << "Which chapter would you like to go to?" << endl;
						cout << "Chapter 1: " << endl;
						cout << "Chapter 2: " << endl;
						cout << "Chapter 3: " << endl;
						cout << "Chapter 4: " << endl;
						cout << "Chapter 5: " << endl;
						cout << "Chapter 6: " << endl;
						cout << "Chapter 7: " << endl;
						cout << "Chapter 8: " << endl;
						cout << "Chapter 9: " << endl;
						cout << "Chapter 10: " << endl;
						cout << "Chapter 666: HELL MODE" << endl << endl;
						break;
					}
					if (ii == 1) break;
				}
			}
		}
		else if (chapterchoice == 3)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 21;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 22;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 23;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 24;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 25;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 26;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 27;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 28;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 29;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 30;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 4)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 31;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 32;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 33;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 34;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 35;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 36;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 37;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 38;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 39;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 40;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 5)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 41;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 42;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 43;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 44;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 45;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 46;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 47;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 48;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 49;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 50;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 6)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 51;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 52;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 53;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 54;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 55;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 56;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 57;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 58;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 59;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 60;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 7)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 61;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 62;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 63;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 64;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 65;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 66;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 67;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 68;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 69;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 70;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 8)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 71;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 72;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 73;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 74;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 75;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 76;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 77;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 78;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 79;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 80;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 9)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 81;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 82;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 83;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 84;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 85;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 86;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 87;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 88;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 89;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 90;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 10)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 91;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 92;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 93;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 94;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 95;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 96;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 97;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 98;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 99;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 100;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else if (chapterchoice == 666)
		{

			{

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
					while (ii == 0)
					{
						cin >> levelchoice;
						if (levelchoice == 1)
						{
							cout << "You have picked level 1." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 111;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 2)
						{
							cout << "You have picked level 2." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 112;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 3)
						{
							cout << "You have picked level 3." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 113;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 4)
						{
							cout << "You have picked level 4." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 114;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 5)
						{
							cout << "You have picked level 5." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 115;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 6)
						{
							cout << "You have picked level 6." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 116;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 7)
						{
							cout << "You have picked level 7." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 117;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 8)
						{
							cout << "You have picked level 8." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 118;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 9)
						{
							cout << "You have picked level 9." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 119;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 10)
						{
							cout << "You have picked level 10." << endl;
							cout << "Transporting... Please wait." << endl;
							this_thread::sleep_for(std::chrono::milliseconds(3000));
							Level.CurrentChapterLevel = 120;
							LevelManager::GetLevelManager().SetLevel(Level);
							ii = 1;
						}
						else if (levelchoice == 0)
						{
							cout << "Which chapter would you like to go to?" << endl;
							cout << "Chapter 1: " << endl;
							cout << "Chapter 2: " << endl;
							cout << "Chapter 3: " << endl;
							cout << "Chapter 4: " << endl;
							cout << "Chapter 5: " << endl;
							cout << "Chapter 6: " << endl;
							cout << "Chapter 7: " << endl;
							cout << "Chapter 8: " << endl;
							cout << "Chapter 9: " << endl;
							cout << "Chapter 10: " << endl;
							cout << "Chapter 666: HELL MODE" << endl << endl;
							break;
						}
						if (ii == 1) break;
					}
				}
			}
		}
		else
		{
			cout << "Pick again, this is not a choice." << endl;
		}
	}
	ii = 0;
}