#include <iostream>
#include <fstream>
#include <string>
#include "Pretprogram.h"
#include "Functions.h"
#include "Logo.h"

void Pretprogram()
{
	std::ifstream aa("1.txt");
	if (!aa.is_open())
	{
		std::ofstream myfile("1.txt");
		myfile << 1;
		myfile.close();
	}
	std::string line;
	std::string one = "1";
	std::ifstream myfile("1.txt");
	if (myfile.is_open())
	{
		getline(myfile, line);
		if (line == one)
		{
			system("md Racuni");
			system("md Kupci");
			system("md Artikli");
			system("md Obradjeni_racuni");
			system("md Error");
			system("md Racuni_sa_greskom");
			std::ofstream regAdmins("RegistrovaniAdmini.txt");
			std::ofstream regAnalysts("RegistrovaniAnaliticari.txt");
			std::ofstream malAdmins("MaliciozniAdmini.txt");
			std::ofstream malAnalysts("MaliciozniAnaliticari.txt");
			Person admin;
			admin.setName("admin");
			admin.setSurname("admin");
			admin.setID("0000");
			admin.setPIN("0000");
			admin.setMalicious("odobren");
			regAdmins << std::setw(15) << std::left << admin.getName() << std::setw(15) << std::left << admin.getSurname() << std::setw(10) << std::left << admin.getID() << std::setw(10) << std::left << admin.getPIN() << std::setw(10) << std::left << admin.getMalicious() << std::endl;
			regAdmins.close();
			regAnalysts.close();
			malAdmins.close();
			malAnalysts.close();

			char valuta;
			myfile.close();
			std::ofstream file;
			do
			{
				system("cls");
				logoS();
				std::cout << std::endl << "Dobrodosli u pretprogram koji se pokrece samo pri prvom pokretanju aplikacije na racunaru." << std::endl;
				std::cout << "Ovdje se vrsi odabir valute koju ce aplikacija koristit tokom rada i unosi se naziv kompanije koja koristi softver." << std::endl;
				std::cout << "Odabir valute vrsi administrator koji je prvi dobio pristup sistemu." << std::endl;

				std::cout << std::endl << "ODABERI VALUTU: " << std::endl;
				std::cout << std::endl << "1. Americki dolar" << std::endl;
				std::cout << "2. Evro" << std::endl;
				std::cout << "3. BiH KM" << std::endl;
				std::cout << "4. Srbijanski dinar" << std::endl;
				std::cout << "5. Britanska funta" << std::endl;
				std::cout << std::endl << "Odaberi opciju: "; std::cin >> valuta;
			} while (valuta != '1' && valuta != '2' && valuta != '3' && valuta != '4' && valuta != '5');
			if (valuta == '1')
			{
				std::ofstream value;
				value.open("Valuta.txt");
				value << "$";
				file.open("1.txt");
				file << "0";
				value.close();
				std::cout << std::endl << "Unesite naziv kompanije: ";
				std::string company_name = input();
				std::ofstream company_file("NazivKompanije.txt");
				company_file << company_name;
				company_file.close();
			}
			if (valuta == '2')
			{
				std::ofstream value;
				value.open("Valuta.txt");
				value << "E";
				file.open("1.txt");
				file << "0";
				value.close();
				std::cout << std::endl << "Unesite naziv kompanije: ";
				std::string company_name = input();
				std::ofstream company_file("NazivKompanije.txt");
				company_file << company_name;
				company_file.close();
			}
			if (valuta == '3')
			{
				std::ofstream value;
				value.open("Valuta.txt");
				value << "KM";
				file.open("1.txt");
				file << "0";
				value.close();
				std::cout << std::endl << "Unesite naziv kompanije: ";
				std::string company_name = input();
				std::ofstream company_file("NazivKompanije.txt");
				company_file << company_name;
				company_file.close();
			}
			if (valuta == '4')
			{
				std::ofstream value;
				value.open("Valuta.txt");
				value << "RSD";
				file.open("1.txt");
				file << "0";
				value.close();
				std::cout << std::endl << "Unesite naziv kompanije: ";
				std::string company_name = input();
				std::ofstream company_file("NazivKompanije.txt");
				company_file << company_name;
				company_file.close();
			}
			if (valuta == '5')
			{
				std::ofstream value;
				value.open("Valuta.txt");
				value << "GBP";
				file.open("1.txt");
				file << "0";
				value.close();
				std::cout << std::endl << "Unesite naziv kompanije: ";
				std::string company_name = input();
				std::ofstream company_file("NazivKompanije.txt");
				company_file << company_name;
				company_file.close();
			}
			getchar();
			int k = 1;
			successfulSignIn(admin, k);//prijavljen administrator nakon prvog pokretanja
		}
	}
}
