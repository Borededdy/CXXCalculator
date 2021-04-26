#include <iostream>
using namespace std;

int sum ();
int subtraction ();
int moltiplication ();
int division ();

//variables
int num_op;
int menu_selection = 0;
int lang_selection;
int counter = 0;
int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;;
int result;

#define CLEAR system("clear");

//Do not edit below this line
void select_lang (){
	
	cout<<" Welcome! Select your language:\n";
	cout<<"|------------------------------|\n";
	cout<<"    (1)italiano (2)English \n"<<"Reply input > ";
	cin>>lang_selection;
	
	if (lang_selection > 2){
			cout<<"Sorry, at the moment we only support 2 languages! (more in the nearest future) if you want to be a translator please contact @Borededdy.\n";
			CLEAR
	} else if (lang_selection == 1){
					cout<<"Benvenuto in Calcolatore Cxx, calcolatore multifunzione sviluppato in C++ | Crediti: Programmatore (Tag GituHub) @Borededdy, ispirato a C-Calculator, sviluppato da @MGislv e @furvy04\n";
					CLEAR
					
	} else if (lang_selection == 2){
						cout<<"Welcome on Cxx Calculator, multipurpose calculator based im C++ | Credits: Programmer (GitHub repos) @Borededdy, original inspiration from C-Calculator, developed by @MGislv and @furvy04\n";
						CLEAR
						
					
	}
}

void op_selection (){
	
	if (lang_selection == 1){
		
		cout<<"[1/3] Inserisci il numero di operatori ! Al momento supportiamo solo 4 operatori !"<<endl<<"Input risposta > ";
		cin>>num_op;
		CLEAR
	
	} else {
		
		if (lang_selection == 2){
			
			cout<<"[1/3] Write the number of operators ! at the moment we support only 4 operators !"<<endl<<"Reply input > ";
			cin>>num_op;
			CLEAR
		
		}
	}
}

void num_writer (){
	
	if (lang_selection == 1){
		
		if (num_op == 2){
			
			cout<<"[2/3] (1/2) Inserisci il valore del primo operatore"<<endl<<"Input risposta > ";
			cin>>num_1;
			cout<<"[2/3] (2/2) Inserisci il valore del secondo operatore"<<endl<<"Input risposta > ";
			cin>>num_2;
			CLEAR
		
		} else {
			
			if (num_op == 3){
				
				cout<<"[2/3] (1/3) Inserisci il valore del primo operatore"<<endl<<"Input risposta > ";
				cin>>num_1;
				cout<<"[2/3] (2/3) Inserisci il valore del secondo operatore"<<endl<<"Input risposta > ";
				cin>>num_2;
				cout<<"[2/3] (3/3) Inserisci il valore del terzo operatore"<<endl<<"Input risposta > ";
				cin>>num_3;
				CLEAR
				
			} else {
				
				if (num_op == 4){
					
					cout<<"[2/3] (1/3) Inserisci il valore del primo operatore"<<endl<<"Input risposta > ";
					cin>>num_1;
					cout<<"[2/3] (2/3) Inserisci il valore del secondo operatore"<<endl<<"Input risposta > ";
					cin>>num_2;
					cout<<"[2/3] (3/4) Inserisci il valore del terzo operatore"<<endl<<"Input risposta > ";
					cin>>num_3;
					cout<<"[2/3] (4/4) Inserisci il valore del quarto operatore"<<endl<<"Input risposta > ";
					cin>>num_4;
					CLEAR
				}
			}
		}
	}
	
	if (lang_selection == 2){

		if (num_op == 2){
			
				cout<<"[2/3] (1/2) insert the first operator value"<<endl<<"Input risposta > ";
				cin>>num_1;
				cout<<"[2/3] (2/2) insert the second operator value"<<endl<<"Input risposta > ";
				cin>>num_2;
				CLEAR
		
				} else {
			
					if (num_op == 3){
				
						cout<<"[2/3] (1/3) insert the first operator value"<<endl<<"Input risposta > ";
						cin>>num_1;
						cout<<"[2/3] (2/3) insert the second operator value"<<endl<<"Input risposta > ";
						cin>>num_2;
						cout<<"[2/3] (3/3) insert the third operator value"<<endl<<"Input risposta >";
						cin>>num_3;
						CLEAR
					} else {
						if (num_op == 4){
							cout<<"[2/3] (1/3) insert the first operator value"<<endl<<"Input risposta > ";
							cin>>num_1;
							cout<<"[2/3] (2/3) insert the second operator value"<<endl<<"Input risposta > ";
							cin>>num_2;
							cout<<"[2/3] (3/4) insert the third operator value"<<endl<<"Input risposta > ";
							cin>>num_3;
							cout<<"[2/3] (4/4) insert the fourth operator value"<<endl<<"Input risposta > ";
							cin>>num_4;
							CLEAR
				}
			}
		}
	}
}

