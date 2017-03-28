/*
#include <CppUTest/CommandLineTestRunner.h>

#include "Bibliotheque.hpp"

#include <sstream>

TEST_GROUP(GroupBibliotheque) { };

TEST(GroupBibliotheque, Bibliotheque_trierParAuteurEtTitre_1) 
{
    Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
    CHECK(b[0] == Livre("t0","a0",42));
    CHECK(b[1] == Livre("t1","a1",13));
    CHECK(b[2] == Livre("t2","a2",37));
}

TEST(GroupBibliotheque, Bibliotheque_trierParAuteurEtTitre_2) 
{
    Bibliotheque b;
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a0",37));
    b.push_back(Livre("t0","a0",42));
    b.trierParAuteurEtTitre();
    CHECK(b[0] == Livre("t0","a0",42));
    CHECK(b[1] == Livre("t2","a0",37));
    CHECK(b[2] == Livre("t1","a1",13));
}

TEST(GroupBibliotheque, Bibliotheque_trierParAnnee_1) 
{
    Bibliotheque b;
    b.push_back(Livre("t0","a0",42));
    b.push_back(Livre("t1","a1",13));
    b.push_back(Livre("t2","a2",37));
    b.trierParAnnee();
    CHECK(b[0] == Livre("t1","a1",13));
    CHECK(b[1] == Livre("t2","a2",37));
    CHECK(b[2] == Livre("t0","a0",42));
}

TEST(GroupBibliotheque, Bibliotheque_fichier_1 ) 
{
    Bibliotheque b1;
    b1.push_back(Livre("t0","a0",42));
    b1.push_back(Livre("t1","a1",13));
    b1.push_back(Livre("t2","a2",37));
    b1.ecrireFichier("bibliotheque_fichier_tmp.txt");
    Bibliotheque b2;
    b2.lireFichier("bibliotheque_fichier_tmp.txt");
    CHECK(b2[0] == Livre("t0","a0",42));
    CHECK(b2[1] == Livre("t1","a1",13));
    CHECK(b2[2] == Livre("t2","a2",37));
}

TEST(GroupBibliotheque, Bibliotheque_charger_1 ) 
{
    Bibliotheque b;
    try
    {
        b.lireFichier("bibliotheque_fichier_inexistant.txt");
		FAIL( "exception non levee" );
    }
	catch (const std::string& str) 
    {
        CHECK_EQUAL(str, "erreur : lecture du fichier impossible"); 
	}
}

*/

