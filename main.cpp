#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class queue{
private:
    int front;
    int rear;
    int arr[5];

public:

};

int main()
{
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  system("color e");


cout << "           ************************************************************************************************************" << endl;
cout << "           ************************************************************************************************************\n" << endl;
cout << "                                               WELCOME TO MY DATA STRUCTURE\n" << endl;
cout << "                                                  PRACTICAL APPLICATION \n" << endl;
cout << "                                                        USING C++" << endl;
cout << "           ************************************************************************************************************\n\n\n\n" << endl;
    SetConsoleTextAttribute(h,12);
cout << "                                                  CHUNG STEPHEN SAMUEL\n" << endl;
cout << "                                                     UJ/2017/NS/0634\n" << endl;
cout << "                                                300 LEVEL COMPUTER SCIENCE\n\n\n\n" << endl;

    //VARIABLE FOR WELCOME PAGE//
    int welcomepage;

    //VARIABLE FOR MAINMENU PAGE//
    int mainmenu;

    //VARIABLE FOR LINEAR ARRAY PAGE//
     int arr[100], tot, i, num, arrTemp[50], j=0, chk=0;

    do
    {
    SetConsoleTextAttribute(h,13);
    std:: cout << "                                          Press 0 to EXIT, and  "<<"1 for MAIN MENU."<<endl;
    SetConsoleTextAttribute(h,14);
cout << "           ************************************************************************************************************\n" << endl;

    std:: cin >> welcomepage;

     switch (welcomepage)
    {
    case 0:
        std:: cout << "Thank you for using this APP!!" <<endl;
        return 0;
    case 1:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;

        do{

cout << "           ************************************************************************************************************" << endl;
cout << "           ************************************************************************************************************\n" << endl;
cout << "                                               MAIN MENU\n" << endl;
cout << "           ************************************************************************************************************\n\n" << endl;
cout << "           1=> LINEAR ARRAY (SEARCH) \n" << endl;
cout << "           2=> QUEUES \n" << endl;
cout << "           3=> STACKS \n" << endl;
cout << "           4=> LINKED LIST \n" << endl;
cout << "           5=> TREES \n" << endl;
cout << "           6=> GRAPHS \n" << endl;
cout << "           7=> GAMES \n" << endl;
cout << "           8=> ABOUT DATA STRUCTURE \n\n\n" << endl;
SetConsoleTextAttribute(h,13);
    std:: cout << "                                          Press 0 to EXIT"<<endl;
    SetConsoleTextAttribute(h,14);
cout << "           ************************************************************************************************************\n" << endl;

    std:: cin >> mainmenu;

     switch (mainmenu)
    {
    case 0:
        std:: cout << "\n\nThank you for using this APP!!" <<endl;
        return 0;

//LINEAR ARRAY//
    case 1:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;


    cout<<"Enter the Size for Array Size: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter the Number to Search: ";
    cin>>num;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==num)
        {
            arrTemp[j] = i;
            j++;
            chk++;
        }
    }
    if(chk>0)
    {
        cout<<"\nNumber Found at Index No. ";
        tot = chk;
        for(i=0; i<tot; i++)
            cout<<arrTemp[i]<<" ";
    }
    else
        cout<<"\nNumber doesn't Found!";
    cout<<endl;

    std:: cout << "                                          Press 0 to EXIT, and  "<<"1 for MAIN MENU."<<endl;
    SetConsoleTextAttribute(h,14);
    cout << "           ************************************************************************************************************\n" << endl;

    std:: cin >> mainmenu;
     switch (mainmenu)
    {
    case 0:
        std:: cout << "\n\nThank you for using this APP!!" <<endl;
        return 0;
    case 1:
        system("cls");
    }
    break;
    while(mainmenu !=0);
//END OF LINEAR ARRAY//

    case 2:
        std:: cout << "\n\nThank you for using this APP!!" <<endl;
        std:: cin >> mainmenu;
    case 3:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;
    std:: cin >> mainmenu;
    case 4:
        std:: cout << "\n\nThank you for using this APP!!" <<endl;
        std:: cin >> mainmenu;
    case 5:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;
    std:: cin >> mainmenu;

    case 6:
        std:: cout << "\n\nThank you for using this APP!!" <<endl;
        std:: cin >> mainmenu;
    case 7:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;
    std:: cin >> mainmenu;
     case 8:
        system("cls");
        std:: cout << "You have chosen Start" <<endl;
    std:: cin >> mainmenu;
    }
    break;

    }
while (mainmenu !=0);
    }
    }

while (welcomepage !=0);



    return 0;

    }