void functions_menu (){
	
	if (lang_selection == 1){
		
		cout<<"            _- Menu Funzioni -_         "<<endl;
		cout<<"|--------------------------------------|"<<endl;
		cout<<" (1) Somma   		  (2) Sottrazione "<<endl;
		cout<<" (3) Moltiplicazione   (4) Divisione "<<endl;
		cout<<"|--------------------------------------|"<<endl;
		cout<<endl;
		cout<<"! Inserisci il numero corrispondente"<<endl;
		cout<<"Input risposta > ";
		cin>>menu_selection;
		system("clear");
		
	} else {
		
		if (lang_selection == 2){
			
			cout<<"           _- Menu Funzioni -_         "<<endl;
			cout<<"|--------------------------------------|"<<endl;
			cout<<" (1) Sum   		      (2) Sottraction "<<endl;
			cout<<" (3) Moltiplication    (4) Division "<<endl;
			cout<<"|--------------------------------------|"<<endl;
			cout<<endl;
			cout<<"! enter the corrispondent number"<<endl;
			cout<<"Reply input > ";
			cin>>menu_selection;
			system("clear");
		
		}
	}
}

int sum (){
	if (lang_selection == 1) {
	    result = num_1 + num_2 + num_3 + num_4;
		cout << "Il risultato della tua somma è: " << result;
		system("pause");
	} else {
	    result = num_1 + num_2 + num_3 + num_4;
		cout << "The sum result is: " << result;
	}
}

int subtraction (){
	if (lang_selection == 1) {
	    result = num_1 - num_2 - num_3 - num_4;
		cout << "Il risultato della tua sottrazione è: " << result;
		system("pause");
	} else {
	    result = num_1 - num_2 - num_3 - num_4;
		cout << "The subtraction result is: " << result;
		system("pause");
	}
}

int moltiplication (){
	if (lang_selection == 1 ) {
	    if (num_op == 2){
	    result = num_1 * num_2;
		cout << "Il risultato della tua moltiplicazione è: " << result;
        system("pause");
	    } else if (num_op == 3){
	        result = num_1 * num_2 * num_3;
		    cout << "Il risultato della tua moltiplicazione è: " << result;
            system("pause");
	    } else {
	        result = num_1 * num_2 * num_3 * num_4;
		    cout << "Il risultato della tua moltiplicazione è: " << result;
            system("pause");
	    }
	} else {
	    if (num_op == 2){
	    result = num_1 * num_2;
		cout << "the result of moltiplication is: " << result;
        system("pause");
	    } else if (num_op == 3){
	        result = num_1 * num_2 * num_3;
		    cout << "the result of moltiplication is: " << result;
            system("pause");
	    } else {
	        result = num_1 * num_2 * num_3 * num_4;
		    cout << "the result of moltiplication is: " << result;
            system("pause");
	    }
	}
}

int division (){
	if (lang_selection == 1 ) {
	    if (num_op == 2){
	    result = num_1 / num_2;
		cout << "Il risultato della tua moltiplicazione è: " << result;
        system("pause");
	    } else if (num_op == 3){
	        result = num_1 / num_2 / num_3;
		    cout << "Il risultato della tua moltiplicazione è: " << result;
            system("pause");
	    } else {
	        result = num_1 / num_2 / num_3 / num_4;
		    cout << "Il risultato della tua moltiplicazione è: " << result;
            system("pause");
	    }
	} else {
	    if (num_op == 2){
	    result = num_1 / num_2;
		cout << "the result of moltiplication is: " << result;
        system("pause");
	    } else if (num_op == 3){
	        result = num_1 / num_2 / num_3;
		    cout << "the result of moltiplication is: " << result;
            system("pause");
	    } else {
	        result = num_1 / num_2 / num_3 / num_4;
		    cout << "the result of moltiplication is: " << result;
            system("pause");
	    }
	}
}
int main(){
	
	// Starting of function select_lang
	select_lang ();
	CLEAR
	op_selection ();
	CLEAR
	num_writer ();
	CLEAR
	functions_menu ();
	CLEAR
	if (menu_selection == 1){
		sum ();
	} else {
		if (menu_selection == 2){
			subtraction ();
		} else {
			if (menu_selection == 3){	
				moltiplication ();
			} else {
				if (menu_selection == 4){
					division ();
				}
			}
		}
	}
CLEAR
}

