//引入依赖
#include <LiquidCrystal.h>

// 初始化针脚
const int rs = 3, en = 5, d4 = 7, d5 = 8, d6 = 9, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    //设置LCD要显示的列数、行数，即2行16列
    lcd.begin(16, 2);

    //输出Hello World
    lcd.setCursor(0, 1);//设置光标定位到第0列，第1行（从0开始）
    lcd.print("hello, world!");//输出Hello World
}

void loop() {
    
}