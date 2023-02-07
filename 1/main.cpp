#include <iostream>
#include <string>


using namespace std;

class Calculator{
    double znachenie_1;
    double znachenie_2;
public:
    Calculator(){
        znachenie_1 = 1;
        znachenie_2 = 1;
    }
    double add(){
        return (znachenie_1 + znachenie_2);
    };
    double multiply(){
        return (znachenie_1*znachenie_2);
    };
    double subtract_1_2(){
        return (znachenie_1 - znachenie_2);
    };
    double subtract_2_1(){
        return (znachenie_2 - znachenie_1);
    };
    double divide_1_2(){
        return (znachenie_1/znachenie_2);
    };
    double divide_2_1(){
        return (znachenie_2/znachenie_1);
    }
    bool set_num1(double znachenie_1){
        if (znachenie_1 != 0){
            this -> znachenie_1 = znachenie_1;
            return true;
        }
        else{
            cout << "Неверный ввод!\n";
            cout << "Введите значение еще раз:";
            return false;
        }
    };
    bool set_num2(double znachenie_2){
        if (znachenie_2 != 0){
            this -> znachenie_2 = znachenie_2;
            return true;
        }
        else{
            cout << "Неверный ввод!\n";
            return (false);
        }
    };
};


int main()
{
    Calculator calc;
    cout << "Приветсвую! \nЭто программа калькулятор,";
    cout << "\nОна поможет вам поапирировать над двумя значениями";
    int vixod;
    do{
        double num1, num2;
        cout << "\nВведите num1: ";
        do{
            cin >> num1;
        }while (calc.set_num1(num1) == false);
        cout << "Введите num2: ";
        do{
            cin >> num2;
        }while (false == calc.set_num2(num2));
        
        cout << "num1 + num2 = " << calc.add();
        cout << "\nnum1 * num2 = " << calc.multiply();
        cout << "\nnum1 - num2 = " << calc.subtract_1_2();
        cout << "\nnum2 - num1 = " << calc.subtract_2_1();
        cout << "\nnum1/num2 = " << calc.divide_1_2();
        cout << "\nnum2/num1 = " << calc.divide_2_1();
        
        // cout << "\nВведите 0, если хотите выйти: ";
        // cin >> vixod;
    }while (vixod != 0);
    
    return 0;
}
