//Выпускная квалификационная работа
//Тема: Решающие деревья в принятии управленческих решений
//Программа для технологического раздела
//Котов Святослав Павлович, РТУ МИРЭА, ТМБО-01-15 (КБ-5), 4 курс, шифр 150261
//Направление: Прикладная математика
//Специализация: Математическое моделирование в экономике и технике
//Научный руководитель: Шамин Роман Вячеславович, доктор физико-математичеких наук, профессор
//Структурный руководитель: Галёмина Елена (Алёна) Александровна
//---
//DTFunc.cpp - файл реализации функций программы
//C++
//Qt 5.9.0
//MinGW 5.3.0 32 bit
//UTF-8

#include "DTFunc.h" //подключение заголовочного файла функций программы и необходимых библиотек

//---Вывод решающего дерева на экран---
    //---
    //Решающее дерево
    string DT00="                     P1 --- "; //DT00
    string DT01="                    ----|A| "; //DT01
    string DT02="                    |   --- "; //DT02
    string DT03="                    |       "; //DT03
    string DT04="                -----       "; //DT04
    string DT05="                |   |       "; //DT05
    string DT06="                |   |P2 --- "; //DT06
    string DT07="                |   ----|B| "; //DT07
    string DT08="                |       --- "; //DT09
    string DT09="                |           "; //DT09
    string DT10="             +T----         "; //DT10
    string DT11="            ---|T1|         "; //DT11
    string DT12="            |  ----         "; //DT12
    string DT13="       +S----               "; //DT13
    string DT14="      ---|S1|               "; //DT14
    string DT15="      |  ----               "; //DT15
    string DT16="      |     |-T----         "; //DT16
    string DT17="      |     ---|T2|         "; //DT17
    string DT18="      |        ----         "; //DT18
    string DT19="      |         |           "; //DT19
    string DT20="      |         |    P3 --- "; //DT20
    string DT21="      |         |   ----|C| "; //DT21
    string DT22="      |         |   |   --- "; //DT22
    string DT23="      |         |   |       "; //DT23
    string DT24="      |         -----       "; //DT24
    string DT25="      |             |       "; //DT25
    string DT26="      |             |P4 --- "; //DT25
    string DT27="      |             ----|D| "; //DT27
    string DT28="      |                 --- "; //DT28
    string DT29="  -----                     "; //DT29
    string DT30="  |                         "; //DT30
    string DT31=" ---                        "; //DT31
    string DT32=" |R|                        "; //DT32
    string DT33=" ---                        "; //DT33
    string DT34="  |                         "; //DT34
    string DT35="  -----                     "; //DT35
    string DT36="      |              P5 --- "; //DT36
    string DT37="      |             ----|E| "; //DT37
    string DT38="      |             |   --- "; //DT38
    string DT39="      |             |       "; //DT39
    string DT40="      |         -----       "; //DT40
    string DT41="      |         |   |       "; //DT41
    string DT42="      |         |   |P6 --- "; //DT42
    string DT43="      |         |   ----|F| "; //DT43
    string DT44="      |         |       --- "; //DT44
    string DT45="      |         |           "; //DT45
    string DT46="      |      +T----         "; //DT46
    string DT47="      |     ---|T3|         "; //DT47
    string DT48="      |     |  ----         "; //DT48
    string DT49="      |-S----               "; //DT49
    string DT50="      ---|S2|               "; //DT50
    string DT51="         ----               "; //DT51
    string DT52="            |-T----         "; //DT52
    string DT53="            ---|T4|         "; //DT53
    string DT54="               ----         "; //DT54
    string DT55="                |           "; //DT55
    string DT56="                |    P7 --- "; //DT56
    string DT57="                |   ----|G| "; //DT57
    string DT58="                |   |   --- "; //DT58
    string DT59="                |   |       "; //DT59
    string DT60="                -----       "; //DT60
    string DT61="                    |       "; //DT61
    string DT62="                    |P8 --- "; //DT62
    string DT63="                    ----|H| "; //DT63
    string DT64="                        --- "; //DT64
    //---
    void DTAll() //Решающее дерево целиком
    {
        //---
        //Вывод полного дерева решений
        cout<<DT00<<endl<<DT01<<endl<<DT02<<endl<<DT03<<endl<<DT04<<endl; //DT00, DT01, DT02, DT03, DT04
        cout<<DT05<<endl<<DT06<<endl<<DT07<<endl<<DT08<<endl<<DT09<<endl; //DT05, DT06, DT07, DT08, DT09
        cout<<DT10<<endl<<DT11<<endl<<DT12<<endl<<DT13<<endl<<DT14<<endl; //DT10, DT11, DT12, DT13, DT14
        cout<<DT15<<endl<<DT16<<endl<<DT17<<endl<<DT18<<endl<<DT19<<endl; //DT15, DT16, DT17, DT18, DT19
        cout<<DT20<<endl<<DT21<<endl<<DT22<<endl<<DT23<<endl<<DT24<<endl; //DT20, DT21, DT22, DT23, DT24
        cout<<DT25<<endl<<DT26<<endl<<DT27<<endl<<DT28<<endl<<DT29<<endl; //DT25, DT26, DT27, DT28, DT29
        cout<<DT30<<endl<<DT31<<endl<<DT32<<endl<<DT33<<endl<<DT34<<endl; //DT30, DT31, DT32, DT33, DT34
        cout<<DT35<<endl<<DT36<<endl<<DT37<<endl<<DT38<<endl<<DT39<<endl; //DT35, DT36, DT37, DT38, DT39
        cout<<DT40<<endl<<DT41<<endl<<DT42<<endl<<DT43<<endl<<DT44<<endl; //DT40, DT41, DT42, DT43, DT44
        cout<<DT45<<endl<<DT46<<endl<<DT47<<endl<<DT48<<endl<<DT49<<endl; //DT45, DT46, DT47, DT48, DT49
        cout<<DT50<<endl<<DT51<<endl<<DT52<<endl<<DT53<<endl<<DT54<<endl; //DT50, DT51, DT52, DT53, DT54
        cout<<DT55<<endl<<DT56<<endl<<DT57<<endl<<DT58<<endl<<DT59<<endl; //DT55, DT56, DT57, DT58, DT59
        cout<<DT60<<endl<<DT61<<endl<<DT62<<endl<<DT63<<endl<<DT64<<endl; //DT60, DT61, DT62, DT63, DT64
        //---
    }
    //---
    void DTRpSpTP1A() //Ветвь A - Высокий спрос
    {
        //---
        //Вывод ветви дерева решений, если следует увеличить площадь и использовать интенсивные технологии
        //Высокий спрос
        cout<<DT00<<endl<<DT01<<endl<<DT02<<endl<<DT03<<endl<<DT04<<endl; //DT00, DT01, DT02, DT03, DT04
        cout<<DT09<<endl<<DT10<<endl<<DT11<<endl<<DT12<<endl<<DT13<<endl; //DT09, DT10, DT11, DT12, DT13
        cout<<DT14<<endl<<DT15<<endl<<DT29<<endl<<DT30<<endl<<DT31<<endl; //DT14, DT15, DT29, DT30, DT31
        cout<<DT32<<endl<<DT33<<endl;                                     //DT32, DT33
        //---
    }
    //---
    void DTRpSmTP3C() //Ветвь С - Высокий спрос
    {
        //---
        //Вывод ветви дерева решений, если следует увеличить площадь и не использовать интенсивные технологии
        //Высокий спрос
        cout<<DT13<<endl<<DT14<<endl<<DT15<<endl<<DT16<<endl<<DT17<<endl; //DT13, DT14, DT15, DT16, DT17
        cout<<DT18<<endl<<DT19<<endl<<DT20<<endl<<DT21<<endl<<DT22<<endl; //DT18, DT19, DT20, DT21, DT22
        cout<<DT23<<endl<<DT24<<endl<<DT29<<endl<<DT30<<endl<<DT31<<endl; //DT23, DT24, DT29, DT30, DT31
        cout<<DT32<<endl<<DT33<<endl;                                     //DT32, DT33
        //---
    }
    //---
    void DTRmSpTP5E() //Ветвь E - Высокий спрос
    {
        //---
        //Вывод ветви дерева решений, если не надо увеличивать площадь, но следует использовать интенсивные технологии
        //Высокий спрос
        cout<<DT31<<endl<<DT32<<endl<<DT33<<endl<<DT34<<endl<<DT35<<endl; //DT31, DT32, DT33, DT34, DT35
        cout<<DT36<<endl<<DT37<<endl<<DT38<<endl<<DT39<<endl<<DT40<<endl; //DT36, DT37, DT38, DT39, DT40
        cout<<DT45<<endl<<DT46<<endl<<DT47<<endl<<DT48<<endl<<DT49<<endl; //DT45, DT46, DT47, DT48, DT49
        cout<<DT50<<endl<<DT51<<endl;                                     //DT50, DT51
        //---
    }
    //---
    void DTRmSmTP7G() //Ветвь G - Высокий спрос
    {
        //---
        //Вывод ветви дерева решений, если не надо увеличивать площадь и не следует использовать интенсивные технологии
        //Высокий спрос
        cout<<DT31<<endl<<DT32<<endl<<DT33<<endl<<DT34<<endl<<DT35<<endl; //DT31, DT32, DT33, DT34, DT35
        cout<<DT49<<endl<<DT50<<endl<<DT51<<endl<<DT52<<endl<<DT53<<endl; //DT49, DT50, DT51, DT52, DT53
        cout<<DT54<<endl<<DT55<<endl<<DT56<<endl<<DT57<<endl<<DT58<<endl; //DT54, DT55, DT56, DT57, DT58
        cout<<DT59<<endl<<DT60<<endl;                                     //DT59, DT60
        //---
    }
    //---
    void DTRpSpTP2B() //Ветвь B - Низкий спрос
    {
        //---
        //Вывод ветви дерева решений, если следует увеличить площадь и использовать интенсивные технологии
        //Низкий спрос
        cout<<DT04<<endl<<DT05<<endl<<DT06<<endl<<DT07<<endl<<DT08<<endl; //DT04, DT05, DT06, DT07, DT08
        cout<<DT09<<endl<<DT10<<endl<<DT11<<endl<<DT12<<endl<<DT13<<endl; //DT09, DT10, DT11, DT12, DT13
        cout<<DT14<<endl<<DT15<<endl<<DT29<<endl<<DT30<<endl<<DT31<<endl; //DT14, DT15, DT29, DT30, DT31
        cout<<DT32<<endl<<DT33<<endl;                                     //DT32, DT33
        //---
    }
    //---
    void DTRpSmTP4D() //Ветвь D - Низкий спрос
    {
        //---
        //Вывод ветви дерева решений, если следует увеличить площадь и не использовать интенсивные технологии
        //Низкий спрос
        cout<<DT13<<endl<<DT14<<endl<<DT15<<endl<<DT16<<endl<<DT17<<endl; //DT13, DT14, DT15, DT16, DT17
        cout<<DT18<<endl<<DT19<<endl<<DT24<<endl<<DT25<<endl<<DT26<<endl; //DT18, DT19, DT24, DT25, DT26
        cout<<DT27<<endl<<DT28<<endl<<DT29<<endl<<DT30<<endl<<DT31<<endl; //DT27, DT28, DT29, DT30, DT31
        cout<<DT32<<endl<<DT33<<endl;                                     //DT32, DT33
        //---
    }
    //---
    void DTRmSpTP6F() //Ветвь F - Низкий спрос
    {
        //---
        //Вывод ветви дерева решений, если не надо увеличивать площадь, но следует использовать интенсивные технологии
        //Низкий спрос
        cout<<DT31<<endl<<DT32<<endl<<DT33<<endl<<DT34<<endl<<DT35<<endl; //DT31, DT32, DT33, DT34, DT35
        cout<<DT40<<endl<<DT41<<endl<<DT42<<endl<<DT43<<endl<<DT44<<endl; //DT40, DT41, DT42, DT43, DT44
        cout<<DT45<<endl<<DT46<<endl<<DT47<<endl<<DT48<<endl<<DT49<<endl; //DT45, DT46, DT47, DT48, DT49
        cout<<DT50<<endl<<DT51<<endl;                                     //DT50, DT51
        //---
    }
    //---
    void DTRmSmTP8H() //Ветвь H - Низкий спрос
    {
        //---
        //Вывод ветви дерева решений, если не надо увеличивать площадь и не следует использовать интенсивные технологии
    //Низкий спрос
        cout<<DT31<<endl<<DT32<<endl<<DT33<<endl<<DT34<<endl<<DT35<<endl; //DT31, DT32, DT33, DT34, DT35
        cout<<DT49<<endl<<DT50<<endl<<DT51<<endl<<DT52<<endl<<DT53<<endl; //DT49, DT50, DT51, DT52, DT53
        cout<<DT49<<endl<<DT50<<endl<<DT51<<endl<<DT52<<endl<<DT53<<endl; //DT49, DT50, DT51, DT52, DT53
        cout<<DT63<<DT64<<endl;                                           //DT63, DT64
        //---
     }
        //---
