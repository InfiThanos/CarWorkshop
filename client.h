#ifndef CLIENT_H
#define CLIENT_H

#include <string>

using namespace std;

class Client                //класс для хранения информации о клиенте
{
private:
    string name,            //ФИО клиента
           phoneNumber,     //номер телефона для связи с клиентом
           carBrand,        //марка автомобиля
           carModel,        //модель автомобиля
           VIN,             //VIN номер с СТС клиента
           regPlate;        //госзнак с автомобиля
    unsigned __int32 yearOfManufacture,     //год выпуска
                     carMileage;            //пробег
public:
    Client(string p_name, string p_phoneNumber, string p_carBrand,                  //конструктор
           string p_carModel, string p_VIN, string p_regPlate,
           unsigned __int32 p_yearOfManufacture,
           unsigned __int32 p_carMileage);

    void getInfoClient(string& p_name, string& p_phoneNumber, string& p_carBrand,   //метод для возврата
                         string& p_carModel, string& p_VIN, string& p_regPlate,     //значения полей
                         unsigned __int32& p_yearOfManufacture,
                         unsigned __int32& p_carMileage); // используются ссылки, т.к. при обращении к ней (ссылке)
                                                          // разыменование происходит автоматически;
                                                          // отличие от указателей в том, что с ссылками недопустимы
                                                          // арифметические операции, которые в данном случае не нужны
};

#endif // CLIENT_H
