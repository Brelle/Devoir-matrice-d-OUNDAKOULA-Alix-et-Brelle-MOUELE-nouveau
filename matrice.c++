#include<iostream>
#include<string>
#include<cstdlib>
#define n 3
#define m 4
#define P 8
using namespace std;
struct facture{
	int idFact;
	float montant;
	string objet;
	string idcl;
};
struct client{
	string idcl;
	string nom;
	string filiere;
	string niveau;
};
 MatFact tablfact[N][M];
 MatClient tabcl[P];
int i, j, k;
int nbr, Ttm, Ttp, TtN, TtEI, TtEM, TtET;
float Mm;
string idcl, filiere, niveau, nomET;

//remplir Facture
void remplirMatFact() {
	tablfact[0][0].idFact = 1;
	tablfact[0][1].montant = 150000;
	tablfact[0][2].objet = "inscription";
	tablfact[0][3].idcl = "cl002";
	
	tablfact[1][0].idFact = 2;
	tablfact[1][1].montant = 200000;
	tablfact[1][2].objet = "mensualite";
	tablfact[1][3].idcl = "cl002";
	
	tablfact[2][0].idFact = 3;
	tablfact[2][1].montant = 250000;
	tablfact[2][2].objet = "incription";
	tablfact[2][3].idcl = "cl001";
	
	tablfact[3][0].idFact = 4;
	tablfact[3][1].montant = 600000;
	tablfact[3][2].objet = "mensualite";
	tablfact[3][3].idcl = "cl001";
		
	tablfact[4][0].idFact = 5;
	tablfact[4][1].montant = 150000;
	tablfact[4][2].objet = "tenue";
	tablfact[4][3].idcl = "cl002";
	  	
	tablfact[5][0].idFact = 6;
	tablfact[5][1].montant = 250000;
	tablfact[5][2].objet = "inscription";
	tablfact[5][3].idcl= "cl003";
	  
	tablfact[6][0].idFact = 7;
	tablfact[6][1].montant = 100000;
	tablfact[6][2].objet = "tenue";
	tablfact[6][3].idcl = "cl003";
			
	tablfact[7][0].idFact = 8;
	tablfact[7][1].montant = 800000;
	tablfact[7][2].objet = "mensualite";
	tablfact[7][3].idcl = "cl003";
				
	tablfact[8][0].idFact = 9;
	tablfact[8][1].montant = 700000;
	tablfact[8][2].objet = "mensualite";
	tablfact[8][3].idcl = "cl002";
		
	tablfact[9][0].idFact = 10;
	tablfact[9][1].montant = 200000;
	tablfact[9][2].objet = "tenue";
	tablfact[9][3].idcl = "cl004";
				
	tablfact[10][0].idFact = 11;
	tablfact[10][1].montant = 400000;
	tablfact[10][2].objet = "inscription";
	tablfact[10][3].idcl = "cl005";
				
	tablfact[11][0].idFact = 12;
	tablfact[11][1].montant = 300000;
	tablfact[11][2].objet = "inscription";
	 tablfact[11][3].idcl = "cl006";
}
//remplir client
void remplirClient(struct client tabcl[P]){
	tabl[0].idcl ="cl001";
	tabl[0].nom ="Moussa SARR";
	tabl[0].filiere ="IR";
	tabl[0].niveau ="Master2";
	
	tabl[1].idcl="cl002";
	tabl[1].nom ="Jean Diouf";
	tabl[1].filiere ="IR";
	tabl[1].niveau ="Master2";
	
	tabl[2].idcl="cl003";
	tabl[2].nom ="Djibrif Fall";
	tabl[2].filiere ="MAI";
	tabl[2].niveau ="Master1";
	
	tabl[3].idcl="cl004";
	tabl[3].nom ="Oumar Seck";
	tabl[3].filiere ="IR";
	tabl[3].niveau ="Master2";
	
	tabl[4].idcl="cl005";
	tabl[4].nom ="Awa Ly";
	tabl[4].filiere ="MAI";
	tabl[4].niveau ="Master2";
	
	tabl[5].idcl="cl006";
	tabl[5].nom ="Marienne Fall";
	tabl[5].filiere ="MAI";
	tabl[5].niveau ="Master1";
	
	tabl[6].idcl ="cl007";
	tabl[6].nom ="Oumy Dieng";
	tabl[6].filiere ="IR";
	tabl[6].niveau ="Master1";
	
	tabl[7].idcl ="cl008";
	tabl[7].nom ="Marty Mbaye";
	tabl[7].filiere ="IR";
	tabl[7].niveau ="Master2";	
}
//Nombre de client
int nbclient() {
	
	return P;
};

