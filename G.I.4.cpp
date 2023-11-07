#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;
int main(){

    int choice, score;
    char q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,  again;
do{
    HANDLE col;
	col = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col, 2);
	cout<<"\n__________________________________________";
	SetConsoleTextAttribute(col, 15);
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 6);
	cout<<"\n|             Choose Quiz                |";  
	SetConsoleTextAttribute(col, 13);          
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 12);
	cout<<"\n|         Enter 1 for History            |";
	SetConsoleTextAttribute(col, 14);
	cout<<"\n|         Enter 2 for Mathematics        |";
	SetConsoleTextAttribute(col, 10);
	cout<<"\n|         Enter 3 for Computer           |";
	SetConsoleTextAttribute(col, 9);
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 8);
	cout<<"\n|________________________________________|";
	cout<<"\n";
	SetConsoleTextAttribute(col, 5);
	cout<<"\n\tEnter your answer:";
	cin>>choice;
	system("cls");
	SetConsoleTextAttribute(col, 7);
	cout<<"\n\tPlease Wait!!";SetConsoleTextAttribute(col, 2);
	for(int x=0; x < 6;x++){

		cout<<".";
		this_thread::sleep_for(chrono::milliseconds(500));

     }
     system("cls");

     SetConsoleTextAttribute(col, 7);
     cout<<"\n\tPreparing Output!!";SetConsoleTextAttribute(col, 2);
	for(int x=0; x < 6;x++){

		cout<<".";
		this_thread::sleep_for(chrono::milliseconds(500));

     }
	system("cls");

	 switch(choice){
		case 1:
			SetConsoleTextAttribute(col, 14);
		cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

		SetConsoleTextAttribute(col, 11);
		cout<<"\n1. Pang-ilan  sa  magkakpatid si DR. JOSE RISAL?";
		cout<<"\n\tA.  7";
		cout<<"\n\tB.  8";
		cout<<"\n\tC.  4";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
		cout<<"\n2. WHAT IS THE POPULAR  NICKNAME OF FORMER SENATOR BENIGNO AQUINO JR, WHOSE DEATH BY ASSASSINATION SPARKED THE  EVENTS THAT LED TO THE PEOPLE REVOLUTION""?";
		cout<<"\n\tA. MARCOS";
		cout<<"\n\tB. NONOY";
		cout<<"\n\tC. D~GONG";

		cout<<"\n\nEnter your answer:";
		cin>>q2;

	if(q2 == 'B'|| q2 == 'b'){
		score++;		
	}

	cout<<"\n3. Between what years did the Orang Dampuans come to the Philippines?";
		cout<<"\n\tA. Between 900 A.D. and 1200 A.D.";
		cout<<"\n\tB. Between 600 A.D. and 1300 A.D.";
		cout<<"\n\tC. Between 500 A.D. and 1500 A.D.";

		cout<<"\n\nEnter your answer:";
		cin>>q3;

	if(q3 == 'A'|| q3 == 'a'){
		score++;		
	}

	cout<<"\n4. The First Republic of the Philippines was established during a war. Which one?";
		cout<<"\n\tA. Philippine-American War";
		cout<<"\n\tB. Philippine-japanis War";
		cout<<"\n\tC. Philippine-War";

		cout<<"\n\nEnter your answer:";
		cin>>q4;

	if(q4 == 'A'|| q4 == 'a'){
		score++;		
	}

	cout<<"\n5. Who was credited with naming the Philippines Felipinas?";
		cout<<"\n\tA. Gregoria de Jesús";
		cout<<"\n\tB.  Maria Carpena";
		cout<<"\n\tC.  Ruy Lopez de Villalobos";

		cout<<"\n\nEnter your answer:";
		cin>>q5;

	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

	
		cout<<"\n6. What was the first book published in the Philippines?";
		cout<<"\n\tA.  Doctrina Christiana";
		cout<<"\n\tB.  Gregoria de Jesús";
		cout<<"\n\tC.  Ruy Lopez de Villalobos";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
	cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

	
		cout<<"\n7. After the death of her husband Andres Bonifacio, Gregoria de Jesus was later married to whom?";
		cout<<"\n\tA.  Francisco Dagohoy";
		cout<<"\n\tB.  Julio Nakpil";
		cout<<"\n\tC.  Gabriela Silang";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'B'|| q1 == 'b'){
		score++;
	}
	cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

		
		cout<<"\n8. She is a Filipino heroine. After her husband died, she continued the war against Spain, was caught and hanged?";
		cout<<"\n\tA.   Francisco Dagohoy";
		cout<<"\n\tB.  Julio Nakpil";
		cout<<"\n\tC.   Gabriela Silang";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	
	cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

		
		cout<<"\n9. Who fought the Spanish government because the government did not give a formal funeral ceremony for his brother?";
		cout<<"\n\tA.  Francisco Dagohoy";
		cout<<"\n\tB.  Julio Nakpil";
		cout<<"\n\tC.  Gabriela Silang";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
	cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";

	
		cout<<"\n10. Who founded the la Liga Filipina?";
		cout<<"\n\tA.  Jose Rizal";
		cout<<"\n\tB.   Manila Revolt";
		cout<<"\n\tC.  Jose P. Laurel Sr";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}		
	cout<<"\n Your Score is:"<<score;
     break;
		case 2:
				SetConsoleTextAttribute(col, 6);
		cout<<"\n\tWELCOME TO MATHEMATICS QUIZ BEE!\n";

			SetConsoleTextAttribute(col, 7);
		cout<<"\n1. There are 49 dogs signed up for a dog show. There are 36 more small dogs than large dogs. How many small dogs have signed up to compete?";
		cout<<"\n\tA. 42.5";
		cout<<"\n\tB. 41.5";
		cout<<"\n\tC. 45.5";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
		cout<<"\n2. Using only an addition, how do you add eight 8’s and get the number 1000?";
		cout<<"\n\tA. 888 + 99 + 9 + 8 + 8 ";
		cout<<"\n\tB. 888 + 8 + 8 + 65 + 8 ";
		cout<<"\n\tC. 888 + 88 + 8 + 8 + 8 ";

		cout<<"\n\nEnter your answer:";
		cin>>q2;

	if(q2 == 'C'|| q2 == 'c'){
		score++;		
	}

	cout<<"\n3.  How many feet are in a mile?";
		cout<<"\n\tA. 5270";
		cout<<"\n\tB. 5280";
		cout<<"\n\tC. 5240";

		cout<<"\n\nEnter your answer:";
		cin>>q3;

	if(q3 == 'B'|| q3 == 'b'){
		score++;		
	}

	cout<<"\n4. Solve  - 15+ (-5x) =0?";
		cout<<"\n\tA. -6";
		cout<<"\n\tB. -9";
		cout<<"\n\tC. -3";

		cout<<"\n\nEnter your answer:";
		cin>>q4;

	if(q4 == 'C'|| q4 == 'c'){
		score++;		
	}
	

	
		cout<<"\n5.What is 1.92÷3?";
		cout<<"\n\tA.  0.64";
		cout<<"\n\tB.  0.69";
		cout<<"\n\tC.  0.66";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
           

		
		cout<<"\n6.Look at this series: 36, 34, 30, 28, 24, … What number should come next?";
		cout<<"\n\tA.  29";
		cout<<"\n\tB.  22";
		cout<<"\n\tC.  26";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'B'|| q1 == 'b'){
		score++;
	}	


	
		cout<<"\n7.  Look at this series: 22, 21, 23, 22, 24, 23, … What number should come next?";
		cout<<"\n\tA.  27";
		cout<<"\n\tB.  29";
		cout<<"\n\tC.  25";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	


		
		cout<<"\n8. Look at this series: 53, 53, 40, 40, 27, 27, … What number should come next?";
		cout<<"\n\tA.  14";
		cout<<"\n\tB.  15";
		cout<<"\n\tC.  19";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	


		
		cout<<"\n9. If 13 x 12 = 651 & 41 x 23 = 448, then, 24 x 22 =?";
		cout<<"\n\tA.  924";
		cout<<"\n\tB.  967";
		cout<<"\n\tC.  935";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
	cout<<"\n10. How to get a number 100 by using four sevens (7’s) and a one (1)?";
		cout<<"\n\tA. (7+7) * (7 = 100 ";
		cout<<"\n\tB. (7+7) * (7 + (1/7)) = 100 ";
		cout<<"\n\tC.  177 – 77 = 100 ";

		cout<<"\n\nEnter your answer:";
		cin>>q5;

	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n Your Score is:"<<score;

	break;
		case 3:
				SetConsoleTextAttribute(col, 5);
		cout<<"\n\tWELCOME TO COMPUTER QUIZ BEE!\n";

			SetConsoleTextAttribute(col, 9);
		cout<<"\n1. Of the units mentioned in the options which one is the largest as compared to the others?";
		cout<<"\n\tA. Hecto";
		cout<<"\n\tB. Deca";
		cout<<"\n\tC. Tera";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	


		
		cout<<"\n2. What is the full name of PC?";
		cout<<"\n\tA.   Personal Computer";
		cout<<"\n\tB.   Private Computer";
		cout<<"\n\tC.  Public Computer";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	


		
		cout<<"\n3.  DVD is an example of?";
		cout<<"\n\tA.  Hard Disk";
		cout<<"\n\tB.  optical disc";
		cout<<"\n\tC.   Output device";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'B'|| q1 == 'b'){
		score++;
	}	


		
		cout<<"\n4. Performs simple math for CPU?";
		cout<<"\n\tA.  DIMM";
		cout<<"\n\tB.   BUS";
		cout<<"\n\tC.   ALU";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	


		
		cout<<"\n5.  Information travels between the components of the motherboard through?";
		cout<<"\n\tA.  BUS";
		cout<<"\n\tB.  Flash memory";
		cout<<"\n\tC.  CMOS";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	



		cout<<"\n6. What is the process of dividing a disk into tracks and sectors?";
		cout<<"\n\tA.  Formatting";
		cout<<"\n\tB.  Tracking";
		cout<<"\n\tC.  Crashing";

		cout<<"\n\nEnter your answer:";
		cin>>q1;

		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
		cout<<"\n7.Which of the following is an example of an optical disc?";
		cout<<"\n\tA.  Magnetic Disc";
		cout<<"\n\tB.  Digital Versatile Disc";
		cout<<"\n\tC. Memory Disk";

		cout<<"\n\nEnter your answer:";
		cin>>q2;

	if(q2 == 'B'|| q2 == 'b'){
		score++;		
	}

	cout<<"\n8.  In which tab of MS Word 2010 Header and Footer option is available?";
		cout<<"\n\tA. Page Layout Tab";
		cout<<"\n\tB. View Tab";
		cout<<"\n\tC. Insert Tab";

		cout<<"\n\nEnter your answer:";
		cin>>q3;

	if(q3 == 'C'|| q3 == 'c'){
		score++;		
	}

	cout<<"\n9. The Internet is an example of a search engine?";
		cout<<"\n\tA.  Windows";
		cout<<"\n\tB. Linux";
		cout<<"\n\tC. Yahoo";

		cout<<"\n\nEnter your answer:";
		cin>>q4;

	if(q4 == 'C'|| q4 == 'c'){
		score++;		
	}

	cout<<"\n10. Which of the following memory device is similar to Cache Memory mainly in terms of speed?";
		cout<<"\n\tA.  E.E.P. ROM (EEPROM)";
		cout<<"\n\tB. S. RAM";
		cout<<"\n\tC. Flash memory";

		cout<<"\n\nEnter your answer:";
		cin>>q5;

	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n Your Score is:"<<score;

	break;
	default:

		cout<<"\n Invalid Input";
     }
    cout<<"\nTry again? Y for YES / N for NO: ";
   cin>>again;
   system("cls");
 }

   while(again == 'y'|| again == 'Y');

     return 0;

}














