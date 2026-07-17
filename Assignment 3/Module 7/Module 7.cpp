#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class game {
	public:
		string rank = "";
		string name = "";
		string platform = "";
		string year = "";
		string genre = "";
		string publisher = "";
		string NA_Sales = "";
		string EU_Sales = "";
};

int main()
{
	game statistics;

	ifstream myFile;
	string line = "";
	int location = 0;

	myFile.open("vgsales.csv");
	getline(myFile, line);
	getline(myFile, line);

	int columns = 0;

	while (getline(myFile, line) && columns < 10) {
		location = line.find(',');
		statistics.rank = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.name = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.platform = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.year = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.genre = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.publisher = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.NA_Sales = line.substr(0, location);
		line = line.substr(location + 1, line.length());

		location = line.find(',');
		statistics.EU_Sales = line.substr(0, location);
		line = line.substr(location + 1, line.length());



		cout << "rank: " << statistics.rank << endl
			<< "name: " << statistics.name << endl
			<< "platform: " << statistics.platform << endl
			<< "year: " << statistics.year << endl
			<< "genre: " << statistics.genre << endl
			<< "publisher: " << statistics.publisher << endl
			<< "NA_Sales: " << statistics.NA_Sales << endl
			<< "EU_Sales: " << statistics.EU_Sales << endl
			<< "" << endl;

		columns++;
	}

	myFile.close();

	return 0;
}
