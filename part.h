#ifndef PART
#define PART

#include <string>

using namespace std;

class Part                              //класс для хранения информации о детале
{
private:
    string partName;                    //название детали
    unsigned __int32 article,           //артикул, соот-щий № детали в каталоге запчастей производителя
                     availability,      //наличие на складе автомастерской
                     price;             //стоимость детали для покупки у автомастерской
public:
    Part(string partName, unsigned __int32 article,                                 //конструктор
         unsigned __int32 availability, unsigned __int32 price);

    void getInfoPart(string& p_partName, unsigned __int32& p_article,               //метод для возврата
                       unsigned __int32& p_availability, unsigned __int32& p_price);//значения полей
};

#endif // PART