int main(){
	 remplirMatFact();
	 int nbclient();
	 cout<<"Le nombre total de client est : "<< nbr << endl;
	 int totalInscriptions();
	 cout<"le total des inscription est : " <<Tt<< endl;
	 int totalInscriptionFiliere()
	 cout<<"il y a un total de : "<<Ttf<<"inscription dans la filiere" <<filiere<< endl;
	 float moyenneMensualites()
	 cout<<"la moyenne monsualite est de : " <<Mm<< endl;
	 int totalPaiementClient()
	 cout<< "il y a eu un total de : " <<Ttp<< endl;
	 int totalPaiementNiveau()
	 cout<< "il y a eu un total de : " <<TtN<< endl;
	 void totalPaiementEtudiant()
	 cout << "Etudiant : " << nomET << "  Inscription : " << TtEI << endl;
   	 cout << "Etudiant : " << nomET << "  Mensualite : " << TtEM << endl;
   	 cout << "Etudiant : " << nomET << "  Tenue : " << TtET << endl;
	 float maxMontant()
	 cout<<"le montant le plus eleve est : " <<maxMontant<< endl;
}
// Total inscription
  int totalInscriptions() {
	Tt = 0;
    for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			if (tablfact[i][j].objet == "inscription")
			Tt++;
		}
	}
	return Tt;
  };
// Total inscription par filiere
  int totalInscriptionFiliere() {
    Ttf = 0;
    string idcl;
	cout<<"saisir la filiere"<< endl;
	getline(cin,filiere);
    for ( i = 0; i < P; i++) {
        if (MatClient[i].filiere == filiere) {
            idcl = MatClient[i].idcl;
            for (j = 0; j < n; j++)
                for ( k = 0; k < m; k++)
                    if (MatFact[j][k].objet == "Inscription" && MatFact[j][k].idcl == idcl)
                        Ttf++;
        }
    }
      return Ttf;
};
//Moyenne mensualite
	float moyenneMensualites() {
    Mm = 0; nbrm = 0; Ttm=0;
    for ( i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (MatFact[i][j].objet == "mensualite") {
                Ttm += MatFact[i][j].montant;
                nbrm++;
            }
        }
    }
    if (nbr == 0) return 0;
    return (float)Ttm / nbrm;
};
//Total paiement idcl
int totalPaiementClient(){
	Ttp = 0;
	cout<<"saisir l'id du client"<< endl;
	getline(cin,idcl);
	for (i = 0; i < N; i++){
		for (j = 0; j < m; i++){
			if (MatFact[i][j].idcl == idcl){
				Ttp+= MatFact[i][j].montant
			}
		}
	}
	  return Ttp;
};
//Total paiement par niveau
int totalPaiementNiveau(){
	TtN = 0;
	cout<<"saisir le niveau du client"<<endl;
	getline(cin,niveau);
	for (int i = 0; i < P; i++){
		if (MatClient[i].niveau == niveau){
		 idcl= MatClient[i].idcl;
		for (j= 0;j < n; n ++){
			for (k= 0;k < n; k++){
				if (MatClient[j][k].idcl== idcl){
					 TtN +=tablfact[j][k].montant
				}
			}
		}
	}
	 return TtN;
};
// Total paiement etudiant
void totalPaiementEtudiant(){
    TtEI = 0, TtEM = 0, TtET = 0;
	string nomET, idcl;
	cout<<"saisir le nom de l'etudiant"<<endl;
	getline(cin,nomET),
	for (i = 0; i < P; i++){
		if (MatClient[i].nom == nom){
			idcl = MatClient[i].idcl;
		}
		for (j= 0; j < n; j++){
			for (k = 0; k < m; k++) {
				if (MatFact[j][k].objet == "Inscription"{
					TtEI += MatFact[j][k].montant;
					else if (MatFact[j][k].objet == "mensualite"){
						TtEM += MatFact[j][k].montant;
						else if (MatFact[j][k].objet == "Tenue"){
							TtET += MatFact[j][k].montant;
						}
					}
				}
			

			}
		}
	}
}
//Liste paiement (nom etudiant)
bool listePaiement(){
	float montantIN,montantME,montantTENUE;
	idcl = -1;
	for ( i = 0; i < P; i++){
		if (MatClient[i].nom == nomET){
			numclient = MatClient[i].idcl;
			 break;
			}
			if (idcl== -1){
				return false;
			}
			for (int j = 0; j < N; j++){
				for (int k = 0; k < M; k++){
					if (MatFact[j][k].idcl == numclient){
						if (MatFact[j][k].objet == "inscription"){
							montantIN += MatFact[j][k].montant;
							else if (MatFact[j][k].objet == "Mensualite"){
								montantME += MatFact[j][k].montant;
								else if (MatFact[j][k].objet == "tenue"){
									montantTENUE += MatFact[j][k].montant;
								}
							}

						}
					}


				}
			}


		}


	}
	 return true;
};
// MONTANT MAXIMUM 
 float maxMontant() {
	float maxmontant = MatFact[0][0].montant;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (MatFact[i][j].montant > maxmontant) {
                maxmontant = MatFact[i][j].montant;
            }
        }
    }
    return maxmontant;
};
 Trier tableau client par nom
