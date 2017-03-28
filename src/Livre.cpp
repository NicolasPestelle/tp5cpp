#include "Livre.hpp"
#include <iostream>

Livre::Livre():_titre (" "), _auteur (" "), _annee (0)
{ 
}

  Livre::Livre(const std::string & titre, const std::string & auteur, int annee): _annee(annee)
  {
    /*if(titre.find(";") or titre.find("/n") or auteur.find(";",0) or auteur.find("/n")){
	throw std::string("erreur : titre non valide (';' non autorisé)");
	
	}else{*/
    if(titre.find(";")!=std::string::npos){
      throw std::string("erreur : titre non valide (';' non autorisé)");
    }else if (titre.find("\n")!=std::string::npos){
      throw std::string("erreur : titre non valide ('\n' non autorisé)");
    }else if (auteur.find(";")!=std::string::npos){
      throw std::string("erreur : auteur non valide (';' non autorisé)");
    }
    else if (auteur.find("\n")!=std::string::npos){
      throw std::string("erreur : auteur non valide ('\n' non autorisé)");
    }else{
      
	_titre = titre;
	_auteur = auteur;
	
    }

  }

const std::string & Livre::getTitre() const{
  return _titre;
}


const std::string & Livre::getAuteur() const{
  return _auteur;
}

int Livre::getAnnee() const{
  return _annee;
}


//override
bool Livre::operator<(const Livre & l) const{
  int max;
  if(_auteur < l.getAuteur()){
    max=_auteur.size();
  }else{
    max = l.getAuteur().size();
  }
  for(int i=0; i<max; i++){
    if(_auteur[i] < l.getAuteur()[i]){
      return true;
    }else{
      if(_auteur[i] > l.getAuteur()[i]){
	return false;
      }
    }//endif
  }//endfor
  if(_titre < l.getTitre()){
    max=_titre.size();
  }else{
    max = l.getTitre().size();
  }
  for(int i=0; i<max; i++){
    if(_titre[i] < l.getTitre()[i]){
      return true;
    }else{
      if(_titre[i] > l.getTitre()[i]){
	return false;
      }
    }//endif
  }//endfor
  return false;
}

bool Livre::operator==(const Livre & l) const{
if(_auteur==l.getAuteur() and _titre==l.getTitre() and _annee==l.getAnnee()){
return true;
}
return false;
}
