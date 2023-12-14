#ifndef PART
#define PART

#include <string>
#include <stdint.h>

using namespace std;

class Part                              // класс для хранения информации о детале
{
private:
    string partName;            // название детали
    uint16_t article,           // артикул, соот-щий № детали в каталоге запчастей производителя
             availability;      // наличие на складе автомастерской
    float price;                // стоимость детали для покупки у автомастерской
public:
    Part(string p_partName, uint16_t p_article,                                 // конструктор
         uint16_t p_availability, float p_price);

    void getInfoPart(string& p_partName, uint16_t& p_article,               // метод для возврата
                       uint16_t& p_availability, float& p_price);           // значения полей
    void edit();        //редактирование
};

#endif // PART

