#include <iostream>
#include <cstring>
using namespace std;
class menu
{
private:
    int hotdrinks;
    int coldDrinks;
    int desert;
    float price;
    int coctails;
public:
    float getPrice()
    {
        return price;
    }
    void setPrice(float p)
    {
        price = p;
    }
    int getHotdrinks()
    {
        return hotdrinks;
    }
    int getColdDrinks()
    {
        return coldDrinks;
    }
    int getDesert()
    {
        return desert;
    }
    int getcoctails()
    {
        return coctails;
    }
    void setHotDrinks()
    {
        int n;
        string a;
        char another;
        cout << "What kind of hot drink do you want" << endl;
        cout << "1.Tea $4.5" << endl;
        cout << "2.Coffe $3" << endl;
        cout << "3.Hot chocolate $5.6" << endl;
        cin >> a;
        if (a == "1" || a == "tea")
        {
            cout << "You choose tea, how many do you want?" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == "2" || a == "coffe")
        {
            cout << "You choose coffe, how many do you want?" << endl;
            cin >> n;
            price = price + 3*n;

        }
        else
        if (a == "3" || a == "hot chocolate")
        {
            cout << "You choose hot chocolate, how many do you want?" << endl;
            cin >> n;

            price = price + 5.6*n;
        }
        else
            cout << "You didnt choose any product in this category" << endl;
        cout << "Do you want something else from this category Y/N" << endl;
        cin >> another;
        if (another == 'Y')
        {
            setHotDrinks();
        }
    }
    void setColdDrinks()
    {

        char another;
        string a;
        int n;
        cout << "What kind of cold drinks do you want" << endl;
        cout << "1.Coca Cola $4.5" << endl;
        cout << "2.Fanta $4.5" << endl;
        cout << "3.Sprite $4.5" << endl;
        cout << "4.Apple juice $5.2" << endl;
        cout << "5.Orange juice $5.4" << endl;
        cin >> a;
        if (a == "1" || a == "cocacola")
        {
            cout << "You choose Coca-Cola how many do you want" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == "2" || a == "fanta")
        {

            cout << "You choose Fanta how many do you want" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == "3" || a == "sprite")
        {
            cout << "You choose Sprite how many do you want" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == "4" || "applejuice")
        {
            cout << "You choose Apple juice how many do you want" << endl;
            cin >> n;
            price = price + 5.2 * n;
        }
        else
        if (a == "5" || "orangejuice")
        {
            cout << "You choose Orange juice how many do you want" << endl;
            cin >> n;
            price = price + 5.4 * n;
        }
        else
            cout << "Do you want something else from this category Y/N" << endl;
        cout << "Do you want something else from this category Y/N" << endl;
        cin >> another;
        if (another == 'Y' || another == 'y')
        {
            setColdDrinks();
        }

    }
    void setDesert()
    {
        int n;
        char another;
        string a;
        cout << "What kind of cake do you want" << endl;
        cout << "1.Cheese Cake $8.5$" << endl;
        cout << "2.Chocolate Cake $8.3$" << endl;
        cout << "3.Panacota $9" << endl;
        cin >> a;
        if (a == "1" || a == "cheesecake")
        {
            cout << "You choose Cheese Cake how many do you want" << endl;
            cin >> n;
            price = price + 8.5 * n;
        }
        else
        if (a == "2" || a == "chocolatecake")
        {
            cout <<  "You choose Chocolate Cake how many do you want" << endl;
            cin >> n;
            price = price + 8.3 * n;
        }
        else
        if (a == "3" || a == "panacota")
        {
            cout << "You choose Panacota how many do you want" << endl;
            cin >> n;
            price = price + 9 * n;
        }
        cout << "Do you want something else from this category Y/N" << endl;

        cin >> another;
        if (another == 'Y' || another == 'y')
        {
            setDesert();
        }
    }
    void setcoctails()
    {
        int n;
        char another;
        string a;
        cout << "What kind of cocktail do you want" << endl;
        cout << "1.Mojito mocktail  $12.7" << endl;
        cout << "2.Summer cup mocktail $14.5" << endl;
        cout << "3.New York sour mocktail $13.8" << endl;
        cin >> a;
        if (a == "1" || a == "mojito")
        {
            cout << "You choose Mojito mocktail, how many of them do you want" << endl;
            cin >> n;
            price = price + 12.7 * n;
        }
        else
        if (a == "2" || a == "summercup")
        {
            cout << "You choose Summer cup mocktail, how many of them do you want" << endl;
            cin >> n;
            price = price + 14.5 * n;
        }
        else
        if (a == "3" || a == "newyork")
        {
            cout << "You New York sour mocktail, how many of them do you want" << endl;
            cin >> n;
            price = price + 13.8 * n;
        }
        cout << "Do you want something else from this category Y/N" << endl;

        cin >> another;
        if (another == 'Y' || another == 'y')
        {
            setcoctails();
        }
    }

