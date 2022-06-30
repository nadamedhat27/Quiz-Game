#include <iostream>
#include <string>
#include <fstream>//file
#include <iomanip>//setw
#include <sstream>//convert
using namespace std;

char CharOfAnswers_S_Chemistry[8] = { 'c' , 'a' , 'b' , 'd' , 'a' , 'a' , 'd' , 'c' };
char CharOfAnswers_C_Chemistry[8] = { 'C' , 'A' , 'B' , 'D' , 'A' , 'A' , 'D' , 'C' };

char CharOfAnswers_S_Sports[8] = { 'b' , 'd' , 'b' , 'a' , 'c' , 'd' , 'a' , 'b' };
char CharOfAnswers_C_Sports[8] = { 'B' , 'D' , 'B' , 'A' , 'C' , 'D' , 'A' , 'B' };

char CharOfAnswers_S_cenima[8] = { 'c' , 'a' , 'c' , 'c' , 'a' , 'a' , 'a' , 'b' };
char CharOfAnswers_C_cenima[8] = { 'C' , 'A' , 'C' , 'C' , 'A' , 'A' , 'A' , 'B' };

char CharOfAnswers_S_Geography[8] = { 'b' , 'c' , 'a' , 'b' , 'c' , 'b' , 'b' , 'b' };
char CharOfAnswers_C_Geography[8] = { 'B' , 'C' , 'A' , 'B' , 'C' , 'B' , 'B' , 'B' };

char CharOfAnswers_S_History[8] = { 'a' , 'b' , 'c' , 'a' , 'a' , 'd' , 'b' , 'a' };
char CharOfAnswers_C_History[8] = { 'A' , 'B' , 'C' , 'A' , 'A' , 'D' , 'B' , 'A' };

char CharOfAnswers_S_Technology[8] = { 'c' , 'b' , 'a' , 'b' , 'd' , 'd' , 'd' , 'b' };
char CharOfAnswers_C_Technology[8] = { 'C' , 'B' , 'A' , 'B' , 'D' , 'D' , 'D' , 'B' };

char CharOfAnswers_S_General[8] = { 'd' , 'a' , 'd' , 'a' , 'b' , 'c' , 'd' , 'c' };
char CharOfAnswers_C_General[8] = { 'D' , 'A' , 'D' , 'A' , 'B' , 'C' , 'D' , 'C' };

void QuestionsFchemistry(int& i)
{
	string  Q1 = "1: Each day the human body breathes in ______ liters of air. \n",
		Q2 = "2: The most abundant element in the universe is ______. \n",
		Q3 = "3: The substance which increases the rate of chemical reaction is ______. \n",
		Q4 = "4: The average human body contains about ______ grams of Sodium Chloride. \n",
		Q5 = "1: PH is an abbreviation for ______? \n",
		Q6 = "2: ______ are biological catalysts. \n",
		Q7 = "3: The most abundant constituent in Air is ______. \n",
		Q8 = "4: Isotopes are atoms of the same element with different numbers of ______. \n";
	string Questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << Questions[i];
}

void AnswersFchemistry(int& i)
{
	string  A1 = " A: 5,000 to 10,000 \n B: 10, 000 to 15, 000 \n C: 15, 000 to 20, 000 \n D: 20, 000 to 25, 000 \n",
		A2 = " A: Hydrogen \n B: Oxygen \n C: Carbon dioxide \n D: Silicon \n",
		A3 = " A: Metal \n B: Catalyst \n C: Alloy \n D: Enzymes \n",
		A4 = " A: 190 \n B: 210 \n C: 230 \n D: 250 \n",
		A5 = " A: Power of Hydrogen \n B: Possibility of Hydrogen \n C: Population of Hydrogen \n D: Position of Hydrogen \n",
		A6 = " A: Enzymes \n B: Minerals \n C: Protiens \n D: Vitamins \n",
		A7 = " A: Oxygen \n B: Hydrogen \n C: Carbondioxide \n D: Nitrogen \n",
		A8 = " A: Protons \n B: Electrons \n C: Neutrons \n D: Positron \n";
	string Answers[8] = { A1 , A2 , A3 , A4, A5 , A6 , A7 , A8 };
	cout << Answers[i];
}

