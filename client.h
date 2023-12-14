#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <stdint.h>

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
    uint32_t yearOfManufacture;     //год выпуска
    float carMileage;            	//пробег
public:
    Client(string p_name, string p_phoneNumber, string p_carBrand,                  //конструктор
           string p_carModel, string p_VIN, string p_regPlate,
           uint32_t p_yearOfManufacture,
           float p_carMileage);

    void getInfoClient(string& p_name, string& p_phoneNumber, string& p_carBrand,   // метод для возврата
                         string& p_carModel, string& p_VIN, string& p_regPlate,     // значения полей
                         uint32_t& p_yearOfManufacture,
                         float& p_carMileage);                           	// используются ссылки, т.к. при обращении к ней (ссылке)
                                                                            // разыменование происходит автоматически;
                                                                            // отличие от указателей в том, что с ссылками недопустимы
                                                                            // арифметические операции, которые в данном случае не нужны
    void edit();        // редактирование
};

#endif // CLIENT_H
