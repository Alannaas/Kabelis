#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                  	int n, sluoksniai; //n -laidininkø skaièius


                  	ifstream fd ("Duomenys.txt");
                  	ofstream fr("Rezultatai.txt");
                  	fd >> n;

                  	sluoksniai = n;
                  	if (n <= 1 || n >= 109)
                  	{
                                       	fr << "ivesti netinkami duomenys" << endl;
                                       	return 0;
                  	}
                  	while (n > 0)
                  	{

                                       	if (n / 2 >= 1)
                                       	{
                                                             	sluoksniai++;
                                                             	n--;
                                       	}
                                       	else
                                       	{
                                                             	break;
                                       	}
                  	}



                  	fr << sluoksniai;
}
