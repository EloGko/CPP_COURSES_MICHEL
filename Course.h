#include <string>
#include <iostream>

class Course{
    private:
        std::string _identifiant;
        std::string _joueurUn;
        std::string _joueurDeux;
        std::string _joueurTrois;
        int _scoreUn;
        int _scoreDeux;
        int _scoreTrois;
    public:
        float moyenneTemps();
        std::string getPseudoMeilleur();
        void afficheScores();
        void ajouteScore(std::string joueur);
        Course(std::string identifiant, std::string joueurUn, std::string joueurDeux, std::string joueurTrois);
};