void QuestionsFsports(int& i)
{
	string  Q1 = "1: In which among the following years, the Modern Olympic games were held for the first time? \n",
		Q2 = "2: Which among the following teams was first winner of World Cup Hockey? \n",
		Q3 = "3: Who is  the 2018 World Boxing Associations Middleweight Champion female? \n",
		Q4 = "4: Which country is the current champion of Uber Cup? \n",
		Q5 = "1: How many nations had participated in the first Olympic Games held in 1896? \n",
		Q6 = "2: Where were the first Summer Olympics held? \n",
		Q7 = "3: Which of the following is also known as Rink hockey? \n",
		Q8 = "4: Which FIFA Football World Cup was held in 2018 in Russia? \n";
	string Questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << Questions[i];
}

void AnswersFsports(int& i)
{
	string  A1 = " A: 1889 \n B: 1896 \n C: 1876 \n D: 1898 \n",
		A2 = " A: Spain \n B: France \n C: UK \n D: Pakistan \n",
		A3 = " A: Alicia Napolean \n B: Claressa Shields \n C: Hanna Gabriel \n D: Liliana Palmera \n ",
		A4 = " A: Japan \n B: China \n C: Indonesia \n D: USA \n",
		A5 = " A: 20 \n B: 35 \n C: 14 \n D: 63 \n",
		A6 = " A: Singapore \n B: South Korea \n C: Germany \n D: Greece \n",
		A7 = " A: Roller Hockey \n B: Field Hockey \n C: Ice Hockey \n D: Sledge Hockey \n",
		A8 = " A: 20th FIFA World Cup \n B: 21st FIFA World Cup \n C: 22nd FIFA World Cup \n D: 23rd FIFA World Cup \n";
	string Answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << Answers[i];
}

void QuestionsFcenima(int& i)
{
	string  Q1 = "1: Who is the hero of Sadat's days movie? \n",
		Q2 = "2: The actress with the title of Lady of the Arab Screen? \n",
		Q3 = "3: (I'm not going to live in my dad's robes'), When is it screened for the first time? \n",
		Q4 = "4: The Singer who is called king? \n",
		Q5 = "1: From the works of the  actor Ahmed Helmy? \n",
		Q6 = "2: Who was the director of The Play Raya and Sakina? \n",
		Q7 = "3: From the songs of Um Kulthum? \n",
		Q8 = "4: Who composed the Egyptian national anthem? \n";
	string Questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << Questions[i];
}

void AnswersFcenima(int& i)
{
	string  A1 = " A: Nour El Sherif \n B: Adel Emam \n C: Ahmed Zaki \n D: Ahmed Mostafa \n ",
		A2 = " A: Faten Hamama \n B: Shadia \n C: Rania Youssef \n D: Naglaa Fathy \n",
		A3 = " A: 1999 \n B: 1965 \n C: 1996 \n D: 2001 \n ",
		A4 = " A: Amr diab \n B: Tamer Hosny \n C: Mohamed Mounir \n D: Mohamed Hamaki \n",
		A5 = " A: Zaki Shan \n B: The cell \n C: Terrorism and kebabs \n D: The global \n ",
		A6 = " A: Najib Al Rihani \n B: Peter Mimi \n C: Amr Salama \n D: Youssef Shaaban \n ",
		A7 = " A: Enta Omri \n B: Ahwak \n C: Wahashtiny \n D: El Hob kolo \n",
		A8 = " A: Abd Al Halim Hafez \n B: Sayed Darwish \n C: Mohammad Ashraf \n D: Mostafa Saad \n";
	string Answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << Answers[i];
}

void QuestionsFgeography(int& i)
{
	string  Q1 = "1: What is the longest river in the world? \n",
		Q2 = "2: What is the smallest country in the world? \n",
		Q3 = "3: What is the world's widest river? \n",
		Q4 = "4: What is the most banana-producing Arab country? \n",
		Q5 = "1: What is the last continent to be discovered? \n",
		Q6 = "2: What is the largest gulf in the world? \n",
		Q7 = "3: What is The capital of Egypt? \n",
		Q8 = "4: what are the mountains that separate Asia from Europe? \n";
	string Questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << Questions[i];
}

void AnswersFgeography(int& i)
{
	string  A1 = " A: Amazon \n B: Nile \n C: Tigirs \n D: El phrates River \n",
		A2 = " A: Egypt \n B: Austria \n C: Vatican \n D: Cairo \n",
		A3 = " A: Amazon \n B: Nile \n C: Tigris \n D: Euphrates \n",
		A4 = " A: Egypt \n B: Somalia \n C: USA \n D: Canada \n",
		A5 = " A: African \n B: Asia \n C: The south pole \n D: Europe \n",
		A6 = " A: Gulf of Aqaba \n B: Gulf of Mexico \n C: Persian Gulf \n D: Youssef gulf \n",
		A7 = " A: Alex \n B: Cairo \n C: Asuit \n D: Benha \n",
		A8 = " A: Alps \n B: Ural \n C: The red sea mountains \n D: El Mokattam \n";
	string Answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << Answers[i];
}

