// 导入串口库
#include <SoftwareSerial.h>
#include<Arduino.h>


void setup() {
  // 初始化串口通信
  Serial.begin(9600);           // 通过USB连接到计算机

  // 输出欢迎消息
  Serial.println("Serial Communication Example");
}

void loop() {
  // 从计算机串口接收数据
  if (Serial.available() > 0) {
    char a;
    a = Serial.read();
    if(a=='1')
      Serial.print("LED1亮");
    
  }
  // 延时等待
  delay(1000);
}