//---#---
//---Меню---
    string prompt="AB"; //Допустимые буквы для меню
    //---
    char menu()
    {//Меню программы
        //---
        //Блок команд для отображения русского текста
        #ifdef Q_OS_WIN32
            QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
        #endif
        //---
        //Переменные с русским текстом
        //---Шапка---
        QString TU0="Дерево Решений"; //TU0
        QString TU1="Меню программы:"; //TU1
        //---Пункты меню---
        QString TM0="A. Ввод данных и расчёт оптимальной ветви\n"; //TM0
        QString TM1="B. Справка\n"; //TM1
        QString TM2="X. Выход из программы (или ALT + F4)\n"; //TM2
        //---Ввод---
        QString TE0="\n*** Напоминание: не забудьте включить английскую раскладку клавиатуры (SHIFT + ALT) ***\n"; //TE0
        QString TE1="\nВведите букву нужного пункта и нажмите ENTER: "; //TE1
        //---
        //Вывод шапки на экран
        cout<<TU0.toLocal8Bit().data()<<endl; //TU0
        cout<<"---------------"<<endl<<endl;
        cout<<TU1.toLocal8Bit().data()<<endl; //TU1
        //Вывод пунктов меню на экран
        cout<<TM0.toLocal8Bit().data(); //TM0
        cout<<TM1.toLocal8Bit().data(); //TM1
        cout<<TM2.toLocal8Bit().data(); //TM2
        //---
        //Вывод напоминания
        cout<<TE0.toLocal8Bit().data(); //TE0
        //---
        //Обработка выбора в меню по введённой букве
        for(char code; true; )
            {//ожидается выбор пункта
                //Вывод просьбы о вводе буквы
                cout<<TE1.toLocal8Bit().data(); //TE1
                //---
                cin>>code; code=toupper(code); cout<<endl;
                if (code=='X') { system("cls"); exit(0);}
                if ('A'<=code && code<='B') return code;
            }
        //---
    }
    //---
    void caseA() //Содержимое пункта A
    {//A. Ввод данных и расчёт оптимальной ветви
        //---
        //Блок команд для отображения русского текста
        #ifdef Q_OS_WIN32
            QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
        #endif
        //---
        //Переменные с русским текстом
        //---A---
        QString TA00="A. Ввод данных и расчёт оптимальной ветви\n"; //TA00
        QString TA01="Имеется агрономический питомник. Подробнее читайте в пункте B.\n"; //TA01
        QString TA02="Имеется следующее решающее дерево:\n"; //TA02
        //---
        QString TA03="Введите данные в перспективе развития 5 лет:\n"; //TA03
        //---
        QString TA04="Введите стоимость интенсивных технологий (T) [в млн у.е.]: "; //TA04
        //---
        QString TA05="Введите прогнозируемую прибыль при высоком спросе [в млн у.е.] за "; //TA05
        QString TA06="Введите вероятность высокого спроса [%-ты 10-й дробью] за "; //TA06
        //---
        QString TA07="Введите прогнозируемую прибыль при низком спросе [в млн у.е.] за "; //TA07
        QString TA08="Введите вероятность низкого спроса [%-ты 10-й дробью] за "; //TA08
        //---
        QString TA09=" год, если нужно увеличить площадь и использовать интенсивные технологии"; //TA09
        QString TA10=" год, если нужно увеличить площадь и не использовать интенсивные технологии"; //TA10
        QString TA11=" год, если не нужно увеличивать площадь, но стоит использовать интенсивные технологии"; //TA11
        QString TA12=" год, если не нужно увеличивать площадь и не стоит использовать интенсивные технологии"; //TA12
        //---
        QString TA13=" (A): "; //TA13
        QString TA14=" (B): "; //TA14
        QString TA15=" (C): "; //TA15
        QString TA16=" (D): "; //TA16
        QString TA17=" (E): "; //TA17
        QString TA18=" (F): "; //TA18
        QString TA19=" (G): "; //TA19
        QString TA20=" (H): "; //TA20
        //---
        QString TA21=" (P1): "; //TA21
        QString TA22=" (P2): "; //TA22
        QString TA23=" (P3): "; //TA23
        QString TA24=" (P4): "; //TA24
        QString TA25=" (P5): "; //TA25
        QString TA26=" (P6): "; //TA26
        QString TA27=" (P7): "; //TA27
        QString TA28=" (P8): "; //TA28
        //---
        QString TA29="Расчёт за "; //TA29
        QString TA30=" год:\n"; //TA30
        //---
        QString TA31="Оценка узла выбора спроса,"; //TA31
        //---
        QString TA32=" если нужно увеличить площадь и использовать интенсивные технологии"; //TA32
        QString TA33=" если нужно увеличить площадь и не использовать интенсивные технологии"; //TA33
        QString TA34=" если не нужно увеличивать площадь, но стоит использовать интенсивные технологии"; //TA34
        QString TA35=" если не нужно увеличивать площадь и не стоит использовать интенсивные технологии"; //TA35
        //---
        QString TA36=" (T1): "; //TA36
        QString TA37=" (T2): "; //TA37
        QString TA38=" (T3): "; //TA38
        QString TA39=" (T4): "; //TA39
        //---
        QString TA40="Оценка узла выбора стратегии развития,"; //TA40
        //---
        QString TA41=" если нужно увеличить площадь"; //TA41
        QString TA42=" если не нужно увеличивать площадь"; //TA42
        //---
        QString TA43=" (S1): "; //TA43
        QString TA44=" (S2): "; //TA44
        //---
        QString TA45="Итоговая оценка корня дерева решений"; //TA45
        //---
        QString TA46=" (R): "; //TA46
        //---
        QString TA47="Вероятность высокого спроса"; //TA47
        QString TA48="Вероятность низкого спроса"; //TA48
        //---
        QString TA49="Прогнозируемая прибыль при высоком спросе"; //TA49
        QString TA50="Прогнозируемая прибыль при низком спросе"; //TA50
        //---
        QString TA51=" (P1) "; //TA51
        QString TA52=" (P2) "; //TA52
        QString TA53=" (P3) "; //TA53
        QString TA54=" (P4) "; //TA54
        QString TA55=" (P5) "; //TA55
        QString TA56=" (P6) "; //TA56
        QString TA57=" (P7) "; //TA57
        QString TA58=" (P8) "; //TA58
        //---
        QString TA59=" (A) "; //TA59
        QString TA60=" (B) "; //TA60
        QString TA61=" (C) "; //TA61
        QString TA62=" (D) "; //TA62
        QString TA63=" (E) "; //TA63
        QString TA64=" (F) "; //TA64
        QString TA65=" (G) "; //TA65
        QString TA66=" (H) "; //TA66
        //---
        QString TA67="составляет: "; //TA67
        //---
        QString TA68="В данном случае нужно увеличить площадь и использовать интенсивные технологии."; //TA68
        QString TA69="В данном случае нужно увеличить площадь и не использовать интенсивные технологии."; //TA69
        QString TA70="В данном случае не нужно увеличивать площадь, но стоит использовать интенсивные технологии."; //TA70
        QString TA71="В данном случае не нужно увеличивать площадь и не стоит использовать интенсивные технологии."; //TA71
        //---
        QString TA72=" Будет высокий спрос:"; //TA72
        QString TA73=" Будет низкий спрос:"; //TA73
        //---
        //Переменные для ввода
        //---
        //T
        qreal T=0; //Стоимость интенсивных технологий
        //---
        //P00, P01, P02, P03, P04
        qreal P00=0; //Вероятность
        qreal P01=0; //высокого спроса
        qreal P02=0; //за 5 лет,
        qreal P03=0; //если нужно увеличить площадь и использовать
        qreal P04=0; //интенсивные технологии
        qreal P0[5]={P00, P01, P02, P03, P04};
        //---
        //P10, P11, P12, P13, P14
        qreal P10=0; //Вероятность
        qreal P11=0; //низкого спроса
        qreal P12=0; //за 5 лет,
        qreal P13=0; //если нужно увеличить площадь и использовать
        qreal P14=0; //интенсивные технологии
        qreal P1[5]={P10, P11, P12, P13, P14};
        //---
        //P20, P21, P22, P23, P24
        qreal P20=0; //Вероятность
        qreal P21=0; //высокого спроса
        qreal P22=0; //за 5 лет,
        qreal P23=0; //если нужно увеличить площадь и не использовать
        qreal P24=0; //интенсивные технологии
        qreal P2[5]={P20, P21, P22, P23, P24};
        //---
        //P30, P31, P32, P33, P34
        qreal P30=0; //Вероятность
        qreal P31=0; //низкого спроса
        qreal P32=0; //за 5 лет,
        qreal P33=0; //если нужно увеличить площадь и не использовать
        qreal P34=0; //интенсивные технологии
        qreal P3[5]={P30, P31, P32, P33, P34};
        //---
        //P40, P41, P42, P43, P44
        qreal P40=0; //Вероятность
        qreal P41=0; //высокого спроса
        qreal P42=0; //за 5 лет,
        qreal P43=0; //если не нужно увеличивать площадь, но стоит использовать
        qreal P44=0; //интенсивные технологии
        qreal P4[5]={P40, P41, P42, P43, P44};
        //---
        //P50, P51, P52, P53, P54
        qreal P50=0; //Вероятность
        qreal P51=0; //низкого спроса
        qreal P52=0; //за 5 лет,
        qreal P53=0; //если не нужно увеличивать площадь, но стоит использовать
        qreal P54=0; //интенсивные технологии
        qreal P5[5]={P50, P51, P52, P53, P54};
        //---
        //P60, P61, P62, P63, P64
        qreal P60=0; //Вероятность
        qreal P61=0; //высокого спроса
        qreal P62=0; //за 5 лет,
        qreal P63=0; //если не нужно увеличивать площадь и не стоит использовать
        qreal P64=0; //интенсивные технологии
        qreal P6[5]={P60, P61, P62, P63, P64};
        //---
        //P70, P71, P72, P73, P74
        qreal P70=0; //Вероятность
        qreal P71=0; //низкого спроса
        qreal P72=0; //за 5 лет,
        qreal P73=0; //если не нужно увеличивать площадь и не стоит использовать
        qreal P74=0; //интенсивные технологии
        qreal P7[5]={P70, P71, P72, P73, P74};
        //---
        //A0, A1, A2, A3, A4
        qreal A0=0; //Прогнозируемая прибыль
        qreal A1=0; //при высоком спросе
        qreal A2=0; //за 5 лет,
        qreal A3=0; //если нужно увеличить площадь и использовать
        qreal A4=0; //интенсивные технологии
        qreal A[5]={A0, A1, A2, A3, A4};
        //---
        //B0, B1, B2, B3, B4
        qreal B0=0; //Прогнозируемая прибыль
        qreal B1=0; //при низком спросе
        qreal B2=0; //за 5 лет,
        qreal B3=0; //если нужно увеличить площадь и использовать
        qreal B4=0; //интенсивные технологии
        qreal B[5]={B0, B1, B2, B3, B4};
        //---
        //C0, C1, C2, C3, C4
        qreal C0=0; //Прогнозируемая прибыль
        qreal C1=0; //при высоком спросе
        qreal C2=0; //за 5 лет,
        qreal C3=0; //если нужно увеличить площадь и не использовать
        qreal C4=0; //интенсивные технологии
        qreal C[5]={C0, C1, C2, C3, C4};
        //---
        //D0, D1, D2, D3, D4
        qreal D0=0; //Прогнозируемая прибыль
        qreal D1=0; //при низком спросе
        qreal D2=0; //за 5 лет,
        qreal D3=0; //если нужно увеличить площадь и не использовать
        qreal D4=0; //интенсивные технологии
        qreal D[5]={D0, D1, D2, D3, D4};
        //---
        //E0, E1, E2, E3, E4
        qreal E0=0; //Прогнозируемая прибыль
        qreal E1=0; //при высоком спросе
        qreal E2=0; //за 5 лет,
        qreal E3=0; //если не нужно увеличивать площадь, но стоит использовать
        qreal E4=0; //интенсивные технологии
        qreal E[5]={E0, E1, E2, E3, E4};
        //---
        //F0, F1, F2, F3, F4
        qreal F0=0; //Прогнозируемая прибыль
        qreal F1=0; //при низком спросе
        qreal F2=0; //за 5 лет,
        qreal F3=0; //если не нужно увеличивать площадь, но стоит использовать
        qreal F4=0; //интенсивные технологии
        qreal F[5]={F0, F1, F2, F3, F4};
        //---
        //G0, G1, G2, G3, G4
        qreal G0=0; //Прогнозируемая прибыль
        qreal G1=0; //при высоком спросе
        qreal G2=0; //за 5 лет,
        qreal G3=0; //если не нужно увеличивать площадь и не стоит использовать
        qreal G4=0; //интенсивные технологии
        qreal G[5]={G0, G1, G2, G3, G4};
        //---
        //H0, H1, H2, H3, H4
        qreal H0=0; //Прогнозируемая прибыль
        qreal H1=0; //при низком спросе
        qreal H2=0; //за 5 лет,
        qreal H3=0; //если не нужно увеличивать площадь и не стоит использовать
        qreal H4=0; //интенсивные технологии
        qreal H[5]={H0, H1, H2, H3, H4};
        //---
        //Рабочие переменные
        //---
        //T00, T01, T032, T03, T04
        qreal T00=0; //Узел выбора
        qreal T01=0; //спроса
        qreal T02=0; //за 5 лет,
        qreal T03=0; //если нужно увеличить площадь и использовать
        qreal T04=0; //интенсивные технологии
        qreal T0[5]={T00, T01, T02, T03, T04};
        //---
        //T10, T11, T12, T13, T14
        qreal T10=0; //Узел выбора
        qreal T11=0; //спроса
        qreal T12=0; //за 5 лет,
        qreal T13=0; //если нужно увеличить площадь и не использовать
        qreal T14=0; //интенсивные технологии
        qreal T1[5]={T10, T11, T12, T13, T14};
        //---
        //T20, T21, T22, T23, T24
        qreal T20=0; //Узел выбора
        qreal T21=0; //спроса
        qreal T22=0; //за 5 лет,
        qreal T23=0; //если не нужно увеличивать площадь, но стоит использовать
        qreal T24=0; //интенсивные технологии
        qreal T2[5]={T20, T21, T22, T23, T24};
        //---
        //T30, T31, T32, T33, T34
        qreal T30=0; //Узел выбора
        qreal T31=0; //спроса
        qreal T32=0; //за 5 лет,
        qreal T33=0; //если не нужно увеличивать площадь и не стоит использовать
        qreal T34=0; //интенсивные технологии
        qreal T3[5]={T30, T31, T32, T33, T34};
        //---
        //S00, S01, S02, S03, S04
        qreal S00=0; //Узел выбора
        qreal S01=0; //стратегии развития
        qreal S02=0; //за 5 лет,
        qreal S03=0; //если нужно
        qreal S04=0; //увеличить площадь
        qreal S0[5]={S00, S01, S02, S03, S04};
        //---
        //S10, S11, S12, S13, S14
        qreal S10=0; //Узел выбора
        qreal S11=0; //стратегии развития
        qreal S12=0; //за 5 лет,
        qreal S13=0; //если не нужно
        qreal S14=0; //увеличивать площадь
        qreal S1[5]={S10, S11, S12, S13, S14};
        //---
        //R1, R2, R3, R4, R5
        qreal R0=0; //Корень
        qreal R1=0; //решающего дерева
        qreal R2=0; //за 5 лет
        qreal R3=0; //для принятия управленческих решений
        qreal R4=0; //в развитии агрономического питомника ради получения наивысшей прибыли
        qreal R[5]={R0, R1, R2, R3, R4};
        //---
        //Технические переменные
        //---
        //RT0, RT1, RT2, RT3, RT4
        int RT0=0; //Переменные
        int RT1=0; //корня
        int RT2=0; //для выбора стратегии
        int RT3=0; //по увеличению площади
        int RT4=0; //или нет
        int RT[5]={RT0, RT1, RT2, RT3, RT4};
        //---
        //ST00, ST01, ST02, ST03, ST04
        int ST00=0; //Переменные
        int ST01=0; //площади
        int ST02=0; //для выбора
        int ST03=0; //стратегии
        int ST04=0; //по увеличению
        int ST0[5]={ST00, ST01, ST02, ST03, ST04};
        //---
        //ST10, ST11, ST12, ST13, ST14
        int ST10=0; //Переменные
        int ST11=0; //площади
        int ST12=0; //для выбора
        int ST13=0; //стратегии
        int ST14=0; //без увеличения
        int ST1[5]={ST10, ST11, ST12, ST13, ST14};
        //---
        //PT00, PT01, PT02, PT03, PT04
        int PT00=0; //Переменные
        int PT01=0; //вероятности
        int PT02=0; //для выбора
        int PT03=0; //высого и низкого спроса
        int PT04=0; //в пунктах A и B
        int PT0[5]={PT00, PT01, PT02, PT03, PT04};
        //---
        //PT10, PT11, PT12, PT13, PT14
        int PT10=0; //Переменные
        int PT11=0; //вероятности
        int PT12=0; //для выбора
        int PT13=0; //высокого и низкого спроса
        int PT14=0; //в пунктах C и D
        int PT1[5]={PT10, PT11, PT12, PT13, PT14};
        //---
        //PT20, PT21, PT22, PT23, PT24
        int PT20=0; //Переменные
        int PT21=0; //вероятности
        int PT22=0; //для выбора
        int PT23=0; //высокого и низкого спроса
        int PT24=0; //в пунктах E и F
        int PT2[5]={PT20, PT21, PT22, PT23, PT24};
        //---
        //PT30, PT31, PT32, PT33, PT34
        int PT30=0; //Переменные
        int PT31=0; //вероятности
        int PT32=0; //для выбора
        int PT33=0; //высого и низкого спроса
        int PT34=0; //в пунктах G и H
        int PT3[5]={PT30, PT31, PT32, PT33, PT34};
        //---
        int j=0; //Переменная для связи двух циклов
        //---
        //Шапка
        cout<<TA00.toLocal8Bit().data(); //TA00
        cout<<"------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        //---
        cout<<TA01.toLocal8Bit().data(); //TA01
        cout<<TA02.toLocal8Bit().data(); //TA02
        cout<<endl;
        DTAll(); //Решающее дерево целиком
        cout<<endl;
        cout<<TA03.toLocal8Bit().data(); //TA03
        cout<<endl;
        cout<<TA04.toLocal8Bit().data(); //TA04
        cin>>T; //T
        for (int i=0; i<=4; i++)
        {
            int j=i;
            cout<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
            //---
            cout<<endl;
            cout<<TA05.toLocal8Bit().data()<<i+1<<TA09.toLocal8Bit().data()<<TA13.toLocal8Bit().data(); //TA05, TA09, TA13
            cin>>A[j]; //A0, A1, A2, A3, A4
            cout<<endl<<endl;
            cout<<TA06.toLocal8Bit().data()<<i+1<<TA09.toLocal8Bit().data()<<TA21.toLocal8Bit().data(); //TA06, TA09, TA21
            cin>>P0[j]; //P01, P02, P03, P04, P05
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA07.toLocal8Bit().data()<<i+1<<TA09.toLocal8Bit().data()<<TA14.toLocal8Bit().data(); //TA07, TA09, TA14
            cin>>B[j]; //B0, B1, B2, B3, B4
            cout<<endl<<endl;
            cout<<TA08.toLocal8Bit().data()<<i+1<<TA09.toLocal8Bit().data()<<TA22.toLocal8Bit().data(); //TA08, TA09, TA22
            cin>>P1[j]; //P10, P11, P12, P13, P14
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA05.toLocal8Bit().data()<<i+1<<TA10.toLocal8Bit().data()<<TA15.toLocal8Bit().data(); //TA05, TA10, TA15
            cin>>C[j]; //C0, C1, C2, C3, C4
            cout<<endl<<endl;
            cout<<TA06.toLocal8Bit().data()<<i+1<<TA10.toLocal8Bit().data()<<TA23.toLocal8Bit().data(); //TA06, TA10, TA23
            cin>>P2[j]; //P20, P21, P22, P23, P24
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA07.toLocal8Bit().data()<<i+1<<TA10.toLocal8Bit().data()<<TA16.toLocal8Bit().data(); //TA07, TA10, TA16
            cin>>D[j]; //D0, D1, D2, D3, D4
            cout<<endl<<endl;
            cout<<TA08.toLocal8Bit().data()<<i+1<<TA10.toLocal8Bit().data()<<TA24.toLocal8Bit().data(); //TA08, TA10, TA24
            cin>>P3[j]; //P30, P31, P32, P33, P34
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA05.toLocal8Bit().data()<<i+1<<TA11.toLocal8Bit().data()<<TA17.toLocal8Bit().data(); //TA05, TA11, TA17
            cin>>E[j]; //E0, E1, E2, E3, E4
            cout<<endl<<endl;
            cout<<TA06.toLocal8Bit().data()<<i+1<<TA11.toLocal8Bit().data()<<TA25.toLocal8Bit().data(); //TA06, TA11, TA25
            cin>>P4[j]; //P40, P42, P42, P43, P44
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA07.toLocal8Bit().data()<<i+1<<TA11.toLocal8Bit().data()<<TA18.toLocal8Bit().data(); //TA07, TA11, TA18
            cin>>F[j]; //F0, F1, F2, F3, F4
            cout<<endl<<endl;
            cout<<TA08.toLocal8Bit().data()<<i+1<<TA11.toLocal8Bit().data()<<TA26.toLocal8Bit().data(); //TA08, TA11, TA26
            cin>>P5[j]; //P50, P51, P52, P53, P54
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA05.toLocal8Bit().data()<<i+1<<TA12.toLocal8Bit().data()<<TA19.toLocal8Bit().data(); //TA05, TA12, TA19
            cin>>G[j]; //G0, G1, G2, G3, G4
            cout<<endl<<endl;
            cout<<TA06.toLocal8Bit().data()<<i+1<<TA12.toLocal8Bit().data()<<TA27.toLocal8Bit().data(); //TA06, TA12, TA27
            cin>>P6[j]; //P60, P61, P62, P63, P64
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<TA07.toLocal8Bit().data()<<i+1<<TA12.toLocal8Bit().data()<<TA20.toLocal8Bit().data(); //TA07, TA12, TA20
            cin>>H[j]; //H0, H1, H2, H3, H4
            cout<<endl<<endl;
            cout<<TA08.toLocal8Bit().data()<<i+1<<TA12.toLocal8Bit().data()<<TA28.toLocal8Bit().data(); //TA08, TA12, TA28
            cin>>P7[j]; //P70, P71, P72, P73, P74
            cout<<endl;
            //---
            cout<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            system("pause");
        }
         //---
         for (int k=0; k<5; k++)
         {
            j=k;

                 if (P0[j]>=P1[j]) {PT0[j]=1;} //P0-PT0=1 (A-P1)
            else if (P1[j]> P0[j]) {PT0[j]=2;} //P1-PT0=2 (B-P2)

                 if (P2[j]>=P3[j]) {PT1[j]=1;} //P2-PT1=1 (C-P3)
            else if (P3[j]> P2[j]) {PT1[j]=2;} //P3-PT1=2 (D-P4)

                 if (P4[j]>=P5[j]) {PT2[j]=1;} //P4-PT2=1 (E-P5)
            else if (P5[j]> P4[j]) {PT2[j]=2;} //P5-PT2=2 (F-P6)

                 if (P6[j]>=P7[j]) {PT3[j]=1;} //P6-PT3=1 (G-P7)
            else if (P7[j]> P6[j]) {PT3[j]=2;} //P7-PT3=2 (Н-P8)

                 if (j==0) {T0[j]=A[j]*P0[j]+B[j]*P1[j]-T;} //T0-1   (A-B)
                      else {T0[j]=A[j]*P0[j]+B[j]*P1[j];}   //T0-2_5 (A-B)
                            T1[j]=C[j]*P2[j]+D[j]*P3[j];    //T1-1_5 (C-D)
                 if (j==0) {T2[j]=E[j]*P4[j]+F[j]*P5[j]-T;} //T2-1   (E-F)
                      else {T2[j]=E[j]*P4[j]+F[j]*P5[j];}   //T2-2_5 (E-F)
                            T3[j]=G[j]*P6[j]+H[j]*P7[j];    //T3-1_5 (G-H)
            
                 if (T0[j]>=T1[j]) {S0[j]=T0[j]; ST0[j]=1;} //S0,T0-ST0=1 (A-B)
            else if (T1[j]> T0[j]) {S0[j]=T1[j]; ST0[j]=2;} //S0,T1-ST0=2 (C-D)

                 if (T2[j]>=T3[j]) {S1[j]=T2[j]; ST1[j]=1;} //S1,T2-ST1=1 (E-F)
            else if (T3[j]> T2[j]) {S1[j]=T3[j]; ST1[j]=2;} //S1,T3-ST1=2 (G-H)

                 if (S0[j]>=S1[j]) {PT2[j]=0; PT3[j]=0; ST1[j]=0; RT[j]=1; R[j]=S0[j];} //R,RT=1 (A-D)
            else if (S1[j]> S0[j]) {PT0[j]=0; PT1[j]=0; ST0[j]=0; RT[j]=2; R[j]=S1[j];} //R,RT=2 (E-H)

                 if (ST0[j]==1) {PT1[j]=0;} //PT0=1-2,PT1=0 (A-P1,B-P2)
            else if (ST0[j]==2) {PT0[j]=0;} //PT1=1-2,PT0=0 (C-P3,D-P4)

                 if (ST1[j]==1) {PT3[j]=0;} //PT2=1-2,PT3=0 (E-P5,F-P6)
            else if (ST1[j]==2) {PT2[j]=0;} //PT3=1-2,PT2=0 (G-P7,H-P8)

            cout<<endl;
            cout<<TA29.toLocal8Bit().data()<<j+1<<TA30.toLocal8Bit().data(); //TA29, TA30
            cout<<"-----------------"<<endl;
            cout<<endl;
            cout<<TA31.toLocal8Bit().data()<<TA32.toLocal8Bit().data()<<TA36.toLocal8Bit().data()<<T0[j]<<endl; //TA31,TA32,TA36 - T0
            cout<<TA31.toLocal8Bit().data()<<TA33.toLocal8Bit().data()<<TA37.toLocal8Bit().data()<<T1[j]<<endl; //TA31,TA32,TA37 - T1
            cout<<TA31.toLocal8Bit().data()<<TA34.toLocal8Bit().data()<<TA38.toLocal8Bit().data()<<T2[j]<<endl; //TA31,TA32,TA38 - T2
            cout<<TA31.toLocal8Bit().data()<<TA35.toLocal8Bit().data()<<TA39.toLocal8Bit().data()<<T3[j]<<endl; //TA31,TA35,TA39 - T3
            cout<<endl;
            cout<<TA40.toLocal8Bit().data()<<TA41.toLocal8Bit().data()<<TA43.toLocal8Bit().data()<<S0[j]<<endl; //TA40,TA41,TA43 - S0
            cout<<TA40.toLocal8Bit().data()<<TA42.toLocal8Bit().data()<<TA44.toLocal8Bit().data()<<S1[j]<<endl; //TA40,TA42,TA44 - S1
            cout<<endl;
            cout<<TA45.toLocal8Bit().data()<<TA46.toLocal8Bit().data()<<R[j]<<endl; //TA45,TA46 - R
            cout<<endl;

                 if ((RT[j]==1) && (ST0[j]==1) && (ST1[j]==0) && (PT0[j]==1) && (PT1[j]==0) && (PT2[j]==0) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA51.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P0[j]<<endl; //TA47,TA51,TA67 - P0
                       cout<<TA48.toLocal8Bit().data()<<TA52.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P1[j]<<endl; //TA48,TA52,TA67 - P1
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA59.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<A[j]<<endl; //TA49,TA59,TA67 - A
                       cout<<TA50.toLocal8Bit().data()<<TA60.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<B[j]<<endl; //TA50,TA60,TA67 - B
                       cout<<endl;
                       cout<<TA68.toLocal8Bit().data()<<TA72.toLocal8Bit().data()<<endl; //TA68,TA72
                       cout<<endl;
                       DTRpSpTP1A(); //Ветвь A - Высокий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==1) && (ST0[j]==1) && (ST1[j]==0) && (PT0[j]==2) && (PT1[j]==0) && (PT2[j]==0) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA51.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P0[j]<<endl; //TA47,TA51,TA67 - P0
                       cout<<TA48.toLocal8Bit().data()<<TA52.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P1[j]<<endl; //TA48,TA52,TA67 - P1
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA59.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<A[j]<<endl; //TA49,TA59,TA67 - A
                       cout<<TA50.toLocal8Bit().data()<<TA60.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<B[j]<<endl; //TA50,TA60,TA67 - B
                       cout<<endl;
                       cout<<TA68.toLocal8Bit().data()<<TA73.toLocal8Bit().data()<<endl; //TA68,TA73
                       cout<<endl;
                       DTRpSpTP2B(); //Ветвь B - Низкий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==1) && (ST0[j]==2) && (ST1[j]==0) && (PT0[j]==0) && (PT1[j]==1) && (PT2[j]==0) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA53.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P2[j]<<endl; //TA47,TA53,TA67 - P2
                       cout<<TA48.toLocal8Bit().data()<<TA54.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P3[j]<<endl; //TA48,TA54,TA67 - P3
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA61.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<C[j]<<endl; //TA49,TA61,TA67 - C
                       cout<<TA50.toLocal8Bit().data()<<TA62.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<D[j]<<endl; //TA50,TA62,TA67 - D
                       cout<<endl;
                       cout<<TA69.toLocal8Bit().data()<<TA72.toLocal8Bit().data()<<endl; //TA69,TA72
                       cout<<endl;
                       DTRpSmTP3C(); //Ветвь С - Высокий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==1) && (ST0[j]==2) && (ST1[j]==0) && (PT0[j]==0) && (PT1[j]==2) && (PT2[j]==0) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA53.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P2[j]<<endl; //TA47,TA53,TA67 - P2
                       cout<<TA48.toLocal8Bit().data()<<TA54.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P3[j]<<endl; //TA48,TA54,TA67 - P3
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA61.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<C[j]<<endl; //TA49,TA61,TA67 - C
                       cout<<TA50.toLocal8Bit().data()<<TA62.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<D[j]<<endl; //TA50,TA62,TA67 - D
                       cout<<endl;
                       cout<<TA69.toLocal8Bit().data()<<TA73.toLocal8Bit().data()<<endl; //TA69,TA73
                       cout<<endl;
                       DTRpSmTP4D(); //Ветвь D - Низкий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==2) && (ST0[j]==0) && (ST1[j]==1) && (PT0[j]==0) && (PT1[j]==0) && (PT2[j]==1) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA55.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P4[j]<<endl; //TA47,TA55,TA67 - P4
                       cout<<TA48.toLocal8Bit().data()<<TA56.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P5[j]<<endl; //TA48,TA56,TA67 - P5
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA63.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<E[j]<<endl; //TA49,TA63,TA67 - E
                       cout<<TA50.toLocal8Bit().data()<<TA64.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<F[j]<<endl; //TA50,TA64,TA67 - F
                       cout<<endl;
                       cout<<TA70.toLocal8Bit().data()<<TA72.toLocal8Bit().data()<<endl; //TA70,TA72
                       cout<<endl;
                       DTRmSpTP5E(); //Ветвь E - Высокий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==2) && (ST0[j]==0) && (ST1[j]==1) && (PT0[j]==0) && (PT1[j]==0) && (PT2[j]==2) && (PT3[j]==0))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA55.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P4[j]<<endl; //TA47,TA55,TA67 - P4
                       cout<<TA48.toLocal8Bit().data()<<TA56.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P5[j]<<endl; //TA48,TA56,TA67 - P5
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA63.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<E[j]<<endl; //TA49,TA63,TA67 - E
                       cout<<TA50.toLocal8Bit().data()<<TA64.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<F[j]<<endl; //TA50,TA64,TA67 - F
                       cout<<endl;
                       cout<<TA70.toLocal8Bit().data()<<TA73.toLocal8Bit().data()<<endl; //TA70,TA73
                       cout<<endl;
                       DTRmSpTP6F(); //Ветвь F - Низкий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==2) && (ST0[j]==0) && (ST1[j]==2) && (PT0[j]==0) && (PT1[j]==0) && (PT2[j]==0) && (PT3[j]==1))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA57.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P6[j]<<endl; //TA47,TA57,TA67 - P6
                       cout<<TA48.toLocal8Bit().data()<<TA58.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P7[j]<<endl; //TA48,TA58,TA67 - P7
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA65.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<G[j]<<endl; //TA49,TA65,TA67 - G
                       cout<<TA50.toLocal8Bit().data()<<TA66.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<H[j]<<endl; //TA49,TA66,TA67 - H
                       cout<<endl;
                       cout<<TA71.toLocal8Bit().data()<<TA72.toLocal8Bit().data()<<endl; //TA71,TA72
                       cout<<endl;
                       DTRmSmTP7G(); //Ветвь G - Высокий спрос
                       cout<<endl;
                     }
            else if ((RT[j]==2) && (ST0[j]==0) && (ST1[j]==2) && (PT0[j]==0) && (PT1[j]==0) && (PT2[j]==0) && (PT3[j]==2))
                     {
                       cout<<TA47.toLocal8Bit().data()<<TA57.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P6[j]<<endl; //TA47,TA57,TA67 - P6
                       cout<<TA48.toLocal8Bit().data()<<TA58.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<P7[j]<<endl; //TA48,TA58,TA67 - P7
                       cout<<endl;
                       cout<<TA49.toLocal8Bit().data()<<TA65.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<G[j]<<endl; //TA49,TA65,TA67 - G
                       cout<<TA50.toLocal8Bit().data()<<TA66.toLocal8Bit().data()<<TA67.toLocal8Bit().data()<<H[j]<<endl; //TA49,TA66,TA67 - H
                       cout<<endl;
                       cout<<TA71.toLocal8Bit().data()<<TA73.toLocal8Bit().data()<<endl; //TA71,TA73
                       cout<<endl;
                       DTRmSmTP8H(); //Ветвь H - Низкий спрос
                       cout<<endl;
                     }

                 if (j!=4) {system("pause");}
          }
         //---
    }
    //---
    void caseB() //Содержимое пункта B
    {//B. Справка
        //---
        //Блок команд для отображения русского текста
        #ifdef Q_OS_WIN32
            QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
        #endif
        //---
        //Переменные с русским текстом
        //---B---
        QString TB00="B. Справка\n"; //TB00
        QString TB01="Данная программа была написана для выпускной квалификационной работы\n"; //TB01
        QString TB02="на тему ''Решающие деревья в принятии управленческих решений''.\n"; //TB02
        QString TB03="Суть задачи:\n"; //TB03
        QString TB04="Имеется агрономический питомник. Он использует только часть площади своей земли.\n"; //TB04
        QString TB05="Стоит выбор:\n"; //TB05
        QString TB06="- использовать площадь неосвоенной земли;\n"; //TB06
        QString TB07="- оставаться на текущей площади.\n"; //TB07
        QString TB08="Далее выбор разветвляется ещё по двум параметрам:\n"; //TB08
        QString TB09="- привлечь интенсивные технологии;\n"; //TB09
        QString TB10="- не привлекать интенсивные технологии.\n"; //TB10
        QString TB11="Дальше каждый исход зависит от высокого и низкого спроса.\n"; //TB11
        QString TB12="Получаем следующее дерево решений:\n"; //TB12
        QString TB13="Данная программа написана для вычисления опимальной ветви развития питомника,\n"; //TB13
        QString TB14="чтобы получить наивысшую прибыль (5 лет в перспективе).\n"; //TB14
        QString TB15="Для вычислений программе нужно задать входные данные - пункт A в меню.\n"; //TB15
        QString TB16="Входными данными будут:\n"; //TB16
        QString TB17="- стоимость интенсивных технологий;\n"; //TB17
        QString TB18="- предполагаемые прибыли за 5 лет;\n"; //TB18
        QString TB19="- вероятности высокого и низкого спроса за 5 лет.\n"; //TB19
        QString TB20="Чтобы получить расчёт оптимальной ветви, нужно выбрать в меню пункт B.\n"; //TB20
        QString TB21="О ВКР:\n"; //TB21
        QString TB22="Тема: ''Решающие деревья в принятии управленческих решений''\n"; //TB22
        QString TB23="Студент: Котов Святослав Павлович, РТУ МИРЭА, ТМБО-01-15 (КБ-5), 4 курс, шифр 150261\n"; //TB23
        QString TB24="Направление: Прикладная математика\n"; //TB24
        QString TB25="Специализация: Математическое моделирование в экономике и технике\n"; //TB25
        QString TB26="Научный руководитель: Шамин Роман Вячеславович, доктор физико-математичеких наук, профессор\n"; //TB26
        QString TB27="Структурный руководитель: Галёмина Елена (Алёна) Александровна\n"; //TB27
        QString TB28="Данная программа написана для технологического раздела ВКР\n"; //TB28
        //---
        //Шапка
        cout<<TB00.toLocal8Bit().data(); //TB00
        cout<<"-----------"<<endl;
        cout<<endl;
        //---
        cout<<TB01.toLocal8Bit().data(); //TB01
        cout<<TB02.toLocal8Bit().data(); //TB02
        cout<<endl;
        cout<<TB03.toLocal8Bit().data(); //TB03
        cout<<TB04.toLocal8Bit().data(); //TB04
        cout<<TB05.toLocal8Bit().data(); //TB05
        cout<<TB06.toLocal8Bit().data(); //TB06
        cout<<TB07.toLocal8Bit().data(); //TB07
        cout<<TB08.toLocal8Bit().data(); //TB08
        cout<<TB09.toLocal8Bit().data(); //TB09
        cout<<TB10.toLocal8Bit().data(); //TB10
        cout<<TB11.toLocal8Bit().data(); //TB11
        cout<<endl;
        cout<<TB12.toLocal8Bit().data(); //TB12
        cout<<endl;
        DTAll(); //Решающее дерево целиком
        cout<<endl;
        cout<<TB13.toLocal8Bit().data(); //TB13
        cout<<TB14.toLocal8Bit().data(); //TB14
        cout<<endl;
        cout<<TB15.toLocal8Bit().data(); //TB15
        cout<<TB16.toLocal8Bit().data(); //TB16
        cout<<TB17.toLocal8Bit().data(); //TB17
        cout<<TB18.toLocal8Bit().data(); //TB18
        cout<<TB19.toLocal8Bit().data(); //TB19
        cout<<endl;
        cout<<TB20.toLocal8Bit().data(); //TB20
        cout<<endl;
        cout<<"-----------------------------------------------------------------------------------------------"<<endl;
        cout<<TB21.toLocal8Bit().data(); //TB21
        cout<<TB22.toLocal8Bit().data(); //TB22
        cout<<TB23.toLocal8Bit().data(); //TB23
        cout<<TB24.toLocal8Bit().data(); //TB24
        cout<<TB25.toLocal8Bit().data(); //TB25
        cout<<TB26.toLocal8Bit().data(); //TB26
        cout<<TB27.toLocal8Bit().data(); //TB27
        cout<<TB28.toLocal8Bit().data(); //TB28
        cout<<"-----------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        //---
    }
    //---
//---#---