void trier_client_nom() {
    // Copie du tableau
    Client temp[P];
    for(int i = 0; i < P; i++) {
        temp[i] = clients[i];
    }
    
    // Tri à bulles par ordre alphabétique
    for(int i = 0; i < P-1; i++) {
        for(int j = 0; j < P-i-1; j++) {
            if(temp[j].nom > temp[j+1].nom) {
                Client swap = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = swap;
            }
        }
    }
    
    cout << "\n=== CLIENTS TRIES PAR NOM ===" << endl;
    cout << left << setw(10) << "ID" 
         << setw(20) << "Nom" 
         << setw(10) << "Filiere" 
         << setw(10) << "Niveau" << endl;
    cout << "---------------------------------------------" << endl;
    
    for(int i = 0; i < P; i++) {
        cout << left << setw(10) << temp[i].idCl
             << setw(20) << temp[i].nom
             << setw(10) << temp[i].filiere
             << setw(10) << temp[i].niveau << endl;
    }
}
 // Tri à bulles par montant croissant
    for(int i = 0; i < TOTAL_FACTURES-1; i++) {
        for(int j = 0; j < TOTAL_FACTURES-i-1; j++) {
            if(temp[j].montant > temp[j+1].montant) {
                Facture swap = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = swap;
            }
        }
    }
    
    cout << "\n=== FACTURES TRIEES PAR MONTANT (CROISSANT) ===" << endl;
    cout << left << setw(10) << "ID Fact" 
         << setw(15) << "Montant" 
         << setw(15) << "Objet" 
         << setw(10) << "ID Client" << endl;
    cout << "--------------------------------------------" << endl;
    
    for(int i = 0; i < TOTAL_FACTURES; i++) {
        cout << left << setw(10) << temp[i].idFact
             << fixed << setprecision(0)
             << setw(15) << temp[i].montant
             << setw(15) << temp[i].objet
             << setw(10) << temp[i].idCl << endl;
    }
    cout << setprecision(2); // Réinitialiser
}
//  FONCTION PRINCIPALE 
int main() {
    // Initialisation des données
    remplir_fact();
    remplir_client();
    
    int choix;
    string idCl, nom;
    
    do {
        cout << "\n========== MENU PRINCIPAL ==========" << endl;
        cout << "1.  Nombre de clients" << endl;
        cout << "2.  Total des inscriptions" << endl;
        cout << "3.  Total inscriptions par filiere" << endl;
        cout << "4.  Moyenne des mensualites" << endl;
        cout << "5.  Total paiement par ID client" << endl;
        cout << "6.  Total paiement par niveau" << endl;
        cout << "7.  Total paiement par nom etudiant" << endl;
        cout << "8.  Affichage par ordre montant/objet" << endl;
        cout << "9.  Montant maximum -> objet" << endl;
        cout << "10. Liste versement par ID client" << endl;
        cout << "11. Trier clients par nom" << endl;
        cout << "12. Trier factures par montant" << endl;
        cout << "0.  Quitter" << endl;
        cout << "Votre choix : ";
        
        // Validation de l'entrée
        if(!(cin >> choix)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Veuillez entrer un nombre valide!" << endl;
            pause();
            continue;
        }
        
        switch(choix) {
            case 1:
                cout << "\nNombre de clients: " << nb_client() << endl;
                pause();
                break;
                
            case 2:
                cout << fixed << setprecision(0);
                cout << "\nTotal des inscriptions: " << total_inscription() << " FCFA" << endl;
                cout << setprecision(2);
                pause();
                break;
                
            case 3:
                total_inscription_par_filiere();
                pause();
                break;
                
            case 4:
                cout << fixed << setprecision(0);
                cout << "\nMoyenne des mensualites: " << moyenne_mensualite() << " FCFA" << endl;
                cout << setprecision(2);
                pause();
                break;
                
            case 5:
                cout << "Entrez l'ID client (ex: cl001): ";
                cin >> idCl;
                cout << fixed << setprecision(0);
                cout << "Total paiement pour " << idCl << ": " 
                     << total_paiement_idcl(idCl) << " FCFA" << endl;
                cout << setprecision(2);
                pause();
                break;
                
            case 6:
                total_paiement_niveau();
                pause();
                break;
                
            case 7:
                cin.ignore(); // Vider le buffer
                cout << "Entrez le nom complet de l'etudiant: ";
                getline(cin, nom);
                cout << fixed << setprecision(0);
                cout << "Total paiement pour " << nom << ": " 
                     << total_paiement_nom(nom) << " FCFA" << endl;
                cout << setprecision(2);
                pause();
                break;
                
            case 8:
                affichage_ordre_montant_objet();
                pause();
                break;
                
            case 9:
                maxMontant();
                pause();
                break;
                
            case 10:
                cout << "Entrez l'ID client (ex: cl001): ";
                cin >> idCl;
                liste_versement_idcl(idCl);
                pause();
                break;
                
            case 11:
                trier_client_nom();
                pause();
                break;
                
            case 12:
                trier_facture_montant();
                pause();
                break;
                
            case 0:
                cout << "Au revoir !" << endl;
                break;
                
            default:
                cout << "Choix invalide !" << endl;
                pause();
        }
        
    } while(choix != 0);
    
    return 0;
}