#include<iostream>
#include<string>
#include<cstdlib>
#define n 4
#define m 3
#define P 30
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
 facture tablfact[n][m];
client tabl [P];
int i,j;
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
	 cout<<"Le nombre total de client est  "<< nbr <<endl;
	 int totalInscriptions();
	 cout<"le total des inscription est:"<<Tt<< endl;
	 int totalInscriptionFiliere()
	 cout<<"il y a un total de "<<Ttf<<"inscription dans la filiere" <<filiere<< endl;
}
// Total inscription
  int totalInscriptions() {
    int Tt = 0;
    for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (tablfact[i][j].objet == "inscription")
			Tt++;
		}
		return Tt;
	}
  }
  // Total inscription par filière
  int totalInscriptionFiliere() {
    int Ttf = 0;
    string idcl;
    for (int i = 0; i < P; i++) {
        if (MatClient[i].filiere == filiere) {
            idcl = MatClient[i].idcl;
            for (int j = 0; j < N; j++)
                for (int k = 0; k < M; k++)
                    if (MatFact[j][k].objet == "Inscription" && MatFact[j][k].idcl == idcl)
                        Ttf++;
        }
    }
    return Ttf;
} 
  