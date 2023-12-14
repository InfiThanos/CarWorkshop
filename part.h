#ifndef PART
#define PART

#include <string>

using namespace std;

class Part                              //класс для хранения информации о детале
{
private:
    string partName;                    //название детали
    float article,                      //артикул, соот-щий № детали в каталоге запчастей производителя
          availability,                 //наличие на складе автомастерской
          price;                        //стоимость детали для покупки у автомастерской
public:
    Part(string p_partName, float p_article,                                        //конструктор
         float p_availability, float p_price);

    void getInfoPart(string& p_partName, float& p_article,                          //метод для возврата
                       float& p_availability, float& p_price);                      //значения полей
};

#endif // PART

