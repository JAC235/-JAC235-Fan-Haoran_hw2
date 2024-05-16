/*
 * @Author: Haroun 2356125451@qq.com
 * @Date: 2024-05-09 18:14:39
 * @LastEditors: Haroun 2356125451@qq.com
 * @LastEditTime: 2024-05-14 21:56:17
 * @FilePath: /嵌入式基础/Atest/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<Arduino.h>

 //定义LED引脚
const int ledPins[]={2,3,4,5,6,7,8,9};
const int numLeds = 8;



void setup() {
  // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
for(int i = 0; i < numLeds; i++)
{
  pinMode(ledPins[i],OUTPUT);
}

}
 
void loop() {
  while (1)
  {
      digitalWrite(ledPins[1] , HIGH);
      delay(500);
      digitalWrite(ledPins[1] , LOW);
      delay(500);
  }

}
