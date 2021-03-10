#include "Course.h"
#include <string>
#include <iostream>

float Course::moyenneTemps(){
    float moyenne = ( _scoreUn + _scoreDeux + _scoreTrois ) / 3;
    return moyenne;
}

std::string Course::getPseudoMeilleur(){
    std::string meilleurJoueur = "Il n'y a pas encore de meilleur joueur.";
    if ( _scoreUn > _scoreDeux && _scoreUn > _scoreTrois )
    {
         meilleurJoueur = "Le meilleur est le joueur 1.";
    }
    if ( _scoreDeux > _scoreUn && _scoreDeux > _scoreTrois )
    {
         meilleurJoueur = "Le meilleur est le joueur 2.";
    }
    if ( _scoreTrois > _scoreUn && _scoreTrois > _scoreDeux )
    {
         meilleurJoueur = "Le meilleur est le joueur 3.";
    }
    return meilleurJoueur;
}

void Course::afficheScores(){
    std::cout << "Liste des scores :" << std::endl;
    std::cout << "1er : " << _scoreUn << std::endl;
    std::cout << "2ème : " << _scoreDeux << std::endl;                 // A CHANGER ! ( if etc )
    std::cout << "3ème : " << _scoreTrois << std::endl;
}

void Course::ajouteScore(std::string joueur){
    int score;
    while ( joueur != _joueurUn || joueur != _joueurDeux || joueur != _joueurTrois )
    {
        std::cout << "Rentrer le nom du joueur qui vient d'effectuer le score : ";
        std::cin >> joueur;
        if ( joueur != _joueurUn || joueur != _joueurDeux || joueur != _joueurTrois )
        {
             std::cout << "Vous avez rentré un nom invalide." << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Rentrer le score que vient d'effectuer" << joueur;
    std::cin >> score;

    if (joueur == _joueurUn)
    {
         if (score > _scoreUn)
         {
              _scoreUn = score;
         }
         else
         {
          std::cout << joueur << "n'a pas dépassé son record.";
         }
         
    }

    if (joueur == _joueurDeux)
    {
         if (score > _scoreDeux)
         {
              _scoreDeux = score;
         }
         else
         {
          std::cout << joueur << "n'a pas dépassé son record.";
         }
    }

    if (joueur == _joueurTrois)
    {
         if (score > _scoreTrois)
         {
              _scoreTrois = score;
         }
         else
         {
          std::cout << joueur << "n'a pas dépassé son record.";
         }
    }
}

Course::Course(std::string identifiant, std::string joueurUn, std::string joueurDeux, std::string joueurTrois){}

  //      void ajouteScore();
    //    Course(std::string identifiant);