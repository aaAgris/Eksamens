// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;





int main(){

    string ieraksts;
    int i = 0;
    int pareiza = 0;
    

        







    string jautajumi[] = { "1.Kuri no siem mainigo datu tipiem nav skaitliski?\n a)string \n b)int \nc)char\nd)double",
                            "2.Cik liels ir wChar izmers bitos \n a)2 \n b)4 \nc)6\nd)8",
                            "3.Ka pareizi deklaret mainigo \n a)int a,b; \n b)int a;\nint b; \nc)int a int b;\nd)a,b int;",
                            "4.Kuri no siem mainigo datu tipiem ir skaitliski?\n a)string \n b)int \nc)char\nd)double",
                            "5.Kadas var but bool vertibas?\n a)true un false\n b)2 un 1 \nc)Yes un No\nd)false un true",
                            "6.Kuri ir primarie datu tipi?\n a)int \n b)double \nc)char\nd)array", 
                            "7.Kuri ir sekondarie datu tipi?\n a)int \n b)function \nc)char\nd)array",
                            "8.Kadas vertibas pieder datu tipam void ? \n a)Null \n b)1 \nc)0\nd)zero",
                            "9.Ar kadiem modifikatoriem var mainit int datu tipu ? \n a)short \n b)long \nc)small\nd)big",
                            "10.Ko nedriskt izmantot ka mainiga nosaukumu? \n a)Null \n b)Main \nc)int\nd)kokuSkaits", };




    string atbildes[] = { "a,c","a,b","a,b","b,d","a,d","a,b,c","b,d","a,c","a,b","a,b,c"};

    cout << "Tests par Mainigajiem, to datu tipiem, pamatdarbibam, darbam ar tiem programmesanas valoda C++\nJautajuma ir 4 atbildes un 2 vai 3 pareizi varianti\nVeiksmi!\n\n";



    for (i = 0; i < 10; i++) {
        do {

            cout << jautajumi[i];
            cout << "\nAtbilde: ";
            cin >> ieraksts;
            pareiza++;

        } while (ieraksts != atbildes[i]);
    };


}