#ifndef DEF_CLASS
#define DEF_CLASS

#include <string>
#include <iostream>

class Personnage
{
	public:
	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	//methodes
	void	recevoirDegats(int	nbDegats);
	void	attaquer(Personnage &cible);
	void	boirePotionDeVie(int	quantitePotion);
	void	changerArme(std::string	nomNouvelleArme, int	degatsNouvelleArme);
	bool	estVivant();

	private:
	//attributs
	int			m_vie;
	int			m_mana;
	std::string	m_nomArme;
	int			m_degatsArme;
};

#endif
