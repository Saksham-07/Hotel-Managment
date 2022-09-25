#include <iostream>
#include<stdlib.h>
using namespace std;

int Menu();

int Book()
{
    int a = 0, n = 0, m = 0, c = 0;
    static int ar1 = 8, ar2 = 8, ar3 = 8;
    static int nr1 = 8, nr2 = 8, nr3 = 8;
    cout << "Welcome to our hotel\n"
         << endl;
    cout << "There are AC room and Non AC room available\n"
         << endl;
    do
    {
        cout << "Select which room you want\n " << endl;
        cout << "1)For AC room" << endl;
        cout << "2)For Non AC room " << endl;
        cout << "3)To exit the menu" << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "You have chosen AC room\n"
                 << endl;
            cout << "The Price for the AC room varies between 5000 to 12000 rupees a night\n"
                 << endl;
            do
            {
                cout << "There are 3 type of AC rooms\n"
                     << endl;
                cout << "1)One bedroom set" << endl;
                cout << "2)Two bedroom set" << endl;
                cout << "3)Three bedroom set" << endl;
                cout << "4)Return to menu\n"
                     << endl;
                cout << "Choose the type of room you want" << endl;
                cin >> n;
                if (n == 1)
                {
                    cout << "You Have Chosen One Bedroom Set With AC\n " << endl;
                    cout << "Price for this room is 5000 rupees a night\n"
                         << endl;
                    cout << "There are " << ar1 << " room available" << endl;
                    if (ar1 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            ar1--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    }
                }
                else if (n == 2)
                {
                    cout << "You Have Chosen Two Bedroom Set With AC\n " << endl;
                    cout << "Price for this room is 9000 rupees a night\n"
                         << endl;
                    cout << "There are " << ar2 << " room available" << endl;
                    if (ar2 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            ar2--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    }
                }
                else if (n == 3)
                {
                    cout << "You Have Chosen Three Bedroom Set With AC\n " << endl;
                    cout << "Price for this room is 12000 rupees a night\n"
                         << endl;
                    cout << "There are " << ar3 << " room available" << endl;
                    if (ar3 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            ar3--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    }
                }
                else if (n == 4)
                {
                    cout << "Going back to menu" << endl;
                    Book();
                    break;
                }
                else
                {
                    cout << "Enter a valid option" << endl;
                }
            } while (n != 0 && n != 1 && n != 2 && n != 3 && n != 4);
        }
        else if (a == 2)
        {
            cout << "You have chosen Non AC room\n"
                 << endl;
            cout << "The Price for the AC room varies between 3000 to 8000 rupees a night\n"
                 << endl;
            cout << "There are 3 type of Non AC rooms\n"
                 << endl;
            do
            {
                cout << "1)One bedroom set" << endl;
                cout << "2)Two bedroom set" << endl;
                cout << "3)Three bedroom set" << endl;
                cout << "4)Return to menu\n"
                     << endl;
                cout << "Choose the type of room you want" << endl;
                cin >> m;
                if (m == 1)
                {
                    cout << "You Have Chosen One Bedroom Set Without AC\n " << endl;
                    cout << "Price for this room is 3000 rupees a night\n"
                         << endl;
                    cout << "There are " << nr1 << " room available" << endl;
                    if (nr1 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            nr1--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    }
                }
                else if (m == 2)
                {
                    cout << "You Have Chosen Two Bedroom Set Without AC\n " << endl;
                    cout << "Price for this room is 6000 rupees a night\n"
                         << endl;
                    cout << "There are " << nr2 << " room available" << endl;
                    if (nr2 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            nr2--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    }
                }
                else if (m == 3)
                {
                    cout << "You Have Chosen Three Bedroom Set Without AC\n " << endl;
                    cout << "Price for this room is 8000 rupees a night\n"
                         << endl;
                    cout << "There are " << nr3 << " room available" << endl;
                    if (nr3 > 0)
                    {
                        cout << "To confirm press 1 to go back to menu press any other number" << endl;
                        cin >> c;
                        if (c == 1)
                        {
                            cout << "Thank you for confirming\nYour bill is 5000 rupees" << endl;
                            cout << "Returning back to menu\n"
                                 << endl;
                            nr3--;
                            Menu();
                            break;
                        }
                        else
                        {
                            Book();
                            break;
                        }
                    }
                    else
                    {
                        cout << "No Room available at this time\n"
                             << endl;
                        Book();
                        break;
                    };
                }
                else if (m == 4)
                {
                    cout << "Going back to main menu" << endl;
                    Book();
                    break;
                }
                else
                {
                    cout << "Enter a valid option" << endl;
                }
            } while (n != 0 && n != 1 && n != 2 && n != 3 && n != 4);
        }
        else if (a == 3)
        {
            cout << "Thank you,Have a nice day\n"
                 << endl;
            Menu();
        }
        else
        {
            cout << "Enter a valid input" << endl;
            cout << "\n";
        }
    } while (a != 0 && a != 1 && a != 2 && a != 3);
}

