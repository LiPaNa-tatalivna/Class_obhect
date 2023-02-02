
#include <iostream>
#include <string>


using namespace std;

class Counter{
    int num;
public:
    Counter(int num){
        this -> num = num;
    }
    int get_num() { return num; } // геттер
    void add(){
        num++;
    }
    void minuss(){
        num--;
    }
    // ~Counter();
};


int main()
{
    cout << "Приветсвую! \nЭто программа счетчик";
    cout << "\nВы хотите указать начальное значение счётчика? \nВведите да или нет: ";
    string znach;
    cin >> znach;
    int num;
    if (znach == "да"){
        cout << "Введите начальное значение счётчика: ";
        cin >> num;
    }
    else{
        num = 0;
    }
    Counter coun(num);
    
    cout << "Введите команду ('+', '-', '=' или 'x'): ";
    cin >> znach;
    while (znach != "х"){
        if (znach == "+"){
            coun.add();
        }
        else if(znach == "-"){
            coun.minuss();
        }
        else if(znach == "="){
            cout << coun.get_num() << "\n";
        }
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> znach;
    }
    
    return 0;
}