void  QuestionsFhistory(int& i)
{
	string  Q1 = "1: One of the ancient world wonders, the Hanging Gardens, was found in which city? \n",
		Q2 = "2. Which organization was awarded the Nobel Peace Prize in 1917? \n",
		Q3 = "3: Which Greek historian is known as the Father of History? \n",
		Q4 = "4: The Ptolemy dynasty ruled which ancient kingdom? \n",
		Q5 = "1: Who was the founder of the Mongol Empire? \n",
		Q6 = "2: Which great wonder of the Ancient World still stands today? \n",
		Q7 = "3: Which South American country has a famous canal running through it? \n",
		Q8 = "4: What is the name of the first pyramid ever built? \n";
	string questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << questions[i];
}

void  AnswersFhistory(int& i)
{
	string  A1 = " A: Babylon \n B: Cairo \n C: Baghdad \n D: Tripoli \n",
		A2 = " A: World health organization \n B: The Red Cross \n C: International red cross \n D: International labuor organization \n",
		A3 = " A: Socrates \n B: Sophocles \n C: Herodotus \n D: Aristophanes \n",
		A4 = " A: Egypt \n B: China \n C: The Greeks \n D: Persian Empire \n",
		A5 = " A: Genghis Khan \n B: Oktay Khan \n C: Geok Khan \n D: Monko Khan \n",
		A6 = " A: Hanging Gardens of Babylon \n B: Great Wall of China \n C: Lighthouse of Alexandria \n D: Giza Pyramid \n",
		A7 = " A: Suzhou \n B: Panama \n C: Venice \n D: Stockholm \n",
		A8 = " A: The Great Pyramid \n B: Pyramid of Djoser \n C: Khafre's pyramid \n D: Menkaure pyramid \n ";
	string answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << answers[i];
}

void QuestionsFtechnology(int& i)
{
	string  Q1 = "1: Which programming language is exculusively used for artificial intelligence? \n",
		Q2 = "2: First computer virus is known as ______. \n",
		Q3 = "3: Firewall in computer is used for ______. \n",
		Q4 = "4: Which of the following programming language is used  to create programs like applets? \n",
		Q5 = "1: Computer hard disk was first introduced in 1956 by ______. \n",
		Q6 = "2: In which year '@' sign first choosen for it's use in e-mail address? \n",
		Q7 = "3: Who is known as the father of supercomputing? \n",
		Q8 = "4: Who created the c programming language? \n";
	string Questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << Questions[i];
}

void AnswersFtechnology(int& i)
{
	string  A1 = " A: C language \n B: java \n C: Prolog \n D: J2EE \n",
		A2 = " A: Elk cloner \n B: Creeper virus \n C: SCA virus \n D: Rabbit \n",
		A3 = " A: Security \n B: Data transmission \n C: Monitoring \n D: Authentication \n",
		A4 = " A: C++ \n B: Java \n C: Basic\n D: COBOL \n",
		A5 = " A: Dell \n B: Apple \n C: Microsoft \n D: IBM \n",
		A6 = " A: 1976 \n B: 1980 \n C: 1977 \n D: 1972 \n",
		A7 = " A: David J.Brown \n B: Gene Amdahl \n C: Adam Dunkels \n D: Seymour cray \n",
		A8 = " A: Ken Thomposon \n B: Dennis Ritchie \n C: Robin Milner \n D: Frieder Nake \n";
	string Answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << Answers[i];
}

void QuestionsFgeneral(int& i)
{
	string  Q1 = "1: When was the first car in the world invented? \n",
		Q2 = "2: What is the first mosque built in egypt? \n",
		Q3 = "3: What are the animals with the sharpest hearing? \n",
		Q4 = "4: Which animal does not drink water? \n",
		Q5 = "1: What is the sourah that was named 'the heart of Quran'? \n",
		Q6 = "2: Among the marine creatures, scientists classified one of them as the most intelligent ,so what is it? \n",
		Q7 = "3: How many red blood cells can the body produce per day \n",
		Q8 = "4: How many hearts does an Octopus have? \n";
	string questions[8] = { Q1 , Q2 , Q3 , Q4 , Q5 , Q6 , Q7 , Q8 };
	cout << questions[i] << endl;
}

