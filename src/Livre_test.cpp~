/*
#include <CppUTest/CommandLineTestRunner.h>

#include "Livre.hpp"

#include <sstream>

TEST_GROUP(GroupLivre) { };

TEST(GroupLivre, Livre_constructeur_1) 
{
	Livre livre("titre1", "auteur1", 1337);
	CHECK(livre.getTitre() == std::string("titre1"));
	CHECK(livre.getAuteur() == "auteur1");
	CHECK_EQUAL(livre.getAnnee(), 1337);
}

TEST(GroupLivre, Livre_constructeur_2) 
{
	try 
    {
        Livre livre("titre1;", "auteur1", 1337);
		FAIL( "exception non levee" );
	}
	catch (const std::string& str) 
    {
		CHECK_EQUAL(str, "erreur : titre non valide (';' non autorisé)");
	}
}

TEST(GroupLivre, Livre_constructeur_3) 
{
	try 
    {
        Livre livre("titre1", "auteur1;", 1337);
		FAIL( "exception non levee" );
	}
	catch (const std::string& str) 
    {
		CHECK_EQUAL(str, "erreur : auteur non valide (';' non autorisé)");
	}
}

TEST(GroupLivre, Livre_constructeur_4) 
{
	try 
    {
        Livre livre("titre1", "auteur1\n", 1337);
		FAIL( "exception non levee" );
	}
	catch (const std::string& str) 
    {
		CHECK_EQUAL(str, "erreur : auteur non valide ('\n' non autorisé)");
	}
}

TEST(GroupLivre, Livre_inferieur_pp) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",0), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a0",2), false);
}

TEST(GroupLivre, Livre_inferieur_pz) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",0), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a1",2), false);
}

TEST(GroupLivre, Livre_inferieur_pm) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",1), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",0), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t0","a2",2), true);
}

TEST(GroupLivre, Livre_inferieur_zp) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",0), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a0",2), false);
}

TEST(GroupLivre, Livre_inferieur_zz) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",0), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a1",2), false);
}

TEST(GroupLivre, Livre_inferieur_zm) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",1), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",0), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t1","a2",2), true);
}

TEST(GroupLivre, Livre_inferieur_mp) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",0), false);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a0",2), false);
}

TEST(GroupLivre, Livre_inferieur_mz) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",1), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",0), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a1",2), true);
}

TEST(GroupLivre, Livre_inferieur_mm) 
{
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",1), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",0), true);
	CHECK_EQUAL(Livre("t1","a1",1)<Livre("t2","a2",2), true);
}

TEST(GroupLivre, Livre_egalite_1) 
{
	CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a1",1), true);
}

TEST(GroupLivre, Livre_egalite_2) 
{
	CHECK_EQUAL(Livre("t1","a1",1)==Livre("t2","a1",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a2",1), false);
	CHECK_EQUAL(Livre("t1","a1",1)==Livre("t1","a1",2), false);
}

TEST(GroupLivre, Livre_entree_1) 
{
	Livre livre;
	std::stringstream s("titre;auteur;42");
	s >> livre;
	CHECK(livre.getTitre() == "titre");
	CHECK(livre.getAuteur() == "auteur");
	CHECK_EQUAL(livre.getAnnee(), 42);
}

TEST(GroupLivre, Livre_sortie_1) 
{
	Livre livre("titre", "auteur", 42);
	std::stringstream s;
	s << livre;
	CHECK_EQUAL(std::string("titre;auteur;42"), s.str());
}

*/

