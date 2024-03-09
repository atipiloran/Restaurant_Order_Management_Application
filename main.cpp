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
        int a;
        int n;
        cout << "Cfare pije deshironi" << endl;
        cout << "1.Coca Cola $4.5" << endl;
        cout << "2.Fanta $4.5" << endl;
        cout << "3.Sprite $4.5" << endl;
        cout << "4.Apple juice $5.2" << endl;
        cout << "5.Orange juice $5.4" << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "Ti zgjdodhe Coca cola, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == 2)
        {

            cout << "Ti zgjdodhe Fanta, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == 3)
        {
            cout << "Ti zgjdodhe Sprite, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 4.5*n;
        }
        else
        if (a == 4)
        {
            cout << "Ti zgjdodhe apple juice, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 5.2 * n;
        }
        else
        if (a == 5)
        {
            cout << "Ti zgjdodhe orange juice, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 5.4 * n;
        }
        else
            cout << "Ti nuk zgjodhe produkt nga kjo kategori" << endl;
        cout << "Deshironi dicka tjeter nga kjo kategori? Y/N" << endl;
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
        int a;
        cout << "Cfare torte deshironi" << endl;
        cout << "1.Cheese Cake $8.5$" << endl;
        cout << "2.Chocolate Cake $8.3$" << endl;
        cout << "3.Panacota $9" << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "Ti zgjdodhe Cheese Cake, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 8.5 * n;
        }
        else
        if (a == 2)
        {
            cout << "Ti zgjdodhe Chocolate Cake, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 8.3 * n;
        }
        else
        if (a == 3)
        {
            cout << "Ti zgjdodhe Panacota, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 9 * n;
        }
        cout << "Deshironi dicka tjeter nga kjo kategori? Y/N" << endl;

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
        int a;
        cout << "Cfare Koktell deshironi" << endl;
        cout << "1.Mojito mocktail  $12.7" << endl;
        cout << "2.Summer cup mocktail $14.5" << endl;
        cout << "3.New York sour mocktail $13.8" << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "Ti zgjdodhe Mojito mocktail, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 12.7 * n;
        }
        else
        if (a == 2)
        {
            cout << "Ti zgjdodhe Summer cup mocktail, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 14.5 * n;
        }
        else
        if (a == 3)
        {
            cout << "Ti zgjdodhe New York sour mocktail, sa te tilla deshironi" << endl;
            cin >> n;
            price = price + 13.8 * n;
        }
        cout << "Deshironi dicka tjeter nga kjo kategori? Y/N" << endl;

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
        cout << "Cfare deshironi te porosisni" << endl;
        cout << "1.Pije te ftohta" << endl;
        cout << "2.Pije te nxehta" << endl;
        cout << "3.Desert" << endl;
        cout << "4.Koktel" << endl;
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
        cout << "Deshironi dicka nga nje kategori tjeter? Y/N" << endl;
        cin >> c;
        while (c == 'Y' || c == 'y')
        {
            cout << "Produkt te ciles kategori?" << endl;
            cout << "1.Pije te ftohta" << endl;
            cout << "2.Pije te nxehta" << endl;
            cout << "3.Desert" << endl;
            cout << "4.Koktel" << endl;
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
            cout << "Deshironi dicka nga nje kategori tjeter? Y/N" << endl;
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
        cout << "\t\t\t\t\tFUSION" << endl;
        cout << "Zgjidhni se cfare jeni/ cfare deshironi te beni" << endl;
        cout << "1.Kamarier" << endl;
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
            cout << "Profiti per sot eshte: $" << getTotal() << endl;
            cout << "Jane sherbyer " << getnrTables() << " tavolina " << endl;
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
        cout << "Deshironi te sherbeni nje tavoline tjeter" << endl;
        cin >> c;

        while (c == 'Y' || c == 'y')
        {
            setnrTables();
            input();
            setTotal();
            print();
            cout << "Deshironi te sherbeni nje tavoline tjeter" << endl;
            cin >> c;
            cout << "-------------------------------\n\n";
        }
        setChose();
    }
};
void menu::print()
{
    cout << "FUSION" << endl;
    cout << "Faktura: $" << price << endl;
    cout << "Jeni te mireseardhur \n" << endl;
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

