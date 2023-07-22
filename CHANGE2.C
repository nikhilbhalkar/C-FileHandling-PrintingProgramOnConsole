#include <stdio.h>
void main()
{
	int i, num1, num2, num3, num4;
	float num5, num6;
	char c, ch, cr;
	FILE *fp;
	clrscr();
	     mainmenu:
	do
	{
		printf("==========main menu===========");
		printf("\n\n\t E = exit");
		printf("\n==============================");
		printf("\n 1.printing program");
		printf("\n 2.Arithmatic program");
		printf("\n 3.If else program");
		printf("\n 4.Loop program");
		printf("\n 5.Exit");
		printf("\n\n Enter any seq number = ");
		scanf(" %c", &ch);
		clrscr();
		switch (ch)
		{
		case 'E':
			exit(0);
		case 'e':
			exit(0);
		case '1':

			do
			{
				printf("=======printing program menu=========");
				printf("\nB = Back");
				printf("\t E = Exit");
				printf("\n====================================");
				printf("\n\n1.Time table");
				printf("\n2.personal information");
				printf("\n3.Mark Sheet");
				printf("\n4.Back menu");
				printf("\n5.Exit");
				printf("\n\nEnter any seq number = ");
				scanf(" %c", &ch);
				clrscr();
				switch (ch)
				{
				case 'B':
					goto mainmenu;
				case 'b':
					goto mainmenu;
				case 'E':
					exit(0);
				case 'e':
					exit(0);
				case '1':

					printf("\t\tTIME TABLE\n \tDEPARTMENT OF COMPUTER SCIENCE\n******************************************************|");
					printf("\nName: Nikhil Suklal Bhalkar\nR C PATEL INSTITUTE OF TECHNOLOGY, SHIRPUR\n F Y B TECH(com)\n*******************************************************|");
					printf("\n\n\n\n|_____________________________________________________|\n| Sr.N\tMon\t Tue\tWedn\t Thur \t Fri \t Sat  |");
					printf("\n|_____________________________________________________|\n| 1.\tMath\tMath\tMath\tMath\t chem\tchem  |");
					printf("\n| 2.\tMech\tMech\tPhy \tMech\t Mech\tEng   |");
					printf("\n|\t\tLUNCH BRAKE\t\t\t      |");
					printf("\n| 3.\tBEEE\tBEEE\tBEEE\tPhy\tBEEE\tPhy   |");
					printf("\n| 4.\tPrac\tPrac\tPrac\tChem\tPhy\tChem  |");
					printf("\n| 5.\tMath\tMath\tChem\tW.S \tEng\tMech  |\n|_____________________________________________________|");
					break;
				case '2':

					printf("\n\n\n***********************************PERSONAL IMFORMATION*********************************");
					printf("\n\n\n\t\t\t------------------------------------------------------");
					printf("\n\t\t\tName\t\t:- \tNikhil Suklal Bhalkar");
					printf("\n\t\t\tAddress\t\t:-\tPandurang Nager,Shirpur");
					printf("\n\t\t\tQualification\t:-\tComputer Science(firsr year)");
					printf("\n\t\t\tCollege\t\t:-\tR C Patel Institute of Technology");
					printf("\n\t\t\tDOB\t\t:-\t23/03/2003");
					printf("\n\t\t\tE-mail\t\t:-\tnikhilbhalkar23@gmail.com");
					printf("\n\t\t\tFav.Sport\t:-\tKabaddi");
					printf("\n\t\t\tMO.no\t\t:-\t8040464601");
					printf("\n\t\t\t-------------------------------------------------------");
					break;
				case '3':

					printf("\n\n\t\t\t\t\tHSC MARK SHEET");
					printf("\n----------------------------------------------------------------------------------------");
					printf("\n\tName\t:-\tNikhil Suklal Bhalkar\n\tSeat no\t:-\tSO345235\n\tCollege\t:-\tR C Patel jr.College,Shirpur");
					printf("\n----------------------------------------------------------------------------------------");
					printf("\nSr.no\tSub.Name\t Medium\t\t\tMax.Marks\t\tMarks Obtained");
					printf("\n1.\tEnglish\t\t  Eng\t\t\t100\t\t         095");
					printf("\n2.\tBiology\t\t  Eng\t\t\t100\t\t         091");
					printf("\n3.\tChemistry\t  Eng\t\t\t100\t\t         088");
					printf("\n4.\tPhysics\t\t  Eng\t\t\t100\t\t         085");
					printf("\n5.\tMathematics\t  Eng\t\t\t100\t\t         092");
					printf("\n--------------------------------------------------------------------------------------");
					printf("\n\tTotal Marks\t:-\t548\n\tPercentage\t:-\t91.2\n\tResult\t\t:-\tPass");
					printf("\n---------------------------------------------------------------------------------------");
					break;
				case '4':
					goto mainmenu;
				case '5':
					exit(0);
				default:
					printf("\n Please enter valid number....");
				}
				printf("\n To continue enter (y/n)");
				scanf(" %c", &c);
				clrscr();
			} while (c == 'y' || c == 'Y');

			printf("\n\n Press any key to exit");

			exit(0);
		case '2':
		arithmaticmenu:
			do
			{
				printf("===========Arithmatic menu============");
				printf("\nE = Exit");
				printf("\t B = Back");
				printf("\n====================================");
				printf("\n\n1.Addition");
				printf("\n2.Subtraction");
				printf("\n3.multiplication");
				printf("\n4.Division");
				printf("\n5.Back menu");
				printf("\n6.Exit");

				printf("\n\nEnter any seq number = ");
				scanf(" %c", &ch);
				clrscr();

				switch (ch)
				{
				case 'E':
					exit(0);
				case 'e':
					exit(0);
				case 'b':
					goto mainmenu;
				case 'B':
					goto mainmenu;
				case '1':

					do
					{
						printf("===========Addition menu============");
						printf("\n E = Exit");
						printf("\t B = Back");
						printf("\n====================================");
						printf("\n\n1.Addition of integer");
						printf("\n2.Addition of float");
						printf("\n3.previes menu");
						printf("\n4.Exit");
						printf("\n5.Main menu");
						printf("\n\nEnter any seq number = ");
						scanf(" %c", &ch);
						clrscr();
						switch (ch)
						{
						case 'E':
							exit(0);
						case 'e':
							exit(0);
						case 'b':
							goto arithmaticmenu;
						case 'B':
							goto arithmaticmenu;
						case '1':
                           clrscr();
							fp = fopen("ADDINT.C", "r");//addition program file 
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}

							printf("\nFor Addition  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%d", &num1);
							printf("\nEnter Second Number = ");
							scanf("%d", &num2);
							printf("\nAddition of %d and %d = %d", num1, num2, num1 + num2);
							break;
						case '2':
						                           clrscr();
							fp = fopen("ADDFLOAT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor Addition  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%f", &num5);
							printf("\nEnter Second Number = ");
							scanf("%f", &num6);
							printf("\nAddition of %.2f and %.2f = %.2f", num5, num6, num5 + num6);
							break;
						case '3':
							goto arithmaticmenu;
						case '4':
							exit(0);
						case '5':
							goto mainmenu;
						default:
							printf("\nPlease enter valid number....");
						}
						printf("\n To continue enter (y/n)");
						scanf(" %c", &c);
						clrscr();
					} while (c == 'y' || c == 'Y');
					printf("\n\n Press any key to exit");
					exit(0);

				case '2':

					do
					{
						printf("===========Subtraction menu============");
						printf("\n E = Exit");
						printf("\t B = Back ");
						printf("\n======================================");
						printf("\n\n1.subtraction of integer");
						printf("\n2.subtraction of float");
						printf("\n3.previes menu");
						printf("\n4.Exit");
						printf("\n5. Main menu");
						printf("\n\nEnter any seq number = ");
						scanf(" %c", &ch);
						clrscr();
						switch (ch)
						{
						case 'E':
							exit(0);
						case 'e':
							exit(0);
						case 'B':
							goto arithmaticmenu;
						case 'b':
							goto arithmaticmenu;
						case '1':
						                           clrscr();
							fp = fopen("SUBINT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}

							printf("\nFor subtraction  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%d", &num1);
							printf("\nEnter Second Number = ");
							scanf("%d", &num2);
							printf("\nsubtraction of %d and %d = %d", num1, num2, num1 - num2);
							break;

						case '2':
						                           clrscr();
							fp = fopen("SUBFLOAT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor Addition  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%f", &num5);
							printf("\nEnter Second Number = ");
							scanf("%f", &num6);
							printf("\nSubtraction of %.2f and %.2f = %.2f", num5, num6, num5 + num6);
							break;
						case '3':
							goto arithmaticmenu;
						case '4':
							exit(0);
						case '5':
							goto mainmenu;
						default:
							printf("\n Please enter valid number...");
						}
						printf("\n To continue enter (y/n)");
						scanf(" %c", &c);
						clrscr();
					} while (c == 'y' || c == 'Y');
					printf("\n\n Press any key to exit");
					exit();
				case '3':

					do
					{
						printf("===========multiplication menu============");
						printf("\n E = Exit");
						printf("\t B = Back ");
						printf("\n==========================================");
						printf("\n\n1.multiplication of integer");
						printf("\n2.multiplication of float");
						printf("\n3.previes menu");
						printf("\n4.Exit");
						printf("\n5.main menu");
						printf("\n\nEnter any seq number = ");
						scanf(" %c", &ch);
						clrscr();
						switch (ch)
						{
						case 'E':
							exit(0);
						case 'e':
							exit(0);
						case 'B':
							goto arithmaticmenu;
						case 'b':
							goto arithmaticmenu;
						case '1':
						                           clrscr();

							fp = fopen("MULINT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor multiplication  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%d", &num1);
							printf("\nEnter Second Number = ");
							scanf("%d", &num2);
							printf("\nmultiplication of %d and %d = %d", num1, num2, num1 * num2);
							break;
						case '2':
						                           clrscr();

							fp = fopen("MULFLOAT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor multiplication  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%f", &num5);
							printf("\nEnter Second Number = ");
							scanf("%f", &num6);
							printf("\nmultiplication of %.2f and %.2f = %.2f", num5, num6, num5 * num6);
							break;
						case '3':
							goto arithmaticmenu;
						case '4':
							exit(0);
						case '5':
							goto mainmenu;
						default:
							printf("\n Please enter valid number....");
						}
						printf("\n To continue enter (y/n)");
						scanf(" %c", &c);
						clrscr();
					} while (c == 'y' || c == 'Y');
					printf("\n\n Press any key to exit");
					exit(0);
				case '4':

					do
					{
						printf("===========Division menu============");
						printf("\nE = Exit");
						printf(" \t B = Back");
						printf("\n==================================");
						printf("\n\n1.Division of integer");
						printf("\n2.Division of float");
						printf("\n3.previes menu");
						printf("\n4.Exit");
						printf("\n5.main menu");
						printf("\n\nEnter any seq number = ");
						scanf(" %c", &ch);
						clrscr();
						switch (ch)
						{
						case 'E':
							exit(0);
						case 'e':
							exit(0);
						case 'B':
							goto arithmaticmenu;
						case 'b':
							goto arithmaticmenu;
						case '1':
						                           clrscr();

							fp = fopen("DIVINT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor Division  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%d", &num1);
							printf("\nEnter Second Number = ");
							scanf("%d", &num2);
							printf("\nDivision of %d and %d = %d", num1, num2, num1 / num2);
							break;
						case '2':
						                           clrscr();
							fp = fopen("DIVFLOAT.C", "r");
							if (fp == NULL)
								printf("Error while opening file");
							else
							{
								do
								{
									cr = getc(fp);
									printf("%c", cr);

								} while (cr != EOF);

								fclose(fp);
							}
							printf("\nFor Division  of 2 Numbers");
							printf("\nEnter First Number = ");
							scanf("%f", &num5);
							printf("\nEnter Second Number = ");
							scanf("%f", &num6);
							printf("\nDivision of %.2f and %.2f = %.2f", num5, num6, num5 / num6);
							break;
						case '3':
							goto arithmaticmenu;
						case '4':
							exit(0);
						case '5':
							goto mainmenu;
						default:
							printf("\n Please enter valid number...");
						}

						printf("\n To continue enter (y/n)");
						scanf(" %c", &c);
						clrscr();
					} while (c == 'y' || c == 'Y');
					printf("\n\n Press any key to exit");
					exit(0);
				case '5':
					goto arithmaticmenu;
				case '6':
					exit(0);
				default:
					printf("\n Please enter valid number...");
				}
				printf("\n To continue enter (y/n)");
				scanf(" %c", &c);
				clrscr();
			} while (c == 'y' || c == 'Y');
			printf("\n\n Press any key to exit");
			exit(0);
		case '3':
			do
			{
				printf("==============If-else menu=============");
				printf("\n E = Exit");
				printf("\t B = Back ");
				printf("\n========================================");
				printf("\n\n1.greatest of two num");
				printf("\n2.greatest of three  num");
				printf("\n3.Even or odd num");
				printf("\n4.Even od odd");
				printf("\n5.To check character");
				printf("\n6.Back menu");
				printf("\n7.Exit");
				printf("\n\nEnter any seq number = ");
				scanf(" %c", &ch);
				clrscr();

				switch (ch)
				{
				case 'E':
					exit(0);
				case 'e':
					exit(0);
				case 'B':
					goto mainmenu;
				case 'b':
					goto mainmenu;
				case '1':
				
                    clrscr();
					fp = fopen("GREATN2.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}

					printf("\n====================Greatest Of Two Integer======================");
					printf("\nEnter First Number = ");
					scanf("%d", &num1);
					printf("\nEnter Second Number = ");
					scanf("%d", &num2);
					if (num1== num2)
						printf("\nBoth Numbers Are Equal");
					else
					{
						if (num1 > num2)
							printf("The Greatest Number is %d", num1);
						else
							printf("The Greatest Number is %d", num2);
					}
					getch();
					break;
				case '2':
				clrscr();

					fp = fopen("GREATN3.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					printf("\n====================Greatest Of Three Integer======================");
					printf("\nEnter First Number = ");
					scanf("%d", &num1);
					printf("\nEnter Second Number = ");
					scanf("%d", &num2);
					printf("\nEnter Third Number = ");
					scanf("%d", &num3);
					if (num1 == num2 && num2 == num3)
						printf("\nGiven Numbers Are Equal");
					else
					{
						if (num1 > num2 && num1 > num3)
							printf("The Greatest Number is %d", num1);
						else if (num2 > num3)
							printf("The Greatest Number is %d", num2);
						else
							printf("The Greatest Number is %d", num3);
					}
					getch();
					break;

				case '3':
				clrscr();

					fp = fopen("EVENOD.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}

					printf("\n====================Even Or Odd======================");
					printf("\nEnter Any Number = ");
					scanf("%d", &num1);
					if (num1 % 2 == 0)
						printf("\n\tGiven Number is Even ");
					else
						printf("\n\tGiven Number is Odd ");
					getch();
					break;

				case '4':
				clrscr();
					fp = fopen("LEAPYR.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					printf("\n====================To Check Leap Year Or Not=====================");
					printf("\nEnter Any Year = ");
					scanf(" %d", &num1);
					if ((num1 % 4 == 0 && num1 % 100 != 0) || num1 % 400 == 0)
						printf("\nGiven Year is  Leap Year");
					else
						printf("\n Given Year is Not Leap Year");
					getch();
					break;

				case '5':
				clrscr();
					fp = fopen("CHECKCH.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					printf("\n====================To Check Character=====================");
					printf("\nEnter Any Character = ");
					scanf(" %c", &c);
					if (c >= 65 && c <= 90)
						printf("\nGiven Character is Uppercase Alphabet");
					else if (c >= 97 && c <= 122)
						printf("\nGiven Character is Lowercase Alphabet");
					else if (c >= 48 && c <= 57)
						printf("\nGiven Character is Digit ");
					else
						printf("\nGiven Character is  Special Character");
					break;

				case '6':
					goto mainmenu;
				case '7':

					exit(0);
				default:
					printf("\n please enter  valid number..");
				}
				printf("\n To continue enter (y/n)");
				scanf(" %c", &c);
				clrscr();
			} while (c == 'y' || c == 'Y');
			printf("\n\n Press any key to exit");
			exit(0);
		case '4':
			do
			{
				printf("==============loop menu================");
				printf("\n E = Exit");
				printf("\t B = Back ");
				printf("\n======================================");
				printf("\n\n1.printing table of given number");
				printf("\n2.printing fibonacci sreies");
				printf("\n3.Armstrong number");
				printf("\n4.prime num checking");
				printf("\n5.palendrom num in range");
				printf("\n6.to find factorial");
				printf("\n7.number raise to power");
				printf("\n8.Back menu");
				printf("\n9.Exit");
				printf("\n\nEnter any seq number = ");
				scanf(" %c", &ch);
				clrscr();

				switch (ch)
				{
				case 'E':
					exit(0);
				case 'e':
					exit(0);
				case 'B':
					goto mainmenu;
				case 'b':
					goto mainmenu;
				case '1':
				clrscr();
					fp = fopen("TABLEN.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					i = 1;
					printf("\n================== Table Of Given Number======================");
					printf("\n Enter Number For Printing Table = ");
					scanf("%d", &num1);
					printf("\n\t The Table OF %d ", num1);
					while (i <= 10)
					{
						printf("\n\t %d x %d = %d", num1, i, num1 * i);
						i = i + 1;
					}
					getch();
					break;

				case '2':
				clrscr();
					fp = fopen("FIBOSER.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					i = 1, num2 = 0, num4 = 1;
					printf("\n================ Fibonacci Series ===================");
					printf("\nEnter How Many term do You Want = ");
					scanf("%d", &num1);
					printf("\nFibonacci Series = ");
					while (i <= num1)
					{
						printf("\t%d", num2);
						num3 = num2 + num4;
						num4 = num2;
						num2 = num3;
						i = i + 1;
					}
					getch();

					break;

				case '3':
				clrscr();
					fp = fopen("AMSTRMN.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					printf("\n================ Armstrong Number ===============");
					printf("\nEnter starting number = ");
					scanf("%d", &num1);
					printf("Enter Ending number = ");
					scanf("%d", &num2);
					while (num1 <= num2)
					{
						num3 = num1, i = 0, num4 = 0;
						while (num3 != 0)
						{
							i = num3 % 10;
							num3 = num3 / 10;
							num4 = num4 + i * i * i;
						}
						if (num4 == num1)
							printf("\n%d", num1);

						num1 = num1 + 1;
					}
					getch();

					break;
				case '4':
				clrscr();

					fp = fopen("PRIMEN.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}

					printf("\n================Prime Number============");
					printf("\nEnter starting number = ");
					scanf("%d", &num1);
					printf("Enter Ending number = ");
					scanf("%d", &num2);
					while (num1 <= num2)
					{
						i = 1, num3 = 0;
						while (i <= num1)
						{
							if (num1 % i == 0)
								num3 = num3 + 1;

							i = i + 1;
						}
						if (num3 == 2)
							printf("\n%d", num1);
						num1 = num1 + 1;
					}
					getch();
					break;

				case '5':
				clrscr();
					fp = fopen("PALENDN.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					printf("\n================ Palindrome Number ===============");
					printf("\nEnter starting number = ");
					scanf("%d", &num1);
					printf("Enter Ending number = ");
					scanf("%d", &num2);
					while (num1 <= num2)
					{
						num3 = num1, num4 = 0;
						while (num3 != 0)
						{
							i = num3 % 10;
							num3 = num3 / 10;
							num4 = num4 * 10 + i;
						}
						if (num1 == num4)
							printf("\t%d", num1);

						num1 = num1 + 1;
					}
					getch();
					break;

				case '6':
				clrscr();
					fp = fopen("FACTON.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					num3 = 1;
					printf("\n================== Factorial Of Given Number======================");
					printf("\n Enter Number For Finding Factorial = ");
					scanf("%d", &num1);
					i = num2;
					while (num1 >= 1)
					{
						num3 = num3 * num1;
						num1 = num1 - 1;
					}

					printf("\n\t The Facorial OF %d = %d", i, num3);
					getch();
					break;

				case '7':
				clrscr();
					clrscr();
					fp = fopen("NRAISEP.C", "r");
					if (fp == NULL)
						printf("Error while opening file");
					else
					{
						do
						{
							cr = getc(fp);
							printf("%c", cr);

						} while (cr != EOF);

						fclose(fp);
					}


					num3 = 1;
					printf("\n================Number Raise to Power============");
					printf("\nEnter Any number = ");
					scanf("%d", &num1);
					printf("Enter The Power = ");
					scanf("%d", &num2);
					while (num2 >= 1)
					{
						num3 = num3 * num1;
						num2 = num2 - 1;
					}
					printf("Answer is = %d", num3);
					getch();
					break;

				case '8':
					goto mainmenu;
				case '9':

					exit(0);
				default:
					printf("\n please enter valid number...");
				}
				printf("\n To continue enter (y/n)");
				scanf(" %c", &c);
				clrscr();
			} while (c == 'y' || c == 'Y');
			printf("\n\n Press any key to exit");
			exit(0);
		case '5':
			exit(0);
		default:
			printf("\nEnter valid Number");
		}
		printf("\nto continu enter (y/n)");
		scanf(" %c", &c);
		clrscr();
	} while (c == 'y' || c == 'Y');
	printf("\n\nPress any key to exit");
	exit(0);

	getch();
}
