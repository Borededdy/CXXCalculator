#include <iostream>
using namespace std;

void op_selection ();
void num_writer ();
void functions_menu ();
void redirect ();

    int num_op;
	int menu_selection;
	int lang_selection;
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int result;

//Do not edit below this line
void select_lang (){
	
	cout<<" Welcome! Select your language:"<<endl<<" (1)italiano (2)English "<<endl<<"Reply input > ";
	cin>>lang_selection;
	
	if (lang_selection > 2){
		
			cout<<"Sorry, at the moment we only support 2 languages! (more in the nearest future) if you want to be a translator please contact @Borededdy."<<endl;
			system("clear");
	
	} else { 
		
			if (lang_selection == 1){
					
					cout<<"Benvenuto in Calcolatore Cxx, calcolatore multifunzione sviluppato in C++ | Crediti: Programmatore (Tag GituHub) @Borededdy, ispirato a C-Calculator, sviluppato da @MGislv e @furvy04"<<endl;
					system("clear");
					op_selection ();
					
			} else {
					
					if (lang_selection == 2){
						
						cout<<"Welcome on Cxx Calculator, multipurpose calculator based im C++ | Credits: Programmer (GitHub repos) @Borededdy, original inspiration from C-Calculator, developed by @MGislv and @furvy04"<<endl;
						system("clear");
						op_selection ();
					
					}
			}
	}
}

void op_selection (){
	
	if (lang_selection == 1){
		
		cout<<"[1/3] Inserisci il numero di operatori ! Al momento supportiamo solo 4 operatori !"<<endl<<"Input risposta > ";
		cin>>num_op;
		system("clear");
		num_writer ();
	
	} else {
		
		if (lang_selection == 2){
			
			cout<<"[1/3] Write the number of operators ! at the moment we support only 4 operators !"<<endl<<"Reply input >";
			cin>>num_op;
			system("clear");
			num_writer ();
		
		}
	}
}

void num_writer (){
	
	if (lang_selection == 1){
		
		if (num_op == 2){
			
			cout<<"[2/3] (1/2) Inserisci il valore del primo operatore"<<endl<<"Input risposta >";
			cin>>num_1;
			cout<<"[2/3] (2/2) Inserisci il valore del secondo operatore"<<endl<<"Input risposta >";
			cin>>num_2;
			functions_menu ();
		
		} else {
			
			if (num_op == 3){
				
				cout<<"[2/3] (1/3) Inserisci il valore del primo operatore"<<endl<<"Input risposta >";
				cin>>num_1;
				cout<<"[2/3] (2/3) Inserisci il valore del secondo operatore"<<endl<<"Input risposta >";
				cin>>num_2;
				cout<<"[2/3] (3/3) Inserisci il valore del terzo operatore"<<endl<<"Input risposta >";
				cin>>num_3;
				functions_menu ();
				
			} else {
				
				if (num_op == 4){
					
					cout<<"[2/3] (1/3) Inserisci il valore del primo operatore"<<endl<<"Input risposta >";
					cin>>num_1;
					cout<<"[2/3] (2/3) Inserisci il valore del secondo operatore"<<endl<<"Input risposta >";
					cin>>num_2;
					cout<<"[2/3] (3/4) Inserisci il valore del terzo operatore"<<endl<<"Input risposta >";
					cin>>num_3;
					cout<<"[2/3] (4/4) Inserisci il valore del quarto operatore"<<endl<<"Input risposta >";
					cin>>num_4;
					functions_menu ();
					
				}
			}
		}
	}
	
	if (lang_selection == 2){

		if (num_op == 2){
			
				cout<<"[2/3] (1/2) insert the first operator value"<<endl<<"Input risposta >";
				cin>>num_1;
				cout<<"[2/3] (2/2) insert the second operator value"<<endl<<"Input risposta >";
				cin>>num_2;
				functions_menu ();
		
				} else {
			
					if (num_op == 3){
				
						cout<<"[2/3] (1/3) insert the first operator value"<<endl<<"Input risposta >";
						cin>>num_1;
						cout<<"[2/3] (2/3) insert the second operator value"<<endl<<"Input risposta >";
						cin>>num_2;
						cout<<"[2/3] (3/3) insert the third operator value"<<endl<<"Input risposta >";
						cin>>num_3;
						functions_menu ();
				
					} else {
				
						if (num_op == 4){
					
							cout<<"[2/3] (1/3) insert the first operator value"<<endl<<"Input risposta >";
							cin>>num_1;
							cout<<"[2/3] (2/3) insert the second operator value"<<endl<<"Input risposta >";
							cin>>num_2;
							cout<<"[2/3] (3/4) insert the third operator value"<<endl<<"Input risposta >";
							cin>>num_3;
							cout<<"[2/3] (4/4) insert the fourth operator value"<<endl<<"Input risposta >";
							cin>>num_4;
							functions_menu ();
					
				}
			}
		}
	}
	system("clear");
}

void functions_menu (){
	
	if (lang_selection == 1){
		
		cout<<"   Menu Funzioni   "<<endl<<" (1) Somma   (2) Sottrazione "<<endl<<" (3) Moltiplicazione   (4) Divisione "<<endl<<"Inserisci il numero corrispondente"<<endl<<"Input risposta > ";
		cin>>menu_selection;
		system("clear");
		
	} else {
		
		if (lang_selection == 2){
			
			cout<<"   Functions Menu   "<<endl<<" (1) Sum   (2) Subtraction "<<endl<<" (3) Moltiplication   (4) Division "<<endl<<"enter the corresponding number"<<endl<<"Reply input > ";
			cin>>menu_selection;
			system("clear");
		
		}
	}
}

void redirect (){
	
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
}

void sum (){
	
	// DA RIFARE
	if (num_op == 2){
		
		result = num_1 + num_2;
		
	} else {
		
		if (lang_selection == 1){
			
			cout<<"Il risultato della tua somma è: "<<result;
			cout<<"Grazie per aver utilizzato Cxx Calculator.";
		
		} else {
			
			if (num_op == 3){
		
				result = num_1 + num_2 + num_3;
		
			} else {
		
				if (lang_selection == 1){
			
						cout<<"Il risultato della tua somma è: "<<result;
						cout<<"Grazie per aver utilizzato Cxx Calculator.";
				
					} else {
					
						if (num_op == 4){
		
							result = num_1 + num_2 + num_3 + num_4;
		
						} else {
		
							if (lang_selection == 1){
			
								cout<<"Il risultato della tua somma è: "<<result;
								cout<<"Grazie per aver utilizzato Cxx Calculator.";
							}
						}
					}
			}
		}
	}	
}	


int main(){
	

	
	// Starting of function select_lang
	select_lang ();
	
}