int Food()
{
    int f = 0, i = 0;
    int q, z;
    cout << "Welcome to the food section,Hope you are having a great day\n"
         << endl;
    cout << "Choose what you wana eat\n"
         << endl;
    cout << "1)Indian" << endl;
    cout << "2)Chinese" << endl;
    cout << "3)American" << endl;
    cout << "4)Snacks" << endl;
    cout << "5)Dessert" << endl;
    cout << "6)Return to menu\n"
         << endl;
    cin >> f;
    switch (f)
    {
    case 1:
        cout << "You have selected Indian\n"
             << endl;
        cout << "Choose which dish you want to eat\n"
             << endl;
        do
        {
            cout << "1)Rajma Chaval" << endl;
            cout << "2)Chole Chaval" << endl;
            cout << "3)Veg Biryani" << endl;
            cout << "4)Paneer Butter Masala With Naan" << endl;
            cout << "5)Idli Dosa Sambar" << endl;
            cout << "6)Litti Chokha" << endl;
            cout << "7)Back to menu\n"
                 << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "You have chosen Rajma Chaval" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Rajma Chaval" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1" << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 2:
                cout << "You have chosen Chole Chaval" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Chole Chaval" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 3:
                cout << "You have chosen Veg biryani" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Veg Biryani" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 4:
                cout << "You have chosen Paneer Butter Masala With Naan" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Paneer Butter Masala With Naan" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 5:
                cout << "You have chosen Idli Dosa Sambar" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Idli Dosa Sambar" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 6:
                cout << "You have chosen Litti Chokha" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Litti Chokha" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 7:
                cout << "Going back to menu" << endl;
                Food();
                break;
            default:
                cout << "Not  a valid input\n"
                     << endl;
                break;
                exit;
            }
        } while (i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6 && i != 7);
        break;
    case 2:
        cout << "You have selected Chinese\n"
             << endl;
        cout << "Choose which dish you want to eat\n"
             << endl;
        do
        {
            cout << "1)Instant Noodles" << endl;
            cout << "2)Chicken with Chestnuts" << endl;
            cout << "3)Fried Tofu and Rice" << endl;
            cout << "4)Szechwan Chilli Chicken" << endl;
            cout << "5)Back to menu\n"
                 << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "You have chosen Instant Noodles" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Instant Noodles" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 2:
                cout << "You have chosen Chicken with chestnuts" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Chicken with chestnuts" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 3:
                cout << "You have chosen Fried Tofu and Rice" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Fried Tofu and Rice" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 4:
                cout << "You have chosen Szechwan Chilli Chicken" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Szechwan Chilli Chicken" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 5:
                cout << "Going back to menu\n"
                     << endl;
                Food();
                break;
            default:
                cout << "Not  a valid input\n"
                     << endl;
                break;
            }
        } while (i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5);
        break;
    case 3:
        cout << "You have selected American\n"
             << endl;
        cout << "Choose which dish you want to eat\n"
             << endl;
        do
        {
            cout << "1)Mashed Potato" << endl;
            cout << "2)Ham Burger" << endl;
            cout << "3)Mac and Cheese" << endl;
            cout << "4)Chicken and Waffels" << endl;
            cout << "5)Back to menu\n"
                 << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "You have chosen Mashed Potato" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Mashed Potato" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 2:
                cout << "You have chosen Ham Burger" << endl;
                cout << "How many do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Ham Burger" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 3:
                cout << "You have chosen Mac and cheese" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Mac and cheese" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 4:
                cout << "You have chosen Chicken and waffles" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Chicken and waffles" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 5:
                cout << "Going back to menu" << endl;
                Food();
                break;
            default:
                cout << "Not  a valid input\n"
                     << endl;
                break;
            }
        } while (i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5);
        break;
    case 4:
        cout << "You have selected Snackes\n"
             << endl;
        cout << "Choose which Snackes you want to eat\n"
             << endl;
        do
        {
            cout << "1)Cookies" << endl;
            cout << "2)Tea with matthi" << endl;
            cout << "3)Samose" << endl;
            cout << "4)Fries" << endl;
            cout << "5)Chilli Potato" << endl;
            cout << "6)Back to menu\n"
                 << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "You have chosen Cookies" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 2:
                cout << "You have chosen Tea with Matthi" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 3:
                cout << "You have chosen Samose" << endl;
                cout << "How many Samose do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Samose" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 4:
                cout << "You have chosen Fries" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 5:
                cout << "You have chosen Chilli Potato" << endl;
                cout << "How many plate do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " plates of Chilli Potato" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 6:
                cout << "Going back to menu" << endl;
                Food();
                break;
            default:
                cout << "Not  a valid input\n"
                     << endl;
                break;
            }
        } while (i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6);
        break;
    case 5:
        cout << "You have selected desert\n"
             << endl;
        cout << "Choose which desert you want to eat\n"
             << endl;
        do
        {
            cout << "1)Rasmalai" << endl;
            cout << "2)Rasgulle" << endl;
            cout << "3)Apple Pie" << endl;
            cout << "4)Pudding" << endl;
            cout << "5)Red Bean Bun" << endl;
            cout << "6)Back to menu\n"
                 << endl;
            cin >> i;
            switch (i)
            {
            case 1:
                cout << "You have chosen Rasmalai" << endl;
                cout << "Enter the quantity you want" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Rasmalais" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                    Menu();
                {
                    break;
                }
                break;
            case 2:
                cout << "You have chosen Rasgulla" << endl;
                cout << "Enter the quantity you want" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Rasgullas" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 3:
                cout << "You have chosen Apple Pie" << endl;
                cout << "How many Apple Pie do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Aplle pie" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 4:
                cout << "You have chosen Pudding" << endl;
                cout << "Enter the quantity you want" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Pudding" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 5:
                cout << "You have chosen Red Bean Bun" << endl;
                cout << "How many do you want to order" << endl;
                cin >> q;
                cout << "You ordered: " << q << " Red Bead Bun" << endl;
                cout << "Thank you.\nYour order Will be sent to you shortly" << endl;
                cout << "If you want to order again press 1 else press any number exept 1\n"
                     << endl;
                cin >> z;
                if (z == 1)
                {
                    Food();
                    break;
                }
                else
                {
                    Menu();
                    break;
                }
                break;
            case 6:
                cout << "Going back to menu" << endl;
                Food();
                break;
            default:
                cout << "Invalid input\n"
                     << endl;
            }
        } while (i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6);
        break;
    case 6:
        cout << "Exiting the Food menu" << endl;
        Menu();
        break;
    default:
        cout << "Wrong input\n"
             << endl;
        Food();
    }
}