void AnswersFgeneral(int& i)
{
	string  A1 = " A: 1750 \n B: 1760 \n C: 1805 \n D: 1769 \n",
		A2 = " A: The Amr Ibn al-Aas mosque \n B: Al-AZhar mosque \n C: Ahmed bin Touloun mosque \n D: Sadat Quraysh mosque \n",
		A3 = " A: Lions \n B: Parrots \n C: Eagles \n D: Donkeys \n",
		A4 = " A: Wild kangaroo \n B: Crocodile \n C: Frogs \n D: Fox \n",
		A5 = " A: Yassin \n B: Al Fateha \n C: Al Kawthar \n D: Al Molk \n",
		A6 = " A: Sharks \n B: Lion \n C: Dolphin \n D: Horse \n",
		A7 = " A: 167 million cells \n B: 100 million cells \n C: 500 million cells \n D: 200 million cells \n",
		A8 = " A: One heart \n B: Two hearts \n C: Three hearts \n D: Four hearts \n";
	string answers[8] = { A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 };
	cout << answers[i] << endl;
}
struct score_data
{
	int score;

	int choice1, choice2, Decision;
	int* ptr;
};
struct player_information
{
	string username, word, TheOldScore;
};
struct Answer_data
{
	char Answer;
	bool AnswerIs, FindIt = false, DecisionIs;
};

