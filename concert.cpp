#include<iostream>
#include<string.h>
using namespace std;
int main ()
{	
	int choice,sc,deets,e,dts,age,select,quan,price,pin;
	string un,pword,yn,fname,mdi,lname,cn,sloc;
	char date [10];
	float pay,totamt,change;
	system("color F1");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
	cout << "\n\t\t\t\t\t      *************************************************************************";
	cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
	cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
	cout << "\n\t\t\t\t\t      *\t\t\t\tWELCOME TO FM TICKET OUTLET\t\t      *";
	cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
	cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
	cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
	cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
	system("pause");
	
//----log in
	system("cls");
	{
			pass:
			system("cls");
			cout << "Username: ";
			cin >> un;
			cout << "Password: ";
			cin >> pword;
		
		if(un=="fr" && pword=="jw") 
		{
			system("cls");
			goto menu;
		}
		else
		{	system ("cls");
			goto wp;
		}
		wp:
		cout << "\n\nWrong Username / Password! Try again [y/n]?";
		cin >> yn;
		if (yn== "y")
		{
		goto pass;
		}
		else  if (yn!="n")
		{
			return 0;
		}
}
		
//----menu
	menu: 

 	system("CLS");
 	cout << "menu";
 	cout << "\nWelcome to FM outlet";
 	cout << "\n1. Solo Concerts";
 	cout << "\n2. Past Events";
 	cout << "\n3. Buy Ticket";
 	cout << "\n4. Exit";
 	cout << "\n\nENTER YOUR CHOICE [1-4]: ";
 	cin >> choice;

//---Solo Concert
switch (choice)
	{
	case 1: 
		system("cls");
			sc:
			cout << "\n\n\t\t\t\t\t\t\t\t\t SOLO CONCERTS";
			cout << "\n\n\n   *NO.*\t*List*\t\t\t\t\t *DETAILS* \t\t*TIME*\t\t   *VENUE*    \t\t*TICKET PRICE RANGE*";
			cout << "\n\n=================================================================================================================================================";
			cout << "\n\t\tGirl Groups";
			cout << "\n=================================================================================================================================================";
			cout << "\n\n\t1\tSTAYC - Stay Cool Party\t\t\t    --\t\t   5:00pm-8:00pm\t    MOA ARENA \t\t Php 2,500 - 10,000";
			cout << "\n\n\t2\tAESPA - MY SYNK        \t\t\t    --\t\t   5:00pm-8:00pm\t    MOA ARENA \t\t Php 1,500 - 13,000";
			cout << "\n\n=================================================================================================================================================";
         	cout << "\n\t\tBoy Groups";
			cout << "\n=================================================================================================================================================";
         	cout << "\n\n\t3\tTreasure - 1st CONCERT:TRACE  \t\t    --\t\t   6:00pm-9:00pm\t    MOA ARENA \t\t Php 1,500 - 13,000";
            cout << "\n\n\t4\tiKon - iKoncert : Showtime \t\t    --\t\t   6:00pm-8:00pm\t    MOA ARENA \t\t Php 1,000 - 12,000";
			cout << "\n\n=================================================================================================================================================";
		cout << "\nInput the no. to see concert details [1-4] and [0] to go back to the MENU:";
	  	cin >> deets;
		if (deets>=8)
		{
			goto menu;
			break;
		}
		
		//details
		switch (deets)
        {	case 1:
        		stayc:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t STAYC - Stay Cool Party " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nAbout:\n STAYC is a South Korean girl group formed by High Up Entertainment. The group is composed of six members: Sumin, Sieun, Isa, Seeun, Yoon, and J.\n They debuted on November 12, 2020, with the release of their debut single album Star to a Young Culture";
				cout <<"\n -On November 14, 2022, STAYC announced their first solo concert in Manila to be held on December 13.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtist\t   :Stayc \nTitle\t   :STAYC 1ST SOLO CONCERT [STAY COOL PARTY] \nDate\t   :December 13,2022 (tue) 5:00 PM  \nPlace\t   :SM Mall of Asia,Bay City, Pasay, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\n--SET LIST-- ";
				cout << "\n1. Beautiful Monster \n2. ASAP \n3. LOVE \n4. I like it \n5. Run2u \n6. So Bad \n7. I'll be there \n8. So What \n9. Stereotype \n10. Young Luv \n11. Love Fool \n12. Poppy   ";
				cout <<"\n\n=======================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;
		    	if (e==0)
			    {
				system("cls");
     	   		goto sc;
     	   		break;
				}
				else
				{
				system("cls");
	         	goto menu;
	        	break;	
		        }
			case 2:
        		aespa:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t AESPA - MY SYNK " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nAbout:\n Aespa is a South Korean girl group formed by SM Entertainment. The group consists of four members: Karina, Giselle, Winter, and Ningning.\n They debuted on November 17, 2020, with the single BLACK MAMBA";
				cout <<"\n -On November 24, 2022, AESPA announced their solo concert in Manila to be held on December 29.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtist\t    :AESPA \nTitle\t   :AESPA - MY SYNK \nDate\t   :December 29,2022 (thu) 5:00 PM \nPlace\t   :SM Mall of Asia,Bay City, Pasay, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\n--SET LIST-- ";
				cout << "\n1. Black Mamba \n2. Savage \n3. ICU \n4. Life's Too Short \n5. Yeppi Yeppi \n6. Illusion \n7. Next Level \n8. Girls \n9. Dreams come true \n10.Forever";
				cout <<"\n=========================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto sc;
     	   		break;
				}
				else
				{
				system("cls");
	         	goto menu;
	        	break;	
		        }	
			case 3:
        		treasure:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t TREASURE - 1st CONCERT:TRACE " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nTreasure is a South Korean boy band formed in 2019 by YG Entertainment through the reality-survival program YG Treasure Box.\n The band consists of 12 members: Choi Hyun-suk, Jihoon, Yoshi, Junkyu,Mashiho, Yoon Jae-hyuk, Asahi,Bang Yedam, Doyoung, Haruto, Park Jeong-woo and So Jung-hwan. ";
				cout <<"\n-YG Entertainment's newest boy group will be having their first concert in Philippines, TRACE over the weekend on January 15, 2023.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtist\t   :TREASURE \nTitle\t   :TREASURE 1ST CONCERT:TRACE \nDate\t   :January 15,2023 (sun) 6:00 PM nPlace\t   :SM Mall of Asia,Bay City, Pasay, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\n--SET LIST-- ";
				cout << "\n1. Jikjin (Go Straight) \n2. Boy \n3. Going Crazy \n4. Come to me \n5. U \n6. B.L.T. (Bling Like This) \n7. Wayo (Bang Yedam solo performance) \n8. My Treasure \n9. Really Really (Yoshi, Junkyu, Haruto, and Jeongwoo unit cover performance)";
				cout << "n10.Love Scenario (Mashiho, Jaehyuk, Asahi, Yedam, Doyoung and Junghwan unit cover performance) \n11.Good Boy (Jihhon and Hyunsuk unit cover performance) \n12.Darari \n13.Be with me \n14. It's okay \n15. Orange \n16. Hello \n17. VolKno (HyunHaYo unit performance) \n18. Beautiful";
				cout <<"\n=========================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto sc;
     	   		break;
				}
				else
				{
				system("cls");
	         	goto menu;
	        	break;	
		        }
		
			case 4:
        		ikon:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t iKon - iKoncert : Showtime " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\niKon, stylized as iKON, is a South Korean boy band formed in 2015 by YG Entertainment, consisting of six members: B.I, Jay, Song, Bobby, DK, Ju-ne and Chan. ";
				cout <<"\n-On December 3, 2022, iKon announced their solo concert in Manila to be held on January 25.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtist\t   :iKon \nTitle\t   :iKon - iKoncert : Showtime \nDate\t   :January 25,2023 (wed) 6:00 PM \nPlace\t   :SM Mall of Asia,Bay City, Pasay, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\n--SET LIST-- ";
				cout << "\n1. But You \n2. Rhythm Ta \n3. M.U.P \n4. My Type \n5. Today \n6. What's Wrong? \n7. Love Scenario \n8. Killing Me \n9.  Dumb & Dumber \n10. Don't Forget \n10. Don't Forget \n11. Flower";
				cout <<"\n=========================================================================================================================================";
					cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto sc;
     	   		break;    	
   	            }
   	            default:
	   	         system("cls");
	         	goto menu;
	        	break;	
		        }
		
		    
   	//events
   	
   	case 2:
			ev:
			system("cls");
        	cout << "\n\n\t\t\t\t\t\t\t\t PAST EVENTS";
			cout << "\n\n\n   *NO.*\t*List*\t\t\t\t\t *DETAILS* \t\t*TIME*\t\t   *VENUE*    \t\t*TICKET PRICE RANGE*";
			cout << "\n\n=================================================================================================================================================";
			cout << "\n\n1\t Ripples for Hope \t\t\t    --\t\t   6:00pm-8:00pm\t    MOA ARENA \t\t\t Php 1,500 - 12,500";
			cout << "\n\n2\t Be You 2: The World Will Care  \t    --\t\t   7:00pm-9:00pm\t    ARANETA COLISEUM \t\t Php 1,500 - 13,000";
         	cout << "\n\n3\t KPOP MASTERZ\t\t\t\t    --\t\t   7:00pm-10:00pm\t    MOA ARENA \t\t\t Php 2,500 - 12,500";
			cout << "\n\n=================================================================================================================================================";
	  		cout << "\nInput the no. to see event details [1-4] and [0] to go back to MENU:";
	  		cin >> dts;
	  		if (dts==0)
	  		{ system ("cls");
	  		goto menu;
			}
			
	  		switch (dts)
	  		{	
			  case 1:
			  	ripple:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t Ripples For Hope " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nThe event Ripples for Hope also organized by Pulp Live World, will be held at the SM Mall of Asia Arena on Feb 12.";
				cout <<"\n-It will feature K-pop groups Everglow, AKMU and Momoland.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtists\t   :Everglow, AKMU, Momoland \nTitle\t   :Ripples for Hope \nDate\t   :July 29, 2022 (fri) 6:00 PM \nPlace\t   :Philippine Arena, Ciudad de Victoria, Santa Maria, Bulacan, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto ev;
     	   		break;    	
   	            }
   	            else{
     			system("cls");
      			goto menu;
        		break;
			    }
   	        	case 2:
			  	beu2:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t Be You 2: The World Will Care " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nNeuwave Events & Productions also announced the show Be You 2: The World Will Care, a tribute to the elderly,\nthat will be held at the Araneta Coliseum on March 25";
				cout <<"\n-The show will feature EXO's Xiumin and Chen, BoA and TVXQ.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtists\t   :BoA, Chen, TVXQ, and Xiumin \nTitle\t   :Be You 2: The World Will Care \nDate\t   :September 28, 2022 (Wednesday) 7:00 PM \nPlace\t   :Smart Araneta Coliseum, General Roxas Ave, Cubao, Quezon City, 1109 Metro Manila \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto ev;
     	   		break;    	
   	            }
   	            else{
     			system("cls");
      			goto menu;
        		break;
			    }
			  	case 3:
			  	kmz:
				system("cls");
				cout << "\n\t\t\t\t\t\t\t KPOP Masterz " ;
				cout << "\n\n=======================================================================================================================================";
				cout << "\n\nPULP Live World has revealed that Jackson Wang and Bambam from GOT7 will be headlining K-Pop Masterz along with TREASURE!\n Get ready to dance along to their catchy beats and sing your heart out to their emotion-filled songs.";
				cout <<"\n-Theshow will be held on May 7, 2023.";
				cout <<"\n\n=======================================================================================================================================";
				cout <<"\nArtists\t   :Treasure, Jackson, Bambam \nTitle\t   :KPOP MASTERZ \nDate\t   :May 07, 2022 (sat) 7:00 PM \nPlace\t   :SM Mall of Asia,Bay City, Pasay, Philippines \nAge Limit  :Admission age of 12 and above";
				cout <<"\n\n=======================================================================================================================================";
				cout << "\n\nEnter 0 to exit:";
				cin >> e;	
				if (e==0)
				{
				system("cls");
     	   		goto ev;
     	   		break;    	
   	            }
   	            else{
     			system("cls");
      			goto menu;
        		break;
			    }
   	    	}
   	    
    //buy tickets 
    case 3:
    	    system("cls");
			if(choice==3)
			{
			cout << "\nBUY TICKETS" ;
	     	cout << "\nPlease fill up the following to continue";
			cout << "\n**********************************************************************";
			cout <<"\nEnter First Name: ";
        	cin >> fname;
        	cout << "\nEnter Middle Initial: ";
        	cin >> mdi;
        	cout << "\nEnter Last Name: ";
        	cin >> lname;
			cout << "\nEnter Date: ";
			cin >> date;
			cout << "\nAge: ";
			cin >> age;
			}
			 
			tixcon:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t>>> SOLO CONCERT <<<";
			cout << "\n\n\n   * NO.*\t*LIST*\t\t\t\t\t\t  	*LOCATION*\t\t*TICKET PRICE*";
			cout << "\n\n=================================================================================================================================================";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  ONLINE FEE = 100.00";
			cout << "\n=================================================================================================================================================";
			cout << "\n\n\t1\tSTAYC - Stay Cool Party\t\t\t\t (GA) General Admission\t\tPhp 2,500.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t (UB)Upper Box \t\t\tPhp 4,500.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t VIP \t\t\t\tPhp 10,000.00 ";
         		cout << "\n\n-------------------------------------------------------------------------------------------------------------------------------------------------";
			cout << "\n\n\t2\tAESPA - MY SYNK \t\t\t\t (GA)General Admission\t\tPhp 1,500.00";
		 		cout << "\n\n\t\t\t\t\t\t\t\t (UB)Upper Box  \t\tPhp 3,500.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t VIP \t\t\t\tPhp 13,000.00";
				cout << "\n\n-------------------------------------------------------------------------------------------------------------------------------------------------";
         	cout << "\n\n\t3\tTREASURE - 1ST CONCERT : TRACE \t\t\t (GA)General Admission\t\tPhp 1,500.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t (LB)Lower Box  \t\tPhp 7,500.00\t\t\t ";
         		cout << "\n\n\t\t\t\t\t\t\t\t VIP\t\t\t\tPhp 13,000.00\t\t\t ";
				cout << "\n\n-------------------------------------------------------------------------------------------------------------------------------------------------";
         	cout << "\n\n\t4\tiKon : iKoncert: Showtime \t\t\t (GA)General Admission\t\tPhp 1,000.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t (LB)Lower Box A\t\tPhp 9,500.00";
         		cout << "\n\n\t\t\t\t\t\t\t\t VIP\t\t\t\tPhp 12,000.00";
			cout << "\n=================================================================================================================================================";
			cout << "\n\nInput Concert No. [1-4]:";
			cin >> cn;
			cout << "\nInput seat location: ";
			cin >> sloc;
			cout << "\nInput Ticket Quantity: ";
			cin >> quan;
			cout << "\nConfirm Order? \n\n";
			system ("PAUSE");
	
			//stayc
			if  (cn=="1" && sloc=="GA"){
					float tix=2500,olfee=100,total=0,totamt=0,totfee=0,change=0;
					system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-13-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";   
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 13, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: GEN AD\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
					cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
		 	
		 		if (cn=="1" && sloc=="UB"){
				float tix=4500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-13-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 13, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: UPPER BOX\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
					cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
	        	
				if (cn=="1" && sloc=="VIP"){
				float tix=10000,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-13-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tSTAYC - Stay Cool Party\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 13, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: VIP\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
	        		cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				
				
				//aespa
				if (cn=="2" && sloc=="GA"){
				float tix=1500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tAESPA - MY SYNK     \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-29-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t  AESPA - MY SYNK\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 29, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: GEN AD\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
	        		cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				
					if (cn=="2" && sloc=="UB"){
					float tix=3500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t   *";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tAESPA - MY SYNK     \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-29-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t  AESPA - MY SYNK\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 29, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: UPPER BOX\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
	        			cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				if (cn=="2" && sloc=="VIP"){
				float tix=13000,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tAESPA - MY SYNK     \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 12-29-2022   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 5 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
			
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tAESPA - MY SYNK  \t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <December 29, 2022> <5:00PM>\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: VIP\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
	        			cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
		   		
				//treasure
					if (cn=="3" && sloc=="GA"){
					float tix=1500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
						cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-15-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t *";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 15, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: GEN AD\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
	        			cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				
				if (cn=="3" && sloc=="LB"){
				float tix=7500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-15-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t *";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 15, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: LOWER BOX\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
						cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				
				if (cn=="3" && sloc=="VIP"){
					float tix=13000,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t   *";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-15-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter your PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tTREASURE - 1ST CONCERT:TRACE\t\t\t *";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 15, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: VIP  \t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
						cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
				//ikon
				if (cn=="4" && sloc=="GA"){
					float tix=1000,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t   *";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t iKoncert: Showtime \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-25-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tiKoncert : Showtime \t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 25, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: GEN AD \t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
						cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
			if (cn=="4" && sloc=="LB"){
					float tix=9500,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET \t\t\t\t   *";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t iKoncert: Showtime \t\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-25-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tiKoncert : Showtime \t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 25, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: LOWER BOX\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
					cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
			if (cn=="4" && sloc=="VIP"){
				float tix=12000,olfee=100,total=0,totamt=0,totfee=0,change=0;
				system ("cls");
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "\n\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      ***************************************************************************";
					cout << "\n\t\t\t\t\t      *\t\t\t\t FM TICKET OUTLET    \t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tYG BLACK PRIME, INC.\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\t Candelaria, Quezon\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t iKoncert: Showtime \t\t\t\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t------------------------------------------------------------------------*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate: 01-25-2023   \t\tSeat Location: " << sloc << "\t\t*";
					cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tTime: 6 PM\t\t\tTicket Quantity: " << quan << "\t\t*";
					cout << "\n\t\t\t\t\t      __________________________________________________________________________";
					cout << "\n\t\t\t\t\t      **************************************************************************\n";
					cout << "\n\n\t\t\t\t\t\tProceed to payment ==>\n";
					system ("pause");
					system ("cls");
					total=quan*tix;
			 		totfee=quan*olfee;
					totamt=total+totfee;
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Amount: " << total << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  Online Fee: " << totfee << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Total amount: " << totamt << "\t\t";
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Payment: ";
				cin >> pay;
				change = pay - totamt;
				cout << "\n\n\t\t\t\t\t\t\t *  ------------------------------------------------";
				cout << "\n\n\t\t\t\t\t\t\t *  Change => " << change;
				cout << "\n\n\t\t\t\t\t\t\t    _________________________________________________";
				cout << "\n\n\t\t\t\t\t\t\t *  Enter PIN: ";
				cin >> pin;
				system("cls");
				
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      _________________________________________________________________________";
				cout << "\n\t\t\t\t\t      *************************************************************************";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t YOU HAVE SUCCESSFULLY PURCHASED YOUR TICKET!\t\t     *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *\t\t\t\t\t\t\t\t\t      *";
				cout << "\n\t\t\t\t\t      *_______________________________________________________________________*";
				cout << "\n\t\t\t\t\t      *************************************************************************\n\n";
				cout << "\n\t\t\t\t\t\t\t\t\t <See MY TICKET>\n";
				system ("PAUSE");
				system ("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\n\t\t\t\t\t      ___________________________________________________________________________";
				cout << "\n\t\t\t\t\t      ***************************************************************************";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t\t\tiKoncert : Showtime \t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<SM MALL OF ASIA ARENA>  <January 25, 2023> <6:00PM> \t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t=========================================================================*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tSection: VIP\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tQuantity: " << quan << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tPrice: " << totamt << "\t\t\t\t\t\t\t*" ;
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t-------------------------------------------------------------------------";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\t<Customers information>\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tName: " << fname << " " << mdi << " " << lname << "\t\t\t\t\t\t*";		
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tAge: " << age << "\t\t\t\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *\n\t\t\t\t\t\t\tDate Purchased: " << date << "\t\t\t\t\t*";
				cout << "\n\t\t\t\t\t      *_________________________________________________________________________*";
				cout << "\n\t\t\t\t\t      ***************************************************************************\n";
						cout << "\n\n Enter [1] to go back to the MENU:";
				cin >> e;
		    	if (e==1)
			    {
				system("cls");
	         	goto menu;
	        	break;	
		        }
		        }
	}

	  		
	return 0;
}
