#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include <tuple>

using namespace std;


int main() {

	std:ofstream f("main.txt");

	if (f.is_open()) {

		cout << "============================================" << endl;
		cout << " " << endl;
		cout << " -> Welcome to Hex | Decimal Color Converter: " << endl;
		cout << " " << endl;
		cout << "============================================" << endl;

		std::string s;


		srand(time(0));

		tuple<int, int, int> colors1;
		tuple<int, int, int> colors2;

		int colorR = rand() % 255;
		int colorG = rand() % 255;
		int colorB = rand() % 255;


		string colorType;

		cout << endl;

		colors1 = make_tuple(colorR, colorG, colorB);

		cout << "-> Custom Type | Hex Decimal: " << endl;

		cin >> colorType;

		auto rColor = 0;
		auto gColor = 0;
		auto bColor = 0;
		char customColor[1025];

		if (colorType == "dec") {

			f << "\n";

			cout << "-> Custom Type Y | N: " << endl;
			cin >> customColor;

			if (customColor == "y") {

				cout << "Enter R: " << endl;
				cin >> rColor;

				cout << "Enter G: " << endl;
				cin >> gColor;
				cout << "Enter B: " << endl;
				cin >> bColor;

				f << "R: " << " " << rColor << endl;
				f << "G: " << " " << gColor << endl;
				f << "B: " << " " << bColor << endl;

				colors2 = make_tuple(rColor, gColor, bColor);
				


			}

		}

		else if (colorType == "hex")
		{
			f << "R: " << " " << colorR << endl;
			f << "G: " << " " << colorG << endl;
			f << "B: " << " " << colorB << endl;


			f << "Hex Color Code: #" << s
				<< setw(4) << std::hex << get<0>(colors1) << std::hex
				<< get<1>(colors1) << std::hex << get<2>(colors1) << std::endl;
		}


		f.close();
	}

	else {
		std::cout << "Error" << std::endl;
	}

	system("pause > 0");
	return 0;
}