int Inquiry()
{
    int in, s = 0, d;
    cout << "This is the inquiry menu\n"
         << endl;
    cout << "Select what you want to know\n"
         << endl;
    do
    {
        cout << "1)For knowing the Price of Diffrent Rooms: " << endl;
        cout << "2)For Knowing the Price of diffrent dishes: " << endl;
        cout << "3)For any complaint" << endl;
        cout << "4)To know about all acceccible place near the hotel" << endl;
        cout << "5)For any other issue" << endl;
        cout << "6)Showing All Menu" << endl;
        cout << "7)Returning to the Menu" << endl;
        cin >> in;
        switch (in)
        {
        case 1:
            cout << "You have choose to know Price of all Rooms\n"
                 << endl;
            cout << "Choose which Rooms price you want to see\n"
                 << endl;
            do
            {
                cout << "1)One bedroom set with AC and without AC" << endl;
                cout << "2)Two bedroom set with AC and without AC" << endl;
                cout << "3)Three bedroom set with AC and without AC" << endl;
                cout << "4)Back to menu" << endl;
                cin >> s;
                switch (s)
                {
                case 1:
                    cout << "Price for one bedroom set with AC is 5000 rupees per night" << endl;
                    cout << "Price for one bedroom set without AC is 3000 rupees per night" << endl;
                    cout << "Want to check price of other rooms then press 1 otherwise press any number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                    break;
                case 2:
                    cout << "Price for two bedroom set with AC is 9000 rupees per night" << endl;
                    cout << "Price for two bedroom set without AC is 6000 rupees per night" << endl;
                    cout << "Want to check price of other rooms then press 1 otherwise press any number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                    break;
                case 3:
                    cout << "Price for three bedroom set with AC is 12000 rupees per night" << endl;
                    cout << "Price for three bedroom set without AC is 8000 rupees per night" << endl;
                    cout << "Want to check price of other rooms then press 1 otherwise press any number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                    break;
                case 4:
                    cout << "Returning back to menu!!!" << endl;
                    Inquiry();
                    break;
                default:
                    cout << "Invalid input \n"
                         << endl;
                    break;
                }
            } while (s != 0 && s != 1 && s != 2 && s != 3 && s != 4);
            break;
        case 2:
            cout << "You have choose to know price of Foods\n"
                 << endl;
            cout << "Select from which section you want to know the price of the food\n"
                 << endl;
            do
            {
                cout << "1)Indian" << endl;
                cout << "2)Chinese" << endl;
                cout << "3)American" << endl;
                cout << "4)Snacks" << endl;
                cout << "5)Dessert" << endl;
                cout << "6)Return to menu\n"
                     << endl;
                cin >> s;

                switch (s)
                {
                case 1:
                    cout << "Showing Price of All Indian foods\n"
                         << endl;
                    cout << "1)Rajma Chaval = 120 rupee per plate" << endl;
                    cout << "2)Chole Chaval = 130 rupee per plate" << endl;
                    cout << "3)Veg Biryani = 100 rupee per plate" << endl;
                    cout << "4)Paneer Butter Masala With Naan = 200 rupee per plate" << endl;
                    cout << "5)Idli Dosa Sambar = 180 rupee per plate" << endl;
                    cout << "6)Litti Chokha = 100 rupee per plate" << endl;
                    cout << "If you want to Check price of other Foods press 1\nTo order some Food press 2\nTo exit press any other number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else if (d == 2)
                    {
                        Food();
                        break;
                    }

                    else
                    {
                        cout << "Exiting Inquiry Menu" << endl;
                        Menu();
                    }
                    break;
                case 2:
                    cout << "Showing Price of all Chinese food\n"
                         << endl;
                    cout << "1)Instant Noodles = 110 rupee per plate" << endl;
                    cout << "2)Chicken with Chestnuts = 220 rupee per plate" << endl;
                    cout << "3)Fried Tofu and Rice = 130 rupee per plate" << endl;
                    cout << "4)Szechwan Chilli Chicken = 180 per plate" << endl;
                    cout << "If you want to Check price of other Foods press 1\nTo order some Food press 2\nTo exit press any other number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else if (d == 2)
                    {
                        Food();
                        break;
                    }

                    else
                    {
                        cout << "Exiting Inquiry Menu" << endl;
                        Menu();
                    }
                    break;
                case 3:
                    cout << "Showing Price of all American Food\n"
                         << endl;
                    cout << "1)Mashed Potato = 80 per plate" << endl;
                    cout << "2)Ham Burger = 150 each" << endl;
                    cout << "3)Mac and Cheese = 120 per plate" << endl;
                    cout << "4)Chicken and Waffels = 190 per plate" << endl;
                    cout << "If you want to Check price of other Foods press 1\nTo order some Food press 2\nTo exit press any other number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else if (d == 2)
                    {
                        Food();
                        break;
                    }

                    else
                    {
                        cout << "Exiting Inquiry Menu" << endl;
                        Menu();
                    }
                    break;
                case 4:
                    cout << "Showing Price of all Snacks\n"
                         << endl;
                    cout << "1)Cookies = 20 rupee per piece" << endl;
                    cout << "2)Tea with matthi = 20 rupee each" << endl;
                    cout << "3)Samose = 15 rupee each" << endl;
                    cout << "4)Fries = 50 for 100 grams" << endl;
                    cout << "5)Chilli Potato = 100 per plate" << endl;
                    cout << "If you want to Check price of other Foods press 1\nTo order some Food press 2\nTo exit press any other number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else if (d == 2)
                    {
                        Food();
                        break;
                    }

                    else
                    {
                        cout << "Exiting Inquiry Menu" << endl;
                        Menu();
                    }
                    break;
                case 5:
                    cout << "Showing Price of all Desserts\n"
                         << endl;
                    cout << "1)Rasmalai = 50 per piece" << endl;
                    cout << "2)Rasgulle = 40 per piece" << endl;
                    cout << "3)Apple Pie = 100 each" << endl;
                    cout << "4)Pudding = 50 each" << endl;
                    cout << "5)Red Bean Bun = 80 each" << endl;
                    cout << "If you want to Check price of other Foods press 1\nTo order some Food press 2\nTo exit press any other number" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else if (d == 2)
                    {
                        Food();
                        break;
                    }

                    else
                    {
                        cout << "Exiting Inquiry Menu" << endl;
                        Menu();
                    }
                    break;
                case 6:
                    cout << "Returning to the menu" << endl;
                    Inquiry();
                    break;
                default:
                    cout << "Invalid input\n"
                         << endl;
                    break;
                }
            } while (s != 0 && s != 1 && s != 2 && s != 3 && s != 4 && s != 5 && s != 6);
            break;
        case 3:
            cout << "You can select what type or complaint you have here\n"
                 << endl;
            cout << "We will make sure your complaint will be shorted soon\n"
                 << endl;
            do
            {
                cout << "1)Water not available in bathroom" << endl;
                cout << "2)AC not working" << endl;
                cout << "3)Food not delivered yet" << endl;
                cout << "4)Room is very untidy" << endl;
                cout << "5)There are Insects or Rats in the Room" << endl;
                cout << "6)Neighbour is making to much noise" << endl;
                cin >> s;
                switch (s)
                {
                case 1:
                    cout << "The tubewell of water is haveing an issue thats why there will be no water in the taps for 1 hour." << endl;
                    cout << "You can use the water stored in the tanks of hotel" << endl;
                    cout << "Sorry for your inconvinience" << endl;
                    cout << "To return to menu press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        cout << "Returning to Inquiry Menu!!" << endl;
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                    }
                    break;
                case 2:
                    cout << "The technician will be there shortly,plese wiat paitently" << endl;
                    cout << "Sorry for your inconvinience\n"
                         << endl;
                    cout << "Returning to Inquiry Menu\n"
                         << endl;
                    Inquiry();
                    break;
                case 3:
                    cout << "There is a large no of order at this time" << endl;
                    cout << "So all the delivery mans are busy at delivering food" << endl;
                    cout << "You can wait or can take it from our counter on ground floor at cafeteria\n"
                         << endl;
                    cout << "Sorry for your inconvinience\n"
                         << endl;
                    cout << "Returning to Inquiry Menu\n"
                         << endl;
                    Inquiry();
                    break;
                case 4:
                    cout << "Our cleaning team must have forgot your room by mistake" << endl;
                    cout << "We are sending the cleaning team to your room right now" << endl;
                    cout << "Sorry for your inconvinience\n"
                         << endl;
                    cout << "Returning to Inquiry Menu\n"
                         << endl;
                    Inquiry();
                    break;
                case 5:
                    cout << "We sending our Pest Control team right now" << endl;
                    cout << "Till then you can stay at our guest room if you want" << endl;
                    cout << "Sorry for your inconvinence\n"
                         << endl;
                    cout << "Returning to Inquiry Menu\n"
                         << endl;
                    Inquiry();
                    break;
                case 6:
                    cout << "Returning to the Inquiry Menu" << endl;
                    Inquiry();
                    break;
                default:
                    cout << "Invalid input" << endl;
                    break;
                }
            } while (s != 0 && s != 1 && s != 2 && s != 3 && s != 4 && s != 5 && s != 6);
            break;
        case 4:
            cout << "For which think are you looking at" << endl;
            do
            {
                cout << "1)Hospital" << endl;
                cout << "2)School" << endl;
                cout << "3)University" << endl;
                cout << "4)Supermarket" << endl;
                cout << "5)Mall" << endl;
                cout << "6)Car and Bike repair shop" << endl;
                cout << "7)Return to menu" << endl;
                cin >> s;
                switch (s)
                {
                case 1:
                    cout << "There are 3 Hospitals in 2 KM radius of our hotel" << endl;
                    cout << "Sarvodya Hospital -- 200 Meter west of the hotel" << endl;
                    cout << "Asian Horpital -- 1 KM South of the hotel" << endl;
                    cout << "Metro Hospital -- 1.6 KM North West of the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 2:
                    cout << "There are 4 schools in 5 KM radius of our hotel" << endl;
                    cout << "Aggarwal Public School -- 500 meter straigt from the hotels front gate" << endl;
                    cout << "Modern Vidya Niketan -- 1200 meter from the hotels back gate" << endl;
                    cout << "Tagore Public School -- 3000 meter West from the hotel" << endl;
                    cout << "Delhi Public School -- 3500 meter North-East from the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 3:
                    cout << "There are 2 University in 10 KM radius of our hotel" << endl;
                    cout << "JC Bose University -- 7.6 KM North of the hotel" << endl;
                    cout << "Maharshi Dayanand University -- 10 KM East of the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 4:
                    cout << "There is 3 differnt type of Supermarket near by" << endl;
                    cout << "Grosary Market -- 300 meter North of the hotel" << endl;
                    cout << "Non veg item Market -- 500 meter North West of the hotel" << endl;
                    cout << "Electronics or Automobile Market -- 600 meter South of the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 5:
                    cout << "There are 2 Mall near the hotel" << endl;
                    cout << "Crown Plaza -- 12 KM from the hotel" << endl;
                    cout << "SRS Mall -- 15 KM from the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 6:
                    cout << "There is a big area where only bike and cars get repaired which is 300 meter to the east of the hotel" << endl;
                    cout << "If you want to know more information press 1" << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        Inquiry();
                        break;
                    }
                    else
                    {
                        Menu();
                        break;
                    }
                case 7:
                    cout << "Returning to Inquiry section" << endl;
                    Inquiry();
                    break;
                default:
                    break;
                }
            } while (s != 0 && s != 1 && s != 2 && s != 3 && s != 4 && s != 5 && s != 6 && s != 7);
            break;
        case 5:
            cout << "If you have any other problem or inquiry you can call to our hotels reseption phone number : 23456543" << endl;
            cout << "Thank you" << endl;
            cout << "Returning to inquiry\n"
                 << endl;
            Inquiry();
            break;

        case 6:
            cout << "\nSelect Where you want to go" << endl;
            do
            {
                cout << "1)Book a Room" << endl;
                cout << "2)Order Food" << endl;
                cout << "3)For any inquiry" << endl;
                cin >> s;
                switch (s)
                {
                case 1:
                    cout << "\nDirecting you to Room booking menu\n"
                         << endl;
                    Book();
                    break;
                case 2:
                    cout << "\nDirecting you to Food ordering menu\n"
                         << endl;
                    Food();
                    break;
                case 3:
                    cout << "\nDirecting you to inquiry swction\n"
                         << endl;
                    Inquiry();
                    break;
                default:
                    cout << "Wrong input\n"
                         << endl;
                }
            } while (s != 0 && s != 1 && s != 2 && s != 3);
            break;
        case 7:
            cout << "Returning to the Menu" << endl;
            Menu();
            break;
        default:
        {
            cout << "Invalid Option\n"
                 << endl;
        }
        }
    } while (in != 0 && in != 1 && in != 2 && in != 3 && in != 4 && in != 5 && in != 6 && in != 7);
}

int Menu()
{
    int s = 0;
    cout << "WELCOME TO HOTEL TAJ!!\n"
         << endl;
    cout << "THIS IS THE MENU SECTION!!\n"
         << endl;
    do
    {
        cout << "SELECT YOUR CHOICE" << endl;
        cout << "1)BOOK A ROOM" << endl;
        cout << "2)ORDER SOME FOOD" << endl;
        cout << "3)INQUIRY" << endl;
        cin >> s;
        if (s == 1)
        {
            cout << "Directing you to Room Booking menu" << endl;
            Book();
        }
        else if (s == 2)
        {
            cout << "Directing you to Food Ordering Section" << endl;
            Food();
        }
        else if (s == 3)
        {
            cout << "Directing you to Inquiry Section" << endl;
            Inquiry();
        }

        else if (s == 4)
        {
            cout << "Exiting" << endl;
            break;
        }

        else
        {
            cout << "Invalid option\n"
                 << endl;
        }
    } while (s != 0 && s != 1 && s != 2 && s != 3);
}

int main()
{
    Menu();
    return 0;
}