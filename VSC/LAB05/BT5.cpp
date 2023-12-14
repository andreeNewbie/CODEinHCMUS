#include<iostream> 
#include<fstream> 

using namespace std;

struct Car
{
    string brand;
    string model;
    int year;
    double cost;
    int quantity;
};

//Khởi tạo mảng bằng dữ liệu có sẵn trong file. Chạy -> Khởi tạo lại.
int availableCar(Car Car_in_the_store[])
{
    int index = 0;

    ifstream fin("SaleCar.txt");

    while(!fin.eof())
    {
        fin >> Car_in_the_store[index].brand;
        fin >> Car_in_the_store[index].model;
        fin >> Car_in_the_store[index].year;
        fin >> Car_in_the_store[index].cost;
        fin >> Car_in_the_store[index].quantity;
        index++;
    }

    fin.close();
    return index;
}

void printAvailableCar(Car Car_in_the_store[])
{
    int k = availableCar(Car_in_the_store);
    for (int i = 0; i < k; i++)
    {
        cout << Car_in_the_store[i].brand << " ";
        cout << Car_in_the_store[i].model << " ";
        cout << Car_in_the_store[i].year << " ";
        cout << Car_in_the_store[i].cost << " ";
        cout << Car_in_the_store[i].quantity << endl;
    }
}

//Kiểm tra xem xe thêm vào đã có trong cửa hàng chưa.
int check(Car store[], Car newCar)
{
    int num = availableCar(store);
    int x = newCar.quantity;
    for (int i = 0; i < num; i++)
    {
        if (store[i].brand == newCar.brand && store[i].model == newCar.model && store[i].year == newCar.year && store[i].cost == newCar.cost)
        {
            //Nếu đã có trong cửa hàng thì cộng thêm số lượng thôi
            store[i].quantity += x;
            return num; //Số lượng loại xe vẫn vậy
        }
    }
    store[num] = newCar;
    return ++num;
}

//Lưu dữ liệu mới vào file
void saveToStore(Car store[], int n)
{
    fstream fout("SaleCar.txt", ios::out);
    for (int i = 0; i < (n - 1); i++)
    {
        fout << store[i].brand << " " << store[i].model << " " << store[i].year << " " 
        << store[i].cost << " " << store[i].quantity << endl;
    }
    fout << store[n - 1].brand << " " << store[n - 1].model << " " << store[n - 1].year << " " 
        << store[n - 1].cost << " " << store[n - 1].quantity;
    fout.close();
}

void add(Car store[])
{
    Car newCar;
    
    cout << "\nEnter new car' brand: ";
    cin >> newCar.brand;
    cout << "Enter model: ";
    cin >> newCar.model;
    cout << "Enter year of model: ";
    cin >> newCar.year;
    cout << "Enter cost: ";
    cin >> newCar.cost;
    cout << "Enter quantity: ";
    cin >> newCar.quantity;

    int n = check(store, newCar);

    saveToStore(store, n);
}

void remove(Car store[], int index)
{
    for (int i = index; i < (availableCar(store) - 1); i++)
        store[i] = store[i + 1];
    saveToStore(store, availableCar(store) - 1);
}

void checkSale(Car store[], Car saleCar)
{
    int numberOfCar = availableCar(store);

    for (int i = 0; i < numberOfCar; i++)
    {
        if(store[i].brand == saleCar.brand && store[i].model == saleCar.model && store[i].year == saleCar.year)
        {
            if (store[i].quantity > saleCar.quantity)
            {
                store[i].quantity -= saleCar.quantity;
                saveToStore(store, numberOfCar);
                cout << "Doanh thu " << saleCar.quantity * store[i].cost << endl;
                cout << "Da ban xe !";
                exit(0);
            }
            else if (store[i].quantity == saleCar.quantity)
            {
                remove(store, i);
                cout << "Doanh thu " << saleCar.quantity * store[i].cost << endl;
                cout << "Da ban xe !";
                exit(0);
            }
            else{
                cout << "Khong du so luong de ban.";
                exit(0);
            }

        }
    }
    cout << "Khong co loai xe do tai cua hang !!";
}

void sale(Car store[])
{
    Car saleCar;

    cout << "Enter brand of car you want to sale: ";
    cin >> saleCar.brand;
    cout << "Enter model: ";
    cin >> saleCar.model;
    cout << "Enter year of model: ";
    cin >> saleCar.year;
    cout << "How many car you wanna sale? ";
    cin >> saleCar.quantity;

    checkSale(store, saleCar);
}

int main()
{
    cout 
    << "<-------------------------------------------->"
    << "\nEnter a number to do a task:\n"
    << "1. Print available cars in the store\n"
    << "2. Add new car to store\n"
    << "3. Sale car\n"
    << "<-------------------------------------------->\n";

    int numberOfCar;

    Car Car_in_the_store[100];

    int choosen;
    cout << "Your choosen: ";
    cin >> choosen;

    switch(choosen)
    {
        case 1: printAvailableCar(Car_in_the_store); break;
        case 2: add(Car_in_the_store); break;
        case 3: sale(Car_in_the_store); break;
    }

    return 0;
}