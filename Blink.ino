#include<Wire.h>
#define sensor1 3
#define sensor2 4
#define sensor3 5
const int MPU9250_addr=0x68;
int16_t aX,aY,aZ,gX,gY,gZ,mX,mY,mZ;
void setup()
{
  Serial.begin(9600);
  pinMode(sensor1, OUTPUT);
  pinMode(sensor2, OUTPUT);
  pinMode(sensor3, OUTPUT);
  Wire.begin();
  Wire.beginTransmission(MPU9250_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
}
void loop()
{
  digitalWrite(sensor1, LOW);
  digitalWrite(sensor2, HIGH);
  digitalWrite(sensor3, HIGH);
  Wire.beginTransmission(MPU9250_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU9250_addr,14,true);
  aX=Wire.read()<<8|Wire.read();
  aY=Wire.read()<<8|Wire.read();
  aZ=Wire.read()<<8|Wire.read();
  gX=Wire.read()<<8|Wire.read();
  gY=Wire.read()<<8|Wire.read();
  gZ=Wire.read()<<8|Wire.read();
  mX=Wire.read()<<8|Wire.read();
  mY=Wire.read()<<8|Wire.read();
  mZ=Wire.read()<<8|Wire.read();
  delay(10);
  Serial.print("Sensor 1 aX = "); Serial.print(aX);
  Serial.print(" || aY = "); Serial.print(aY);
  Serial.print(" || aZ = "); Serial.print(aZ);
  Serial.print(" || gX = "); Serial.print(gX);
  Serial.print(" || gY = "); Serial.print(gY);
  Serial.print(" || gZ = "); Serial.print(gZ);
  Serial.print(" || mX = "); Serial.print(mX);
  Serial.print(" || mY = "); Serial.print(mY);
  Serial.print(" || mZ = "); Serial.println(mZ);
  delay(10);
  Wire.endTransmission(true);

  digitalWrite(sensor2, LOW);
  digitalWrite(sensor1, HIGH);
  digitalWrite(sensor3, HIGH);
  Wire.beginTransmission(MPU9250_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU9250_addr,14,true);
  aX=Wire.read()<<8|Wire.read();
  aY=Wire.read()<<8|Wire.read();
  aZ=Wire.read()<<8|Wire.read();
  gX=Wire.read()<<8|Wire.read();
  gY=Wire.read()<<8|Wire.read();
  gZ=Wire.read()<<8|Wire.read();
  mX=Wire.read()<<8|Wire.read();
  mY=Wire.read()<<8|Wire.read();
  mZ=Wire.read()<<8|Wire.read();
  delay(10);
  Serial.print("Sensor 2 aX = "); Serial.print(aX);
  Serial.print(" || aY = "); Serial.print(aY);
  Serial.print(" || aZ = "); Serial.print(aZ);
  Serial.print(" || gX = "); Serial.print(gX);
  Serial.print(" || gY = "); Serial.print(gY);
  Serial.print(" || gZ = "); Serial.print(gZ);
  Serial.print(" || mX = "); Serial.print(mX);
  Serial.print(" || mY = "); Serial.print(mY);
  Serial.print(" || mZ = "); Serial.println(mZ);
  delay(10);
  Wire.endTransmission(true);


  digitalWrite(sensor3, LOW);
  digitalWrite(sensor2, HIGH);
  digitalWrite(sensor1, HIGH);
  Wire.beginTransmission(MPU9250_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU9250_addr,14,true);
  aX=Wire.read()<<8|Wire.read();
  aY=Wire.read()<<8|Wire.read();
  aZ=Wire.read()<<8|Wire.read();
  gX=Wire.read()<<8|Wire.read();
  gY=Wire.read()<<8|Wire.read();
  gZ=Wire.read()<<8|Wire.read();
  mX=Wire.read()<<8|Wire.read();
  mY=Wire.read()<<8|Wire.read();
  mZ=Wire.read()<<8|Wire.read();
  delay(10);
  Serial.print("Sensor 3 aX = "); Serial.print(aX);
  Serial.print(" || aY = "); Serial.print(aY);
  Serial.print(" || aZ = "); Serial.print(aZ);
  Serial.print(" || gX = "); Serial.print(gX);
  Serial.print(" || gY = "); Serial.print(gY);
  Serial.print(" || gZ = "); Serial.print(gZ);
  Serial.print(" || mX = "); Serial.print(mX);
  Serial.print(" || mY = "); Serial.print(mY);
  Serial.print(" || mZ = "); Serial.println(mZ);
  delay(10);
}
