// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;





int main(){

    string ieraksts;
    int i = 0;
    

        







    string jautajumi[] = { "1.Kuri no šiem mainīgo datu tipiem nav skaitliski?\n a)string \n b)int \nc)char\nd)double",
                            "2.Cik liels ir wChar izmērs bitos \n a)2 \n b)4 \nc)6\nd)8",
                            "3.Ka pareizi deklaret mainigo \n a)int a,b; \n b)int a;\nint b; \nc)int a int b;\nd)a,b int;"};

    string atbildes[] = { "a,c","a,b","a,b" };





    for (i = 0; i < 10; i++) {
        do {

            cout << jautajumi[i];
            cout << "\nAtbilde: ";
            cin >> ieraksts;


        } while (ieraksts != atbildes[i]);
    };
}