    void input()
    {
        price = 0;
        int a;
        char c;
        cout << "What do you want to order" << endl;
        cout << "1.Cold drinks" << endl;
        cout << "2.Hot Drinks" << endl;
        cout << "3.Desert" << endl;
        cout << "4.Cocktail" << endl;
        cin >> a;
        if (a == 1)
        {
            setColdDrinks();
        }
        else
        if (a == 2)
        {
            setHotDrinks();
        }
        else
        if (a == 3)
        {
            setDesert();
        }
        else
        if (a == 4)
        {
            setcoctails();
        }
        cout << "-------------------------------\n\n";
        cout << "Do you want something else from another category Y/N" << endl;
        cin >> c;
        while (c == 'Y' || c == 'y')
        {
            cout << "From what category?" << endl;
            cout << "1.Cold Drinks" << endl;
            cout << "2.Hot Drinks" << endl;
            cout << "3.Desert" << endl;
            cout << "4.Cocktail" << endl;
            cin >> a;
            if (a == 1)
            {
                setColdDrinks();
            }
            else
            if (a == 2)
            {
                setHotDrinks();
            }
            else
            if (a == 3)
            {
                setDesert();
            }
            else
            if (a == 4)
            {
                setcoctails();
            }
            cout << "Do you want something else from another category Y/N" << endl;
            cin >> c;
            cout << "-------------------------------\n\n";
        }

    }
    void print();
};
class choose :public menu
{
private:
    char *admin;
    string waiter;
    int Chose;
    float total =0.0;
    int nrTables;
public:
    choose(char *a, string w, int c, float t, int n)
    {
        int nlen = strlen(a);
        admin = new char[nlen + 1];
        for (int i = 0; i < nlen; i++)
        {
            admin[i] = a[i];
        }
        admin[nlen] = '\0';
        waiter = w;
        Chose = c;
        total = t;
        nrTables=n;
    }
    int getnrTables()
    {
        return nrTables;
    }
    float getTotal()
    {
        return total;
    }
    int getChose()
    {
        return Chose;
    }
    char *getAdmin()
    {
        return admin;
    }
    string getWaiter()
    {
        return waiter;
    }
    void setChose()
    {
        int c;
        cout << "1.Waiter" << endl;
        cout << "2.Admin" << endl;
        cout << "3.Exit" << endl;
        cin >> c;

        if (c == 1)
            setWaiter();
        else
        if (c == 2)
            setAdmin();
        else
        if (c == 3)
            exit(0);
    }
    void setTotal()
    {
        total=total+getPrice();
    }
    void setnrTables()
    {
        nrTables= nrTables+getnrTables();
    }
    void setAdmin()
    {
        string p;
        cout << "ADMIN" << endl;
        cout << "Enter password: ";
        cin >> p;
        if (p == "Admin")
        {
            cout << "Profit for today is: $" << getTotal() << endl;
            cout << getnrTables() << " tables were served" << endl;
        }
        else
        {
            cout << "You are not admin" << endl;
        }
        setChose();
    }
    void setWaiter()
    {
        char c;
        cout << "----MENU----" << endl;
        input();
        setTotal();
        nrTables=1;
        print();
        cout << "-------------------------------\n\n";
        cout << "Do you want to serve another table" << endl;
        cin >> c;

        while (c == 'Y' || c == 'y')
        {
            setnrTables();
            input();
            setTotal();
            print();
            cout << "Do you want to serve another table" << endl;
            cin >> c;
            cout << "-------------------------------\n\n";
        }
        setChose();
    }
};
void menu::print()
{
    cout << "Bill: $" << price << endl;
    cout << "You are welcome \n" << endl;
    cout << "---------------------------\n" << endl;
}
int main()
{
    choose a("","", 0.0 ,0, 0);
    a.setChose();
    a.setWaiter();
    a.setAdmin();
    return 0;
}