int main()
{
	score_data x;
	x.score = 0;
	fstream TheOldFile("usernames.txt", ios::in);
	player_information y;
	Answer_data z;
	x.ptr = &x.score;
	cout << " What's your name ? \n";
	cin >> y.username;
	while (TheOldFile >> y.word)
	{
		if (y.word == y.username)
		{
			z.FindIt = true;
			getline(TheOldFile, y.TheOldScore);
			break;
		}
		else
			z.FindIt = false;
	}
	if (z.FindIt == true)
	{
		cout << " Welcome back " << y.username << endl;
		cout << " your score is" << y.TheOldScore << endl;
		stringstream ss;
		ss << y.TheOldScore;
		ss >> x.score;
		cout << " Do you wanna reset your score? _ Press 0 to reset. \n";
		cin >> x.Decision;
		if (x.Decision == 0)
			z.DecisionIs = true;
		else
			z.DecisionIs = false;

		if (z.DecisionIs == true)
			x.score = 0;
		else
			cout << " Good Decision! " << endl;
	}
	else
	{
		cout << " Welcome in this quiz game \t" << y.username << " \n "
			<< " If your answer is correct you'll get 10 points \n"
			<< " and if it's wrong you'll lose \n"
			<< " This game consists of 2 rounds, to reach the second you have to pass the first one. \n";
	}

	cout << " Note: Press a,b,c or d then Enter. \n \n" << endl;

	do
	{
		cout << " Choose the feild. \n -Press 1 for Chemistry \n -Press 2 for Sports \n -Press 3 for Cinema \n -Press 4 for Geography \n -Press 5 for History \n -Press 6 for Technology \n -Press 7 for General Information \n";
		cin >> x.choice2;
		switch (x.choice2)
		{
		case 1:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFchemistry(i);
				AnswersFchemistry(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_Chemistry[i] || z.Answer == CharOfAnswers_C_Chemistry[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Chemistry[i] << "\n";
				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that water expands when freezes unlike other substances \n";
				cout << setfill('*') << setw(82) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";
				for (int i = 4; i < 8; i++)
				{
					QuestionsFchemistry(i);
					AnswersFchemistry(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_Chemistry[i] || z.Answer == CharOfAnswers_C_Chemistry[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Chemistry[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;

		case 2:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFsports(i);
				AnswersFsports(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_Sports[i] || z.Answer == CharOfAnswers_C_Sports[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Sports[i] << "\n";

				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that  Golf is the only sport to be played on the moon.\n";
				cout << setfill('*') << setw(80) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";
				for (int i = 4; i < 8; i++)
				{
					QuestionsFsports(i);
					AnswersFsports(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_Sports[i] || z.Answer == CharOfAnswers_C_Sports[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Sports[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;

		case 3:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFcenima(i);
				AnswersFcenima(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_cenima[i] || z.Answer == CharOfAnswers_C_cenima[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_cenima[i] << "\n";

				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that Samir Ghanem, one of the most famous Egyptian Comedians,\n";
				cout << "Died not long ago:( please pray for him ..\n";
				cout << setfill('*') << setw(80) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";

				for (int i = 4; i < 8; i++)
				{
					QuestionsFcenima(i);
					AnswersFcenima(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_cenima[i] || z.Answer == CharOfAnswers_C_cenima[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_cenima[i] << "\n";

					}


					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;

		case 4:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFgeography(i);
				AnswersFgeography(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_Geography[i] || z.Answer == CharOfAnswers_C_Geography[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Geography[i] << "\n";

				}


				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that (Idrissi) is the first to map the world on all continents.\n";
				cout << setfill('*') << setw(80) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";

				for (int i = 4; i < 8; i++)
				{
					QuestionsFgeography(i);
					AnswersFgeography(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_Geography[i] || z.Answer == CharOfAnswers_C_Geography[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Geography[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;

		case 5:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFhistory(i);
				AnswersFhistory(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_History[i] || z.Answer == CharOfAnswers_C_History[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_History[i] << "\n";

				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that The burning of Al-Aqsa Mosque by the Jews for the first time in 1969.\n";
				cout << setfill('*') << setw(80) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";
				for (int i = 4; i < 8; i++)
				{
					QuestionsFhistory(i);
					AnswersFhistory(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_History[i] || z.Answer == CharOfAnswers_C_History[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_History[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;
		case 6:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFtechnology(i);
				AnswersFtechnology(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_Technology[i] || z.Answer == CharOfAnswers_C_Technology[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Technology[i] << "\n";

				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that IT is one of the most famous and prominent types of  technology. \n";
				cout << setfill('*') << setw(80) << "\n \n";

				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";
				for (int i = 4; i < 8; i++)
				{
					QuestionsFtechnology(i);
					AnswersFtechnology(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_Technology[i] || z.Answer == CharOfAnswers_C_Technology[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_Technology[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;
				}
			}
			break;
		case 7:
			cout << " This is the first round! \n";
			for (int i = 0; i < 4; i++)
			{
				QuestionsFgeneral(i);
				AnswersFgeneral(i);
				cin >> z.Answer;
				if (z.Answer == CharOfAnswers_S_General[i] || z.Answer == CharOfAnswers_C_General[i])
				{
					z.AnswerIs = true;
				}
				else
				{
					z.AnswerIs = false;
					cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_General[i] << "\n";

				}

				if (z.AnswerIs == true)
				{
					*x.ptr += 10;
					continue;
				}
				else
					break;
			}
			if (z.AnswerIs == false)
				break;
			else
			{
				cout << setfill('*') << setw(80) << "\n";
				cout << "Hey ," << y.username << " Do you know that Female sharks have thicker skins than males.\n";
				cout << setfill('*') << setw(80) << "\n \n";
				cout << "Good Job " << y.username << " You are now in  the second round! \n \n";
				for (int i = 4; i < 8; i++)
				{
					QuestionsFgeneral(i);
					AnswersFgeneral(i);
					cin >> z.Answer;
					if (z.Answer == CharOfAnswers_S_General[i] || z.Answer == CharOfAnswers_C_General[i])
					{
						z.AnswerIs = true;
					}
					else
					{
						z.AnswerIs = false;
						cout << "Wrong answer :(....The correct answer is  " << CharOfAnswers_C_General[i] << "\n";

					}

					if (z.AnswerIs == true)
					{
						*x.ptr += 10;
						continue;
					}
					else
						break;//for loop
				}
			}
			break;//case
		default:
			cout << " Wrong number!! please put a correct number. \n";
		}

		cout << " your score is " << *x.ptr << endl;

		cout << " Do you want to continue? \n press 1 to continue." << endl;
		cin >> x.choice1;
	} while (x.choice1 == 1);

	if (z.FindIt == true)
	{
		cout << " Goodbye. " << endl;
		fstream TheOldFile("usernames.txt", ios::out);
		TheOldFile << setw(10) << y.username << "  ";
		TheOldFile << setw(6) << x.score << endl;
		TheOldFile.close();
	}
	else
	{
		cout << " Goodbye! " << endl;
		fstream TheOldFile("usernames.txt", ios::app);
		TheOldFile << setw(10) << y.username << "  ";
		TheOldFile << setw(6) << x.score << endl;
		TheOldFile.close();
	}
	TheOldFile.close();

	return 0;
}
