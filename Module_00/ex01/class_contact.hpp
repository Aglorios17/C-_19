#ifndef CLASS_CONTACT
# define CLASS_CONTACT

class Contact
{
private:
	int		index;
	static		std::string fields_name[11];
	std::string	informations[11];

	enum Field {
		FirstName = 0,
		LastName,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		Secret
	};
public:
	Contact();

//	bool set_informations(int index);
//	void display_header(void);
//	void display(void);
};

#endif
